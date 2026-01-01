#include <iostream>
using namespace std;



void romb() {
	int i, j;
	int n = 4;

	system("color 03");

	for (i = 0; i < n; i++) {



		for (j = n; i < j; j--) {
			cout << " ";
		}

		for (j = 0; i >= j; j++) {
			cout << "*";
		}
		for (j = 0; i > j; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (i = 0; i < 7; i++) {


		for (j = 0; i > j; j++) {
			cout << " ";
		}

		for (j = n; i <= j; j--) {
			cout << "*";
		}
		for (j = n; i < j; j--) {
			cout << "*";
		}
		cout << endl;
	}


}






int main(){
	romb();
	return 0;
}



