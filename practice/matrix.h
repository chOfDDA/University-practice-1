#define MATRIX_H
#include <stdio.h>

#define maxSize 20
int rows, columns;
int matrix[maxSize][maxSize];

void readMatrix(int matrix[maxSize][maxSize], FILE* note); //функция для чтения матрицы с файла
void output(int matrix[maxSize][maxSize]); //функция для вывода матрицы