#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int pilih1, jumlah1, pilih2, jumlah2, harga1, harga2, total, bayar, diskon;
	string brg1, brg2;
	cout<<"KEDAI MAKAN BAROKAH"<<endl;
	cout<<"Menu Makanan : "<<endl;
	cout<<"1. Ayam Goreng \t 17.000 \n2. Ayam Bakar \t 21.000"<<endl;
	cout<<"Masukkan nama pesanan  1 : ";getline (cin,brg1);
	cout<<"Masukkan harga pesanan 1 : ";cin>>pilih1;
	cout<<"Jumlah pesananan 1 	: ";cin>>jumlah1;
	harga1 = pilih1*jumlah1;
	cout<<endl;
	cout<<"Inputkan angka 0 jika anda tidak ingin memesan lagi"<<endl;
	cout<<endl;
	cout<<"Masukkan nama pesanan  2 : ";cin>>brg2;
	cout<<"Masukkan harga pesanan 2 : ";cin>>pilih2;
	cout<<"Jumlah pesananan 2 	: ";cin>>jumlah2;
	cout<<endl;
	harga2 = pilih2*jumlah2;
	total = harga1+harga2;
	if(total>45000){
		diskon = total*0.1;
		bayar = total-diskon;
    cout<<"\t===================================="<<endl;
	cout<<"\t** STRUK KEDAI MAKAN BAROKAHHHHH **"<<endl;
	cout<<"\t===================================="<<endl;
	cout<<"Pesanan Anda : "<<endl;
	cout<<brg1<<" "<<pilih1<<" x "<<jumlah1<<endl;
	cout<<brg2<<"  "<<pilih2<<" x "<<jumlah2<<endl;
	cout<<"Total Harga				 : "<<total<<endl;	
	cout<<"Anda Berhemat   			 : "<<diskon<<endl;
	cout<<"Jumlah yang harus dibayar : "<<bayar<<endl;
	cout<<"===== Terimakasih Atas Kunjungannya ====="<<endl;	
	}
	else{
		cout<<"\t===================================="<<endl;
		cout<<"\t** STRUK KEDAI MAKAN BAROKAHHHHH **"<<endl;
		cout<<"\t===================================="<<endl;
		cout<<"Pesanan Anda : "<<endl;
		cout<<brg1<<" "<<pilih1<<" x "<<jumlah1<<endl;
		cout<<brg2<<"  "<<pilih2<<" x "<<jumlah2<<endl;
		cout<<"Total harga               : "<<total<<endl;
		cout<<"Jumlah yang harus dibayar : "<<total<<endl;
		cout<<"===== Terimakasih Atas Kunjungannya ====="<<endl;
	}
		
	return 0;
}
