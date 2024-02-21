#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    const int  rows = 3, column = 5;
    int numbers[rows][column];
    int n = 0;
    double sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            n += 1;
            cout << "[" <<n<< "]" << ": ";
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        cout << "\n";
        for (int j = 0; j < column; j++)
        {
            cout << numbers[i][j] <<"\t";
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum += numbers[i][j];
        }
    }
    cout << sum/n;
}  
