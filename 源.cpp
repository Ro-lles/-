#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

//打印乘法口诀表

int main(void) {
	int  width;

	for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= i ; j++) {
				width = (j == 1) ? 1 : 2;
				cout << j << "x" << i << "=" << setw(width) << left << j * i << " ";
			}
			cout << endl;
	}

	system("pause");
	return 0;
}