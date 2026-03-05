#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi array untuk menyimpan elemen-elemen yang akan diurutkan
int n; // Deklarasi variabel untuk menyimpan jumlah elemen dalam array

void input ()
{
    int data;
    while (true)
    {
        cout << "Masukkan jumlah elemen pada array: ";
        cin >> n;
        if (n <= 20)
        {
            break;
            else
            {
                cout << "Jumlah elemen tidak boleh lebih dari 20. Silakan coba lagi.\n" << endl;
            }
        }
        cout << endl;
    }
    
}