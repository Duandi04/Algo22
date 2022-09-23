#include <iostream>
using namespace std;
#define garis "-----------------------"

int main (){
	cout << "Hotel Bahagia \n";
	cout << garis << endl;
	cout << "1. VVIP (1.000.000) \n";
	cout << "2. VIP (750.000) \n";
	cout << "3. Standard (500.000) \n";
	cout << "4. Melati (250.000) \n";
	cout << garis << endl;
	
	string nama; int h, kamar, lama; char sarapan;
	cout << "Masukkan nama anda : "; cin >> nama;
	cout << "Masukkan jenis kamar (1-4) : "; cin >> kamar;
	cout << "Masukkan lama nginap : "; cin >> lama;
	cout << "Dengan sarapan (y/n) : "; cin >> sarapan;
	cout << garis << endl;
	int ttlsr;
	int ttl;
	
	cout << "Terima kasih " << nama << endl;
	switch (kamar){
		case 1 : {
			cout << "Kamar anda VVIP \n"; h = 1000000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
			default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << "malam" << endl;
					  ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 2 : {
			cout << "Kamar anda VIP \n"; h = 750000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
						ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
		
			break;
			}
			
			break;
		}
		
		case 3 :{
			cout << "Kamar anda Standard \n"; h = 500000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'p' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
            default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					   ttl = h*lama;
					   cout << "Harga Kamar anda : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 4 : {
			cout << "Kamar anda Melati \n"; h = 250000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan \n";
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan \n";
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
					   
			default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					  ttl = h*lama;
					  cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		default : cout << "Inputan anda tidak jelas sehingga tidak bisa diproses \n";
	}
	
	cout << garis << endl << endl;
	cout << "Terima kasih " << nama << " telah menginap di Hotel Bahagia \n";
	cout << "Semoga anda betah";
}
