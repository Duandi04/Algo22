#include <iostream>
using namespace std;

#define tinggi 10
#define garis "------------"

main(){
	const double pi = 3.14;
	double vol,r;
	
	cout << "Program mencari volume kerucut :" << endl;
	cout << garis << endl;
	cout << "masukkan jari-jari : "; cin >> r;
	
	vol = (pi*r*r*tinggi)/3;
	cout << "volume kerucut adalah : " << vol;
	
	return 0;
	
}
