#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int days = 7;  
    double harvest[days];
    double maxHarvest;     
    int maxDay = 0;        

    cout << "Введіть врожай (в кг) за кожен день тижня:\n";
    for (int i = 0; i < days; ++i) {
        cout << "День " << i + 1 << ": ";
        cin >> harvest[i];
    }

    maxHarvest = harvest[0];

    for (int i = 1; i < days; ++i) {
        if (harvest[i] > maxHarvest) {
            maxHarvest = harvest[i];
            maxDay = i;  
        }
    }

    cout << "\nНайбільший врожай за тиждень: " << maxHarvest << " кг\n";
    cout << "Найбільший врожай був у день " << maxDay + 1;

    return 0;
}
