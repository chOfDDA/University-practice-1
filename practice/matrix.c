#include "matrix.h"

void readMatrix() {
	fscanf(note, "%d%d", &rows, &columns);
	matrix[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			fscanf(note, "%d", &matrix[i][j]);
		}
	}
}

void output() {
	printf(" -----------------------------\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("|%3.0d  ", matrix[i][j]);
		}
		printf("| \n");
		printf(" -----------------------------\n");
	}
}