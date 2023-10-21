#include <iostream>
#include <fstream>

using namespace std;
const int MAX = 100;

void getRow(int numbers[], int rows, int cols, int row, int result[]);
void getCol(int numbers[], int rows, int cols, int col, int result[]);

void getRow(int numbers[], int rows, int cols, int row, int result[])
{
    for (int i = 0; i < cols; i++)
    {
        result[i] = numbers[(row - 1) * cols + i];
    }
}
void getCol(int numbers[], int rows, int cols, int col, int result[])
{
    for (int i = 0; i < rows; i++)
    {
        result[i] = numbers[(col - 1) + (cols * i)];
    }
}
