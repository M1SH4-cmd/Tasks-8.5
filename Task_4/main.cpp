#include <iostream>
using uint = unsigned int;
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    uint percentage;
    uint fileSize;
    uint progress = 0;
    uint connectionSpeed;
    wcout << L"Введите размер вашего файла: " << endl;
    cin >> fileSize;
    wcout << L"Введите скорость вашего соединения" << endl;
    cin >> connectionSpeed;
    
    for (; progress < fileSize;) {
        progress += connectionSpeed;
        percentage = (progress * 100) / fileSize;
        if(percentage > 100) percentage = 100;
        if(progress > fileSize) progress = fileSize;
        wcout << L"Прогресс скачивания:\t" << progress << L" из " << fileSize << " (" << percentage << " %) " << endl;
    }
}