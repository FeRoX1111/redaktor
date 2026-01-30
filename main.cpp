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