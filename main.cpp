#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void printTable(const vector<vector<string>>& table) {
    cout << "\nТекущая таблица:\n";
    cout << "---------------------------\n";
    for (int i = 0; i < table.size(); ++i) {
        cout << "| ";
        for (int j = 0; j < table[i].size(); ++j) {
            cout << setw(10) << table[i][j] << " |";
        }
        cout << "\n---------------------------\n";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<vector<string>> table = {
        {"ID", "Имя", "Возраст"},
        {"1", "Иван", "25"},
        {"2", "Мария", "30"}
    };

    int row, col;
    string newValue;
    char choice;
    
    do {
        printTable(table);

        cout << "\nВведите номер строки (0-" << table.size() - 1 << "): ";
        cin >> row;
        cout << "Введите номер столбца (0-" << table[0].size() - 1 << "): ";
        cin >> col;

        if (row >= 0 && row < table.size() && col >= 0 && col < table[0].size()) {
            cout << "Введите новое значение: ";
            cin >> newValue;
            table[row][col] = newValue;
            cout << "Ячейка [" << row << "][" << col << "] обновлена.\n";
        }
        else {
            cout << "Ошибка: неверные координаты.\n";
        }

        cout << "Продолжить редактирование? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Финальная таблица:\n";
    printTable(table);

    return 0;
}