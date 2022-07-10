#define MATRIX_H
#include <stdio.h>

FILE *note;

#define maxSize 20
int rows, columns;
int matrix[maxSize][maxSize];

void readMatrix(); //функция для чтения матрицы с файла
void output(); //функция для вывода матрицы