#define MATRIX_H
#include <stdio.h>

FILE *note;

#define maxSize 20
int rows, columns;
int matrix[maxSize][maxSize];

void readMatrix(); //������� ��� ������ ������� � �����
void output(); //������� ��� ������ �������