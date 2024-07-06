#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float hp;
    float magicResistance;
    float fireballDmg;

        while(true) {
            wcout << L"Введите текущий уровень здоровья орка: ";
            cin >> hp;

            if (hp < 0) {
                wcout << L"Неверный ввод. Уровень здоровья не может быть ниже 0" << endl;
                continue;
            }

            wcout << L"Введите уровень сопротивления магии: ";
            cin >> magicResistance;

            if (magicResistance < 0) {
                wcout << L"Неверный ввод. Уровень сопротивления магии не может быть 0" << endl;
                continue;
            }

            wcout << L"Введите урон огненного шара: ";
            cin >> fireballDmg;

            if (fireballDmg < 0) {
                wcout << L"Неверный ввод. Урон огненного шара не может быть 0" << endl;
                continue;
            }

            if(hp <= 0){
                wcout << L"Орк погибает. GG";
                break;
            }
        }
        float adjustedFireballDmg;
}