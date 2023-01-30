#include<iostream>
#include<windows.h>
#include<unistd.h>

using namespace std;
struct Sepatu{
    string nama;
    int harga;
    int stock;
    int terjual;
};
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void namabarang(string daftar_nama_barang){

   cout << daftar_nama_barang << endl;
 }

int main(){
    while (true){
    SetConsoleTextAttribute (h,10);
    cout << "================================" << endl;
    namabarang("|| Daftar Stock Barang Sepatu ||");
    cout << "================================" << endl;
    sleep(1);
    SetConsoleTextAttribute (h,7);
    string daftarSepatu [5] = {"1.Sepatu Futsal", "2.Sepatu Vans", "3.Sepatu Nike","4.Sepatu Adidas","5.Sepatu Wakai"};
    for(int i=0;i<5;i++){
        cout << daftarSepatu [i] << endl;
    }
    int Pilihbarangyangingindicek;
    int stock;
    int terjual;
    int sisa;
    int harga;
    unsigned int pendapatan;
    int hasil;
    int hargasatuan;

        SetConsoleTextAttribute (h,4);
        cout << "\n>Pilih barang yang ingin di cek !" << endl;
        cin >> Pilihbarangyangingindicek;
        system ("CLS");
        if (Pilihbarangyangingindicek == 1){
          SetConsoleTextAttribute (h,6);
          cout << "Data Sepatu Futsal" << endl;
          cout << "==========================\n";
          SetConsoleTextAttribute (h,7);
          cout << "Harga satuan sepatu Rp.55.000" << endl;
          cout << "Jumlah stock = ";
          cin >> stock;
          cout << "Stock terjual = ";
          cin >> terjual;
          sisa = stock-terjual;
          cout << "Sisa stock = "<<sisa<<endl;
          cout << "==========================\n";
          pendapatan = terjual*55000;
          cout << "Pendapatan : " << "Rp." << pendapatan;
        } else if (Pilihbarangyangingindicek== 2){
          SetConsoleTextAttribute (h,3);
          cout <<"Data Sepatu Vans"<< endl;
          cout << "==========================\n";
          SetConsoleTextAttribute (h,7);
          cout << "Harga satuan sepatu Rp.50.000" << endl;
          cout << "Jumlah stock = ";
          cin >> stock;
          cout << "Stock terjual = ";
          cin >> terjual;
          sisa = stock-terjual;
          cout << "Sisa stock = "<<sisa<<endl;
          cout << "==========================\n";
          pendapatan = terjual*50000;
          cout << "Pendapatan : " << "Rp." << pendapatan;
        } else if (Pilihbarangyangingindicek== 3){
          SetConsoleTextAttribute (h,3);
          cout << "Data Sepatu Nike" << endl;
          cout << "========================\n";
          SetConsoleTextAttribute (h,7);
          cout << "Harga satuan sepatu Rp.170.000" << endl;
          cout << "Jumlah stock = ";
          cin >> stock;
          cout << "Stock terjual = ";
          cin >> terjual;
          sisa = stock-terjual;
          cout << "Sisa stock = "<<sisa<<endl;
          cout << "==========================\n";
          pendapatan = terjual*170000;
          cout << "Pendapatan : " << "Rp." << pendapatan;
        } else if (Pilihbarangyangingindicek== 4){
          SetConsoleTextAttribute (h,3);
          cout << "Data Sepatu Adidas" << endl;
          cout << "========================\n" << endl;
          SetConsoleTextAttribute (h,7);
          cout << "Harga satuan sepatu Rp.220.000" << endl;
          cout << "Jumlah stock = ";
          cin >> stock;
          cout << "Stock terjual = ";
          cin >> terjual;
          sisa = stock-terjual;
          cout << "Sisa stock = "<<sisa<<endl;
          cout << "==========================\n";
          pendapatan = terjual*220000;
          cout << "Pendapatan : " << "Rp." << pendapatan;
        } else if (Pilihbarangyangingindicek== 5){
          SetConsoleTextAttribute (h,3);
          cout << "Data Sepatu Wakai" << endl;
          cout << "========================\n";
          SetConsoleTextAttribute (h,7);
          cout << "Harga satuan sepatu Rp.300.000" << endl;
          cout << "Jumlah stock = ";
          cin >> stock;
          cout << "Stock terjual = ";
          cin >> terjual;
          sisa = stock-terjual;
          cout << "Sisa stock = "<<sisa<<endl;
          cout << "==========================\n";
          pendapatan = terjual*300000;
          cout << "Pendapatan : " << "Rp." << pendapatan;
        } else
        cout << "Tidak ada";


        string jawab;
        cout << endl;
        SetConsoleTextAttribute (h,7);
        cout << ">Kembali ke halaman utama ? ";
        cout <<"Y / T ? ";
        cin >> jawab;
        if (jawab != "Y" && jawab != "y") {
            break;
        }
         system ("cls");
    }
    return 0;
}
