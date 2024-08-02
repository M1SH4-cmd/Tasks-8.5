#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float health, resistance, power, damage;

    // Ввод количества здоровья и сопротивляемости магии орка
    wcout << L"Введите здоровье Орка (от 0 до 1): ";
    cin >> health;

    wcout << L"Введите сопротивление урону от магии (от 0 до 1): ";
    cin >> resistance;

    // Проверка корректности ввода
    if (health < 0 || health > 1 || resistance < 0 || resistance > 1) {
        wcout << L"Неверные значения. Здоровье и сопротивление должны быть в диапазоне от 0 до 1." << endl;
        return 1;
    }

    // Цикл, пока орк не погибнет
    while (health > 0) {
        // Ввод мощности удара
        wcout << L"Введите урон огненного шара (от 0 до 1): ";
        cin >> power;

        // Проверка корректности ввода
        if (power < 0 || power > 1) {
            wcout << L"Неверное значение урона. Урон должен быть в диапазоне от 0 до 1." << endl;
            continue;
        }

        // Расчет итогового урона
        damage = power * (1 - resistance);

        // Обновление здоровья орка
        health -= damage;

        // Вывод итогового урона и оставшегося здоровья
        wcout << L"Итоговый урон: " << damage << endl;
        wcout << L"Остаток здоровья: " << health << endl;
    }

    wcout << L"Орк погиб." << endl;

    return 0;
}
