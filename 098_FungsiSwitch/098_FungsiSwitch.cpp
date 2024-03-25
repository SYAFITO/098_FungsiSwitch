
#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b)
{
    return a + b;
}
float pembagian(float a, float b)
{
    return a + b;
}
float perkalian(float a, float b)
{
    return a + b;
}
float perkalian(float a, float b)
{
    return a + b;
}
int main()
{
    int pilihan;

    do
    {
        cout << "==" << endl;
        cout << "MENU" << endl;
        cout << "1. penjumlahan " << endl;
        cout << "2. pembagian " << endl;
        cout << "3. perkalian " << endl;
        cout << "4. pengurangan " << endl;
        cout << "5. EXIT " << endl;
        cout << "Masukkan pilihan 1/2/3/4/5 :";
        cin >> pilihan;         
    } while (pilihan != 5);
    switch (pilihan)
    {    
     case 1;
         input();
         cout << "Hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
         break;
     case 2;
         input();
         cout << "Hasil pembagian = " << penjumlahan(bilSatu, bilDua) << endl;
         break;
     case 3;
         input();
         cout << "Hasil perkalian = " << penjumlahan(bilSatu, bilDua) << endl;
         break;
     case 4;
         input();
         cout << "Hasil pengurangan = " << penjumlahan(bilSatu, bilDua) << endl;
         break;
     case 5;
         break;
     default;
         cout << "Pilihan tidak ada" << end;

    }
    
}


int main()
{
    std::cout << "Hello World!\n";
}

