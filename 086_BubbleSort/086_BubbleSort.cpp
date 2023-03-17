
#include <iostream>
using namespace std;

int a[20];                              // Deklarasi Array a dengan ukuran 20
int n;                                  // Deklarasi Variable n untuk menyimpan banyak nya array pada element pada array

void input() {      // prosedur untuk input
    while (true) {  // looping
        cout << " Memasukan banyak nya nilai element pada array :"; // output ke layar
        cin >> n;                       // input dari pengguna 
        if (n <= 20)                   // jika n Kurang dari atau sama dengan 20
            break;                     // keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 element.\n"; // output ke layar
        }
    }
    cout << endl;                               // output baris kosong
    cout << "=================" << endl;        // output ke layar
    cout << "Masukan element Array" << endl;    // output ke layar
    cout << "=================" << endl;        // output ke layar

    for (int i = 0; i < n; i++) {               // looping dengan i dimulai dari o hingga n-1
        cout << "Data Ke-" << (i + 1) << ":";   // output ke layar
        cin >> a[i];                            // Input dari pengguna
    }
}

int main()
{
    std::cout << "Hello World!\n";
}


