#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float hp;
    float magicResistance;
    float fireballDmg;


        wcout << L"Введите текущий уровень здоровья орка: ";
        cin >> hp;
        while(true) {
            if (hp <= 0) {
                wcout << L"Неверный ввод. Уровень здоровья не может быть 0" << endl;
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
        }
        float adjustedFireballDmg;



}