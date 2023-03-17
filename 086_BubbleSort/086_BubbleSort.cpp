
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
void bubbleSortArray() {                        // Prosedur untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {               // looping dengan j dimulai dari 1 hingga n-1
        for (int j = 0; j < - i; j++) {         // looping dengan j dimulai dari 0 hingga n-i
            if (a[j] > a[j + 1]) {              // Jika milai pada a[j] kelebih besar dari a[j + 1]
                int temp = a[j];                // simpan nilai a [j] ke variable sementara temp
                a[j] = a[j + 1];                // assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;                // Assign nilai temp ke a[j+1]
            }
        }
    }
}

void unsorted() {
    cout << endl;                               // output baris kosong
    cout << "==================" << endl;       // output ke layar
    cout << "Element Array yang belum Tersusun" << endl;            // Output ke layar
    cout << "==================" << endl;                           // Output ke layar
    for (int j = 0; j < n; j++) {               // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                    // Output ke layar
    }
    cout << endl;                               // Output baris kosong
}

void display() {                               // Prosedur untuk menampilkan hasil
    cout << "=================" << endl;       // Output baris Kosong
    cout << "Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "=================" << endl;                    // Output ke layar
    for (int j = 0; j < n; j++) {               // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                   // Output ke layar
    }
    cout << endl;                               // Output baris kosong
}

int main()
{
    input();                                    // Memanggil prosedur input()
    unsorted();                                 // Memanggil Prosedur Unsorted()
    bubbleSortArray();                          // Memanggil Prosedur bubbleSortArray()
    display();                                  // Memanggil Prosedur display
    return 0;
}


