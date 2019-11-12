#include "print.h"
void print(int num) {
	if (num >= 100) {
		cout << num << " is a large number." << endl;
	}
	if (num & 1) {
		cout << num << " is an odd number." << endl;
	} else {
		cout << num << " is an even number." << endl;
	}
	
	if ((num % 3) == 0) {
		cout << num << " can be dividen by 3." << endl;
	}
	
}
