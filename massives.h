//
//  Header.h
//  lessonsAIP
//
//  Created by Арсений Войкин on 04.12.2021.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <cmath>


using namespace std;

int* input (int size) // ВВОД
{
    int *arr = new int[size];
    cout << "Введите каждое значение массива: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

void output (int *arr, int size) // ВЫВОД
{
   for (int i = 0; i < size; i++)
        {
                cout<< arr[i] << " ";
        }
}

int maximum (int *arr, int size) // ПОИСК МАКСИМУМА
{
    int maxx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxx) {maxx = arr[i];}
    }
    return maxx;
}

int minimum (int *arr, int size) // ПОИСК МИНИМУМА
{
    int minn = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minn) {minn = arr[i];}
    }
    return minn;
}

void sortvoz(int* arr, int size) // СОРТИРОВКА ПО ВОЗРАСТАНИЮ
{
    int tmp;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (arr[j + 1] < arr[j])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void higherthen (int *arr, int size, int k) // ВЫВОД ЗНАЧЕНИЙ БОЛЬШИХ ЗАДАННОГО
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > k) {cout << arr[i] << " ";}
    }
}

void zamenaotr (int *arr, int size) // ЗАМЕНА ВСЕХ ОТРИЦАТЕЛЬНЫХ ЧИСЕЛ НА 0
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) {arr[i] = 0;}
    }
}

int summa(int *arr, int size) // СУММА ВСЕХ ЭЛЕМЕНТОВ
{
    int sum = 0;
    for (int i = 0; i < size; i++) {sum+= arr[i];}
    return sum;
}

int proizved(int *arr, int size) // ПРОИЗВЕДЕНИЕ ВСЕХ ЭЛЕМЕНТОВ
{
    int proizv = 1;
    for (int i = 0; i < size; i++) {proizv*= arr[i];}
    return proizv;
}

bool isprime(int n) // ПРОВЕРКА НА ПРОСТОЕ ЧИСЛО
{
    if (n == 1) {return false;}
    if (n == 2) {return true;}
    for (int i = 2; i < sqrt(n) + 1; i++) {if (n % i == 0) {return false;}}
    return true;
}

int countprime(int *arr, int size) // КОЛИЧЕСТВО ПРОСТЫХ ЧИСЕЛ В МАССИВЕ
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (isprime(arr[i])) {count++;}
    }
    return count;
}

void nulling(int *arr, int size) // обнуление массива
{
    for (int i = 0; i < size; i++) {arr[i] = 0;}
}

#endif
