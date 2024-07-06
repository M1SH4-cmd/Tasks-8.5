#include <iostream>
#include <cmath>
#include <cstdio>
#include <conio.h>
using namespace std;
using uint = unsigned int; //Проблема с контролем ввода решил сам С++ ))

int main() {
    double mass;
    uint force;
    uint t;
    string message;
    setlocale(LC_ALL, "Russian");
    wcout << L"Введите массу:\t";
    cin >> mass;
    wcout << L"Введите силу тяги:\t";
    cin >> force;
    wcout << L"Введите время:\t";
    cin >> t;

    if(mass < 0 || force < 0 || t < 0){
        wcout << L"Некорректный ввод!";
    }

    double a = (double) force / mass;
    double distance = (a * pow(t,2)) / 2;

    printf("Ship will reach %2.f miles after %d seconds past\n", distance, t); //  << t << L" секунд "
}

