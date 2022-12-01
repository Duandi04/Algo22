#include <iostream>
using namespace std;

#define max 10

int main (){
	int i = 0;
	while (i < max) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl; i++;
	}
}
