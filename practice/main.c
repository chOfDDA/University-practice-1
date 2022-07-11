#include "matrix.h"

int main() {
	FILE* note;
	note = fopen("C:\\Users\\User\\source\\repos\\practice\\matrixInfo.txt", "r");

	if (note == NULL) {
		printf("File doesn't exist!\n");
		return 0;
	}
	else {
		readMatrix(matrix, note);
		output(matrix);
	}

	fclose(note);
	return 0;
}