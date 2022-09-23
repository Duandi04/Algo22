#include <iostream>
using namespace std;

int main(){
	string nama;
	char Predikat;
	int TUGAS, UTS, UAS;
	int nilai;
	cout << "Masukkan Nama Anda : "; cin >> nama;
	cout << "Masukkan nilai tugas : "; cin >> TUGAS;
	cout << "masukkan nilai UTS : "; cin >> UTS;
	cout << "masukkan nilai UAS : "; cin >> UAS;
	nilai = (TUGAS + UTS + UAS )/3;
	
	cout << "Nilai anda adalah :  " << nilai << endl;
	
	cout << Predikat;
	switch(Predikat){
	case 1 : {
	if (nilai >=0 && nilai <= 20){
		cout << "Predikat : E";
	}
	break;
}
	case 2 : {
	if (nilai>20 && nilai <= 40 ){
		cout << "Predikat : D";
	}
	break;
}
	case 3 : {
	if(nilai > 40 && nilai <= 60){
		cout << "Predikat : C";
	}
	break;
}
	case 4 : {

	if(nilai > 60 && nilai <= 80){
		cout << "Predikat : B";
	}
	break;
}
	case 5 : {
		
	if(nilai > 80 && nilai <= 100){
		cout << "Predikatt : A";
	}
	break;
}
default : {
	cout : "Nilamu gak jelas" ;break;
}
}

}
