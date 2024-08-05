#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Russian");
    int iterations;
    float startDelta;
    float endDelta;

    wcout << L"Введите начальную амплитуду:\t";
    cin >> startDelta;
    wcout << L"Введите остановочную амплитуду:\t";
    cin >> endDelta;


    for (iterations = 1; startDelta > endDelta; iterations++) {
        startDelta -= 8.4;
        if(startDelta < 0) startDelta = 0;
        wcout << L"Колебание " << iterations << L":\t" << startDelta << endl;
    }
    wcout << L"Колебания закончены. Всего:\t" << (iterations - 1) << endl;
    
}
