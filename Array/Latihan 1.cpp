#include <iostream>
using namespace std;

int main(){
	const int baris = 3;
	const int kolom = 4;
	
	int A[baris][kolom] = {{3,4,8,0},{3,9,2,1},{6,3,0,2}};
 	
	for (int b = 0; b < baris; b++){
		cout << endl;
 		for (int k = 0; k < kolom; k++)
 		cout << A[b][k] << "  ";
	}
	cout << endl;
}
