#include <iostream>
using namespace std;

int main (){
	int i = 0;
	int b = 0;
	do {
	   	cout << i << " "; i++;
		if (i == 7){
		break;}
	}
	while (i < 10);
	
	cout << "\n------------------------- \n";
	
	while (b < 10){
	b++;
	if (b % 2 == 0){
		continue;
	}
	cout << b << " ";
}
return 0;
}
