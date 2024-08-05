#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Russian");
    wcout << L"Привет Сэм! Сколько километров ты сегодня пробежал?\t";
    int temp;
    int distance;
    cin >> distance;
    
    for(int i = 1; i <= distance; i++){
        wcout << L"Какой темп был на километре " << i << L"?\t";
        cin >> temp;
    }

    int tempSec = temp % 60;
    int tempMin = temp / 60;

    wcout << L"Твой средний темп бега сегодня:\t" << tempMin << L" минут : " << tempSec << L" секунд" << endl;

    return 0;
}