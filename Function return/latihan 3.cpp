#include <iostream>
using namespace std;

int bonus(int total){
	int bns;
	switch (total){
		case 20000 ... 50000 : bns=5000; break;
		case 50001 ... 100000 : bns = 10000; break;
		case 100001 ... 150000 : bns = 20000; break;
		case 150001 ... 200000 : bns = 35000; break;
		case 200001 ... 300000 : bns = 50000; break;
		default : { if(total > 300000) {
			bns = 65000;
			break;
		} else{ bns = 0; }
	}
	break;}
	return bns;
}

int main(){
	int total;
	cout << "Penghitung bonus berdasarkan total belanjaan \n";
	cout << "============================ \n";
	cout << "1. Belanja diatas 20.000 dapat bonus 5.000\n";
	cout << "2. Belanja diatas 50.000 dapat bonus 10.000\n";
	cout << "3. Belanja diatas 100.000 dapat bonus 20.000\n";
	cout << "4. Belanja diatas 200.000 dapat bonus 35.000\n";
	cout << "5. Belanja diatas 200.000 dapat bonus 50.000\n";
	cout << "6. Belanja diatas 300000 dapat bonus 65.000\n";
	cout << "============================ \n\n";
	
	cout << "Masukkan total belanjaan : "; cin >> total;
	cout << "============================ \n";
	cout << "Harga yang harus dibayar : " << total - bonus(total) << endl;
	cout << "Jumlah yang di Hemat : " << bonus(total);
}
