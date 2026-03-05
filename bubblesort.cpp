#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi array untuk menyimpan elemen-elemen yang akan diurutkan
int n; // Deklarasi variabel untuk menyimpan jumlah elemen dalam array

// Fungsi untuk menerima input dari pengguna
void input()
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

void BubbleSort()
{
    int pass = 1;//step 1

    do
    {
        for (int j = 0; j <= n - pass; j++)
        {//step 2
            if (arr[j] > arr[j + 1]) // Membandingkan elemen saat ini dengan elemen berikutnya
            {//step 3
                int temp;
                temp = arr[j]; // Menyimpan elemen saat ini ke dalam variabel sementara
                arr[j] = arr[j + 1]; // Menempatkan elemen berikutnya ke posisi elemen saat ini
                arr[j + 1] = temp; // Menempatkan elemen sementara ke posisi elemen berikutnya
            }
        }
        pass += 1;//step4

        cout << "\nPass " << pass - 1 << ": "; //Number Of Pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // Menampilkan elemen array setelah setiap pass
        }
        cout << endl; 
    }while (pass <= n-1);
    {
        /* code */
    }
    
    
}

void display()
{
    cout << endl;
    cout << "===============" << endl;
    cout << "Element Array Yang telah tersusun" << endl;
    cout << "===============" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " "; // Menampilkan elemen array yang telah diurutkan
        if(j < n -1)
        {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    
    cout << "Jumlah pass = " << n-1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input(); // Memanggil fungsi untuk menerima input dari pengguna

    BubbleSort(); // Memanggil fungsi untuk mengurutkan array menggunakan bubble sort
    display(); // Memanggil fungsi untuk menampilkan hasil pengurutan

    system("pause");
    return 0;
}