//author : Maulana Anjari Anggorokasih
//reference : codescracker.com
#include<iostream>
using namespace std;
int main()
{
    float angka1, angka2, hasil;
    int pilihan;
    cout<<"Selamat datang di program kalkulator sederhana\n";
    cout<<"Terdapat 4 pilihan operasi :\n\n";
    do
    {
        cout<<"1. Penjumlahan\n";
        cout<<"2. Pengurangan\n";
        cout<<"3. Perkalian\n";
        cout<<"4. Pembagian\n";
        cout<<"5. Keluar\n\n";
        cout<<"Masukkan pilihan Anda (1-5): ";
        cin>>pilihan;
        if(pilihan>=1 && pilihan<=4)
        {
            cout<<"\nMasukkan berapapun 2 angka: ";
            cin>>angka1>>angka2;
        }
        switch(pilihan)
        {
            case 1:
                hasil = angka1+angka2;
                cout<<"\nHasil = "<<hasil;
                break;
            case 2:
                hasil = angka1-angka2;
                cout<<"\nHasil = "<<hasil;
                break;
            case 3:
                hasil = angka1*angka2;
                cout<<"\nHasil = "<<hasil;
                break;
            case 4:
                hasil = angka1/angka2;
                cout<<"\nHasil = "<<hasil;
                break;
            case 5:
                cout<<"\nProgram selesai!";
                return 0;
            default:
                cout<<"\nPilihan tidak tersedia!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(pilihan!=5);
    cout<<endl;
    return 0;
}
