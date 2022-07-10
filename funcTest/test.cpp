#include "pch.h"
#include "..\practice\matrix.c"

//тестирование чтения с файла
TEST(testReading, res) {
	readMatrix();
	EXPECT_EQ(matrix[0][0], 2);
	EXPECT_EQ(matrix[1][2], 88);
	EXPECT_EQ(matrix[2][3], 7);
	EXPECT_EQ(matrix[2][2], -28);
	EXPECT_EQ(matrix[3][4], 9);
}