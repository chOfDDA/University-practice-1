#include "pch.h"
#include "..\practice\matrix.c"
#define direction "C:/Users/User/source/repos/practice/matrixInfo.txt"

//тестирование открытия файла
TEST(openFile, res) {
	EXPECT_NE(fopen(direction, "r"), nullptr);
}

//тестирование функции чтения с файла
TEST(testReading, res) {
	int matrix[maxSize][maxSize];
	FILE* note = fopen(direction, "r");
	readMatrix(matrix, note);
	EXPECT_EQ(matrix[0][0], 2);
	EXPECT_EQ(matrix[1][2], 88);
	EXPECT_EQ(matrix[2][3], 7);
	EXPECT_EQ(matrix[2][2], -28);
	EXPECT_EQ(matrix[3][4], 9);
	fclose(note);
}