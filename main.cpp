#include <iostream>
#include "main.hpp"
using namespace std;

int main()
{
	/*****************************************
	1	2	3
	4	5	6
	7 	8	9
	*****************************************/
	int numbers[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int rows = 3;
	int cols = 3;
	int row, col;
	int result[MAX];
	row = 3;
	getRow(numbers, rows, cols, row, result);
	for (int i = 0; i < cols; i++)
		cout << result[i] << "\t";
	cout << endl;
	col = 2;
	getCol(numbers, rows, cols, col, result);
	for (int i = 0; i < rows; i++)
		cout << result[i] << "\t";
	cout << endl;

	int numbers2[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	/*****************************************
	1	2	3 	4	5
	6 	7	8	9	10
	11	12 	13	14	15
	16	17 	18	19	20
	*****************************************/
	rows = 4;
	cols = 5;
	row = 4;
	getRow(numbers2, rows, cols, row, result);
	for (int i = 0; i < cols; i++)
		cout << result[i] << "\t";
	cout << endl;
	col = 5;
	getCol(numbers2, rows, cols, col, result);
	for (int i = 0; i < rows; i++)
		cout << result[i] << "\t";
	cout << endl;
}