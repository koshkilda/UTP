#include <iostream>

using namespace std;                //подключаем пространство имен std

int main() {
    int mas[100];                    //создание массива
    int size;
    cout << "Введите количество чисел:" << endl;
    cin >> size;

    cout << "Введите числа:" << endl;
    for (int i = 0; i < size; i++) {   //заполнение массива
        cin >> mas[i];
    }


    int max = mas[0];             //поиск максимального элемента
    for (int i = 1; i < size; i++) {
        if (mas[i] >  max) {
            max = mas[i];
        }
    }
    cout << "Максимальный элемент массива: " << max << endl; //вывод максимального элемента массива

    return 0;
}
