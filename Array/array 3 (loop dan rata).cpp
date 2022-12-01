#include <iostream>
using namespace std;
 int main (){
	int umur[2000], total, rata, max;
 	
	for (int a=0; a < 6 ; a++){
		
 		cout << a + 1 << ". Masukkan umur : "; cin >> umur[a];
 		total = total + umur[a];
 		if (umur[a] > max){
 			max = umur[a];
		 }
	}
	cout << endl;
	cout << "Total umur : " << total << endl;
	rata = total/6;
	cout << "rata-rata umur : "<< rata << endl;
	cout << max;
 }
