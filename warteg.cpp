#include <iostream>
using namespace std;
int main()
{
int code, pri, jml, tot, byr, kbl;
char mad;
do
{
cout<<"         MUHAMMAD RAFI FARHAN    "<<endl;
cout<<"             202131145               "<<endl;
cout<<"         TEKNIK INFORMATIKA WARTEG      "<<endl;
cout<<"            Jl. IT PLN                  "<<endl;
cout<<"========================================"<<endl;
cout<<""<<endl;
cout<<" ______________________________________"<<endl;
cout<<"|     Menu Makanan      |      Harga   |"<<endl;
cout<<"|_______________________|______________|"<<endl;
cout<<"|   1. Ayam Goreng      |  Rp. 10.000  |"<<endl;
cout<<"|   2. Nasi Goreng      |  Rp. 12.000  |"<<endl;
cout<<"|   3. Mie Pangsit      |  Rp. 10.000  |"<<endl;
cout<<"|   4. Pecel Ayam+Nasi  |  Rp. 15.000  |"<<endl;
cout<<"|   5. Nasi Rames       |  Rp.  8.000  |"<<endl;
cout<<"|   6. Jus Jeruk        |  Rp.  5.000  |"<<endl;
cout<<"|   7. Teh Manis        |  Rp.  2.000  |"<<endl;
cout<<"|_______________________|______________|"<<endl;
cout<<""<<endl;
cout<<"Masukan Pilihan Anda : ";
cin>>code;
switch (code)
{
case 1:
cout<<'\n'<<"Ayam Goreng"<<endl;
pri=10000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jml;
tot=pri*jml;
cout<<"Total Hargany        : Rp. "<<tot<<endl;
cout<<"Dibayar              : Rp. ";
cin>>byr;
kbl=byr-tot;
cout<<"Kembali              : Rp."<<kbl<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain Y/T : ";
cin>>mad;
break;
                               
 case 2:
cout<<'\n'<<"Nasi Goreng"<<endl;
pri=12000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jml;
tot=pri*jml;
cout<<"Total Hargany        : Rp. "<<tot<<endl;
cout<<"Dibayar              : Rp. ";
cin>>byr;
kbl=byr-tot;
cout<<"Kembali              : Rp."<<kbl<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain Y/T : ";
cin>>mad;
break;
   
case 3:
 cout<<'\n'<<"Mie Pangsit"<<endl;
pri=10000;
cout<<"Masukan Jumlah Porsi : ";
cin>>jml;
tot=pri*jml;
cout<<"Total Hargany        : Rp. "<<tot<<endl;
cout<<"Dibayar              : Rp. ";
cin>>byr;
 kbl=byr-tot;
cout<<"Kembali              : Rp."<<kbl<<endl;
cout<<""<<endl;
cout<<"Masih Ada Yang Lain Y/T : ";
cin>>mad;
break;
default:
cout<<"code Yang Anda Masukan Tidak Tersedia";
  }
while (mad/='Y');
cout<<"Terima Kasih Atas Kunjungan Anda Di Pondok Sakieu Ge Uyuhan";
}

