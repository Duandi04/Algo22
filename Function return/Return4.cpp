#include<iostream>
using namespace std;

int kali(int bil1, int bil2){
	return bil1 * bil2;
}

int balok(int p, int l,int t){
	return kali(p,l)*t;
}

int main(){
	int a, b, c;
//	cout << "p : "; cin >> a;
//	cout << "l : "; cin >> b;
//	cout << "t : ";cin >> c;
	
	cout   << "volume : "<< balok(70,9,10) << endl; 
	

}
