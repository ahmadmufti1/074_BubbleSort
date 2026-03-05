#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi array untuk menyimpan elemen-elemen yang akan diurutkan
int n; // Deklarasi variabel untuk menyimpan jumlah elemen dalam array

// Fungsi untuk menerima input dari pengguna
void input ()
{
    int d;
    while (true)
    {
        cout << "Masukkan jumlah elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
                cout << "Jumlah elemen tidak boleh lebih dari 20. Silakan coba lagi.\n" << endl;
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukkan elemen array: " << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++)//Looping dengan i dimulai dari 0 hingga n-1 untuk menerima input elemen array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Menampilkan nomor data yang akan dimasukkan
        cin >> arr[i]; // Menyimpan input elemen ke dalam array pada indeks i
    }
}