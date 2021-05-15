#include <iostream>
#include <cmath>
using namespace std;

const int LABIRINT_LENGTH = 4;
const int LABIRINT_WIDTH = 4;

const int ENTER_POINT[2] = {0, 0};
const int EXIT_POINT[2] = {4, 4};

int pathLength = 0;

// Вывод лабиринта
int printLabirint(int labirint[LABIRINT_LENGTH][LABIRINT_WIDTH])
{
    // Лабиринт
    for (int i = 0; i < LABIRINT_LENGTH; i++)
    {
        for (int j = 0; j < LABIRINT_WIDTH; j++)
        {
            cout << to_string(labirint[i][j]) + " ";
        }
        cout << endl;
    }
    return 0;
}

// Ввод лабиринта
void enterLabirint(int labirint[LABIRINT_LENGTH][LABIRINT_WIDTH])
{
    // Лабиринт
    for (int i = 0; i < LABIRINT_LENGTH; i++)
    {
        for (int j = 0; j < LABIRINT_WIDTH; j++)
        {
            cout << "Введите элемент " + to_string(i) + ":" + to_string(j) + " - ";
            cin >> labirint[i][j];
        }
    }
}

int main()
{
    cout << "Hello world" << endl;
    int labirint[LABIRINT_LENGTH][LABIRINT_WIDTH];

    int labirint[LABIRINT_LENGTH][LABIRINT_WIDTH] = {
        {0, 0, 0, 0, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 1, 0, 0, 0}};

    // enterLabirint(labirint);

    printLabirint(labirint);
    return 0;
}
