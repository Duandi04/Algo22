#include <iostream>
using namespace std;

string kata = "uvers";

string tampil(){
	return kata = "yodi";
}

int main(){
	
	cout << "Dari fungsi : " << tampil() << endl;
	cout << "dari main : "<< kata << endl;
	
	kata = "keren";
	
	cout << "dari main : "<< kata << endl;
	cout << "Dari fungsi : " << tampil() << endl;
}
