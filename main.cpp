#include "main.hpp"

int main()
{
    int numbers[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int result[MAX];
    getRow(numbers, 3, 3, 2, result);
    for (int i = 0; i < 3; i++) cout << result[i] << "\t";
    cout << endl;
    getCol(numbers, 3, 3, 1, result);
    for (int i = 0; i < 3; i++) cout << result[i] << "\t";
    cout << endl;
    return 0;
}
