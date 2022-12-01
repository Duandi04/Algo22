#include <iostream>
using namespace std;

int main(){
	int n, data[50], i,j, temp;
	cout << "data : "; cin >> n;

	for(i=0; i < n ; i++){
		cout << "angka : "; cin >> data[i];	
	}
	for (i = 1; i <n ; i++){
		temp = data[i];
		j=i-1;
		while((temp < data[j]) && (j >= 0)){
			data[j+1] = data[j];
			j = j-1;
		}
		data [j+1] = temp;
	}
	for (i=0; i < n; i++){
		cout << data[i]<<" ";
	}
}
