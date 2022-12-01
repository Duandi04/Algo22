#include<iostream>
using namespace std;

string hasil(int nilai){
	string h;
	if(nilai > 50){
		h = "Lulus";
	} else {
		h = "gagal";
	}
	return h;
}

int nilai(){
	cout << hasil(70);
}
