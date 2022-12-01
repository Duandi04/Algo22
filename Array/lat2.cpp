#include <iostream>
using namespace std;

int main(){
	int b,k;
	int mat[b][k];
	int matr[b][k], C[b][k];
	
	cout << "Masukkan Jumlah baris : "; cin >> b;
	cout << "Masukkan Jumlah kolom :  "; cin >> k;

	cout << "Matriks A : " << endl;
 	int x,y;
	for (x=0;x<b;x++) {
		cout << endl;
    	for (y=0;y<k;y++) {
    		 cout << (x + 1) << ", " << (y + 1)<< " adalah "; cin >> mat[x][y];
           	
            }
    cout << endl;
	}
	
	cout << "Matriks B : " << endl;
	for (x=0;x<b;x++) {
		cout << endl;
		for (y = 0; y < k; y++){
			cout << (x + 1) << ", " << (y + 1)<< " adalah "; cin >> matr[x][y];
			
		}
	}
	cout << "=================================" << endl;
	cout << "Matrik A adalah : " << endl;
	for (x=0; x<b; x++){
		cout << endl;
 		for (y=0; y < k; y++)
 		cout << mat[x][y] << "  ";
	 }
	 cout << endl;
	 
	cout << "Matrik B adalah : " << endl;
	for (x=0; x<b; x++){
		cout << endl;
 		for (y=0; y < k; y++)
 		cout << matr[x][y] << "  ";
	 }
	 cout << endl;
	
	cout << endl << "Hasil penjumlahan adalah : " << endl;
	for (x=0;x < b; x++) {
    for (y=0;y < k; y++) {
        C[x][y] = mat[x][y] + matr[x][y];
        cout << C[x][y] << "  ";
   }
   cout << endl;
}
}
