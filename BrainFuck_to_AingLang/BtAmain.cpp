#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cstdlib>

int main(int argc, char* argv[]) {
	char arr[20][16384] = { {0,}, };
	char arr2[40][16384] = { {0,}, };


	bool b=true;


	int i, j;
	char a;
	for (i = 0; i < 20 && b; i++) {
		for (j = 0; j < 16383 && b; j++) {
			a = (char)getchar();
			if (a == '\n') {
				b = false;
			}
			if (a == 62) {
				std::cout << "������";
			}
			if (a == 60) {
				std::cout << "��������";
			}
			if (a == 43) {
				std::cout << "����������";
			}
			if (a == 45) {
				std::cout << "������������";
			}

			if (a == 46) {
				std::cout << "��������������";
			}

			if (a == 44) {
				std::cout << "����������������";
			}

			if (a == 91) {
				std::cout << "������������������";
			}

			if (a == 93) {
				std::cout << "��������������������";
			}
			arr[i][j] = a;
		}
	}

	system("pause");
	return 0;
}