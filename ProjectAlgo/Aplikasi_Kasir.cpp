//Pembuatan Proyek C++

#include <iostream>
using namespace std;

struct Kasir{
	double harga[25], hargatotal[25];
	int jumlah[30], pil[50], kt;
	char kantung, tambah;
	string menu[50];
	float subtotal[30];
};

double hadiah(double total){
	//bonus harga dan diskon yang di dapat dengan harga tertentu
	float bonus;
	
	if(total >= 20000 && total <= 50000){
		bonus = 5000;
	} else if (total > 50000 && total <= 100000){
		bonus = 10000;
	} else if (total > 100000){
		bonus = 15000;
	} else {
		bonus = 0;
	}
	//niatan ada 5 atau lebih bonus
	return bonus;
}

void tampilan(){
	Kasir k; //struct kasir pakai k sebagai variable
	double total, pajak, totalbayar, kembalian, pembayar;
	int i, j, bayar;
	
	system ("color 4E");
	
	cout << " ___________________________________________________ \n";
	cout << "|___________________________________________________| \n";
	cout << "||           Welcome To Homelander Resto           ||" << endl;
	cout << "||=================================================|| \n";
	cout << "||                 ~~  Makanan  ~~                 || \n";
	cout << "|| 1.  Nasi Goreng Biasa                 Rp 10.000 || \n";
	cout << "|| 2.  Nasi Goreng Seafood               Rp 15.000 || \n";
	cout << "|| 3.  Nasi Goreng Kampung               Rp 14.000 || \n";
	cout << "|| 4.  Nasi Goreng Anak Kos              Rp  7.000 || \n";
	cout << "|| 5.  Mie Goreng Biasa                  Rp  9.000 || \n";
	cout << "|| 6.  Mie Goreng Seafood                Rp 14.000 || \n";
	cout << "|| 7.  Mie Goreng Kampung                Rp 13.000 || \n";
	cout << "|| 8.  Mie Goreng Anak Kos               Rp  6.000 || \n";
	cout << "|| 9.  Kangkung Terasi                   Rp 15.000 || \n";
	cout << "|| 10. Sop Ikan                          Rp 14.000 || \n";
	cout << "|| 11. Sop Ayam                          Rp 11.000 || \n";
	cout << "||                                                 || \n";
	cout << "||                  ~~  Minuman  ~~                || \n";
	cout << "|| 12. Air Mineral                       Rp  5.000 || \n";
	cout << "|| 13. Teh Hangat                        Rp  6.000 || \n";
	cout << "|| 14. Es Teh Hangat                     Rp  6.500 || \n";
	cout << "|| 15. Milo Susu Hangat                  Rp  8.000 || \n";
	cout << "|| 16. Es Milo Susu                      Rp 10.000 || \n";
	cout << "|| 17. Kopi O Cangkir                    Rp  6.000 || \n";
	cout << "|| 18. Kopi O Gelas                      Rp  7.000 || \n";
	cout << "|| 19. Kopi Susu Cangkir                 Rp  8.500 || \n";
	cout << "|| 20. Kopi Susu Gelas                   Rp 10.000 || \n";
	cout << "|| 21. Es Kopi Susu Gelas                Rp 13.000 || \n";
	cout << "|| 22. Es Sirup ABC                      Rp  9.000 || \n";
	cout << "|| 23. Minuman Kaleng                    Rp  6.000 || \n";
	cout << "||                                                 || \n";
	cout << "||                ~~  Menu Paket  ~~               || \n";
	cout << "|| 24. Nasi + Ayam Penyet + Teh Obeng    Rp 18.000 || \n";
	cout << "|| 25. Nasi + Ayam Geprek + Teh Obeng    Rp 18.000 || \n";
	cout << "|| 26. Nasi + Selar Goreng + Teh Obeng   Rp 20.000 || \n";
	cout << "|| 27. Nasi + Sotong Goreng + Teh Obeng  Rp 20.000 || \n";
	cout << "|| 28. Bakso + Teh Obeng                 Rp 13.000 || \n";
	cout << "|| 29. Mie Ayam + Teh Obeng              Rp 15.000 || \n";
	cout << "|| 30. Mie Ayam Bakso + Teh Obeng        Rp 18.000 || \n";
	cout << "[___________________________________________________] \n\n";

	do{
	cout << "======================================= \n";
	cout << "Masukkan yang ingin dipesan (1 - 30) : "; cin >> k.pil[i];
		
	switch(k.pil[i]){
		case 1  : k.harga[i] = 10000, k.menu[i] = "Nasi Goreng Biasa"; break;
		case 2  : k.harga[i] = 15000, k.menu[i] = "Nasi Goreng Seafood"; break;
		case 3  : k.harga[i] = 14000, k.menu[i] = "Nasi Goreng Kampung"; break;
		case 4  : k.harga[i] = 7000,  k.menu[i] = "Nasi Goreng Anak Kos"; break;
		case 5  : k.harga[i] = 9000,  k.menu[i] = "Mie Goreng Biasa"; break;
		case 6  : k.harga[i] = 14000, k.menu[i] = "Mie Goreng Seafood"; break;
		case 7  : k.harga[i] = 13000, k.menu[i] = "Mie Goreng Kampung"; break;
		case 8  : k.harga[i] = 6000,  k.menu[i] = "Mie Goreng Anak Kos"; break;
		case 9  : k.harga[i] = 15000, k.menu[i] = "Kangkung Terasi"; break;
		case 10 : k.harga[i] = 14000, k.menu[i] = "Sop Ikan"; break;
		case 11 : k.harga[i] = 11000, k.menu[i] = "Sop Ayam"; break;
		case 12 : k.harga[i] = 5000,  k.menu[i] = "Air Mineral"; break;
		case 13 : k.harga[i] = 6000,  k.menu[i] = "Teh Hangat"; break;
		case 14 : k.harga[i] = 6500,  k.menu[i] = "Es Teh Hangat"; break;
		case 15 : k.harga[i] = 8000,  k.menu[i] = "Milo Susu Hangat"; break;
		case 16 : k.harga[i] = 10000, k.menu[i] = "Es Milo Susu"; break;
		case 17 : k.harga[i] = 6000,  k.menu[i] = "Kopi O Cangkir"; break;
		case 18 : k.harga[i] = 7000,  k.menu[i] = "Kopi O Gelas"; break;
		case 19 : k.harga[i] = 8500,  k.menu[i] = "Kopi Susu Cangkir"; break;
		case 20 : k.harga[i] = 10000, k.menu[i] = "Kopi Susu Gelas"; break;
		case 21 : k.harga[i] = 13000, k.menu[i] = "Es Kopi Susu Gelas"; break;
		case 22 : k.harga[i] = 9000,  k.menu[i] = "Es Sirup ABC"; break;
		case 23 : k.harga[i] = 6000,  k.menu[i] = "Minuman Kaleng"; break;
		case 24 : k.harga[i] = 18000, k.menu[i] = "Nasi + Ayam Penyet + Teh Obeng"; break;
		case 25 : k.harga[i] = 18000, k.menu[i] = "Nasi + Ayam Geprek + Teh Obeng"; break;
		case 26 : k.harga[i] = 20000, k.menu[i] = "Nasi + Selar Goreng + Teh Obeng"; break;
		case 27 : k.harga[i] = 20000, k.menu[i] = "Nasi + Sotong Goreng + Teh Obeng"; break;
		case 28 : k.harga[i] = 13000, k.menu[i] = "Bakso + Teh Obeng"; break;
		case 29 : k.harga[i] = 15000, k.menu[i] = "Mie Ayam + Teh Obeng"; break;
		case 30 : k.harga[i] = 18000, k.menu[i] = "Mie Ayam Bakso + Teh Obeng"; break;
		default : k.harga[i] = 0, k.menu[i] = "NULL"; break;
	}
	cout << "Jumlah porsi pesanan : "; cin >> k.jumlah[i];
	cout << "pesanan anda : " << k.menu[i] << endl << endl;
	cout << "Mau menambah belanjaan (y/t) : "; cin >> k.tambah;
	cout << endl;
	
	k.subtotal[i] = k.jumlah[i] * k.harga[i];
	total = total + k.subtotal[i]; 
	i++;
	}  //akhir do
	while (k.tambah == 'Y' || k.tambah == 'y');
	
	cout << endl;
	
	system ("cls");
	system ("color 06");
	cout << "Pesanan anda adalah : \n";
	cout << "=========================================================== \n";
	for (j = 0; j < i; j++){
	cout << "| Pesanan "<< j + 1 << " : " << k.menu[j] << "  " << k.harga[j] << " ( " <<k.jumlah[j] << " )"<< endl;
	}
	cout << "=========================================================== \n";
	pajak = total * 10/100; 
	cout << endl;
	cout << "=======================\n";
	cout << "Total Harga : " << total << endl;
	cout << "=======================\n";
	cout << "Diskon      : " << hadiah(total) << endl;
	cout << "Pajak (10%) : " << pajak << endl;
	cout << "=======================\n";

	totalbayar = total - hadiah(total) + pajak;
	cout << "Harga Yang harus dibayar : " << totalbayar << endl;
	cout << "=======================\n\n";
	
	//bayar 

	cout << "Masukkan nominal yang dibayar : "; cin >> bayar;
	pembayar = pembayar + bayar;
	
	kembalian =  bayar - totalbayar ;
	cout << "kembalian : " << kembalian << endl;
	cout << "======================= \n";
	
	system ("Pause");
	
	//nota
	system ("cls");
	system ("COLOR F0");
	
	cout<<"    HOMELANDER RESTO"<<endl;
	cout<<" Jl.Pasir Putih - Batam"<<endl;
	cout<<"   Telp.082215023502"<<endl;
	cout<<"=========================\n";
	
	for (j = 0; j < i; j++){
	cout << " Pesanan "<< j + 1 << " : " << k.menu[j] << endl;
	k.hargatotal[j] = k.harga[j] * k.jumlah[j]; 
	cout << "             " << k.harga[j] << "    ( " <<k.jumlah[j] << " )"<< "      " << k.hargatotal[j] << endl << endl; 
	}
	cout << "========================\n";
	cout << " Jumlah        : "<< total<<endl;
	cout << " Discount      : " << hadiah(total)<< endl;
	cout << " Pajak(10%)    : " << pajak << endl <<endl;
	cout << " Total         : " << totalbayar << endl;
	cout << " Tunai         : " << pembayar <<endl;	
	cout << " Kembalian     : "<< kembalian <<endl << endl;
	
	cout << "______________________________________\n";
	cout << "|Terima Kasih Pelanggan Tercinta Kami|\n";
	cout << "|     Silahkan Datang lagi ya        |\n";
	cout << "[____________________________________]\n\n\n";
	
}


int main(){
	int rating;
	Kasir k;
	
	tampilan();
}
