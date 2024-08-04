#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float x, y, z;
    wcout << L"Введите размеры бруска в формате Высота Длинна Ширина:\t";
    cin >> x >> y >> z;

    if(x <= 0 || y <= 0 || z <= 0){
        wcout << L"Размеры бруска не могут быть отрицательными или равными нулю.\n";
        return 0;
    }

    int length = y / (float) 5;
    int width = z / (float) 5;
    int height = x / (float) 5;

    int finalQuantity = (width * length) * height;

    string line = "From balk " + to_string(x) + " X " + to_string(y) + " X " + to_string(z) + " it is possible to make " + to_string(finalQuantity / 27) + " sets ";

    cout << line << endl;

    wcout << L"Кол-во кубиков: " << finalQuantity << endl;
}