#define MATRIX_H
#include <stdio.h>

#define maxSize 20
int rows, columns;
int matrix[maxSize][maxSize];

void readMatrix(int matrix[maxSize][maxSize], FILE* note); //������� ��� ������ ������� � �����
void output(int matrix[maxSize][maxSize]); //������� ��� ������ �������