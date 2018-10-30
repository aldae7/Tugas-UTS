# Tugas-UTS


**Soal Pertama**
**Alur Program**

1. Deklarasikan variabel A, B, X, Y, sebagai variabel input.
2. Membaca input key board cin >> A >> B >> X >> Y.
3. Membandingkan Variabel X dengan Y Jika sama.
4. karena statement **false** tidak akan terjadi karena ```c++ {X != Y} ``` .
5. dan jika statement **True** maka X < Y berlaku rumus statement **True** dengan Syntax ```c++ X = X + A ``` .
6. dan jika statement **False** ```c++Y = Y + B```.
7. maka akan muncul ```c++ X = X + A = (hasilnya) ```.

**Code Program**

```c++

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

```