#include "matrix.h"

int main() {
	note = fopen("C:\\Users\\User\source\repos\practice\matrixInfo.txt", "r");

	if (note == NULL) {
		printf("File doesn't exist!\n");
		return 0;
	}
	else {
		readMatrix();
		output();
	}

	fclose(note);
	return 0;
}