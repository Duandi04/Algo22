#include <iostream>
using namespace std;
 int main (){
 	const int max_array = 5;
 	string nama[max_array];
 	
 	for (int i=0;i<max_array; i++){
 		cout << "masukkan nama : "; cin>>nama[i];
	 }
	 
	 cout << endl << "=== Daftar Nama ===" << endl;
	 for (int i=0; i < max_array; ++i){
	 	cout << (i + 1) << ". " << nama[i]<< endl;
	 }
 }
