//Muhammad Rafi Farhan
//nim: 202131145

#include <iostream>
using namespace std;
int main()
{
int pilihan, harga, jumlah, total, bayar, kembali;
char lagi;

cout<<"         MUHAMMAD RAFI FARHAN    "<<endl;
cout<<"             202131145               "<<endl;
cout<<"         WARTEG TEKNIK INFORMATIKA      "<<endl;
cout<<"            Jl. IT PLN                  "<<endl;
cout<<"========================================"<<endl;
cout<<""<<endl;
cout<<" ______________________________________"<<endl;
cout<<"|     Menu Makanan      |      Harga   |"<<endl;
cout<<"|_______________________|______________|"<<endl;
cout<<"|   1. PeceL Ayam       |  Rp. 15.000  |"<<endl;
cout<<"|   2. Pecel Lele       |  Rp. 15.500  |"<<endl;
cout<<"|   3. Lontong Sayur    |  Rp. 15.000  |"<<endl;
cout<<"|   4. Nasi Goreng      |  Rp. 12.000  |"<<endl;
cout<<"|   5. Nasi Rames       |  Rp. 10.000  |"<<endl;
cout<<"|   6. Jus Jeruk        |  Rp.  8.000  |"<<endl;
cout<<"|   7. Teh Manis        |  Rp.  5.000  |"<<endl;
cout<<"|_______________________|______________|"<<endl;
cout<<""<<endl;
cout<<"Masukan Pilihan Anda : ";
cin>>pilihan;
//
switch (pilihan){
	
case 1:
cout<<'\n'<<"Pecel Ayam"<<endl;
harga=15000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 2:
cout<<'\n'<<"Pecel Lele"<<endl;
harga=15500;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 3:
cout<<'\n'<<"Lontong Sayur"<<endl;
harga=15000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 4:
cout<<'\n'<<"Nasi Goreng"<<endl;
harga=12000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 5:
cout<<'\n'<<"Nasi Rames"<<endl;
harga=10000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 6:
cout<<'\n'<<"Jus Jeruk"<<endl;
harga=8000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;

case 7:
cout<<'\n'<<"Teh Manis"<<endl;
harga=5000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jumlah;
total=harga*jumlah;
cout<<"Total Hargany        : Rp. "<<total<<endl;
cout<<"Dibayar              : Rp. ";
cin>>bayar;
kembali=bayar-total;
cout<<"Kembali              : Rp."<<kembali<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain (Y/T) : ";
cin>>lagi;
break;
default:
cout<<"Pilihan Yang Anda Masukan Tidak Tersedia";
break;
}

return 0;
}
