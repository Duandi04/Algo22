#include <iostream>
using namespace std;

int main(){
	string n; int u;
	cout << "masukkan nama anda : "; cin >> n;
	cout << "masukkan umur anda : "; cin >> u;
	cout << "----------------------------- \n";
	cout << "terimakasih " << n << endl;
	cout << "umur anda "<< u << endl;
	(u > 17) ? cout << "Anda dewasa" : 
			   cout << "anda anak-anak";
	return 0;
}
