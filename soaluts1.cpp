#include <iostream>

using namespace std;

int main(){
    int A, B, X, Y;

    cout << "Masukkan Variabel X = "; cin >> A;
    cout << "Masukkan Variabel y = "; cin >> B;

    X = A;
    Y = B;
    if (X != Y){
        if (X < Y)
            (X = X + A);
        else
            (Y = Y + B);
    }


    cout << X;


}
