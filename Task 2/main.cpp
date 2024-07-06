#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float hp;
    float magicResistance;
    float fireballDmg;


    wcout << L"Введите текущий уровень здоровья орка (не более 100): ";
    cin >> hp;
    if (hp < 0 || hp > 100) {
        wcout << L"Неверный ввод" << endl;
    }
    hp /= 100;

    wcout << L"Введите уровень сопротивления магии (не более 100): ";
    cin >> magicResistance;
    if (magicResistance < 0 || magicResistance > 100) {
        wcout << L"Неверный ввод!" << endl;
    }
    magicResistance /= 100;

    wcout << L"Введите урон огненного шара (не более 100): ";
    cin >> fireballDmg;
    if (fireballDmg < 0 || fireballDmg > 100) {
        wcout << L"Неверный ввод" << endl;
    }
    fireballDmg /= 100;


    while(true){
        if(hp <= 0){
            wcout << L"Ну всё, GG" << endl;
            break;
        }
        hp -= fireballDmg - magicResistance;
        wcout << L"HP орка падает на " << fireballDmg - magicResistance << L" единиц здоровья. Новый уровень здоровья\n: " << hp * 100 << endl;
    }
}