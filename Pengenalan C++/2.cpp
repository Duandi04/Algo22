#include <iostream>
using namespace std;

//membuat pencari nilai terbesar dari 2 input (metode pengurangan)
main(){
    int A, B, C; 
    cout << "nilai A ="; cin >> A;
    cout << "nilai B ="; cin >> B;
    C=A-B; //pengurangan hanya opsional
    if (C > 0){ //bisa diganti jadi A > B jika tidak memakai pengurangan
        cout << "Nilai terbesar adalah " << A;
    }
    else {
        cout << "Nilai terbesar adalah " << B;
    }
}
