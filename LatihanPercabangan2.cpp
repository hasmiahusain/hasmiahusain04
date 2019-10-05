#include <iostream>
#include <string>
using namespace std;


int main () {
	int Total_Belanja;
	int Diskon;
	int Total_Bayar;
	int Bayar;
	string Asal_Daerah;
	string Status_Perkawinan;
	cout << "Masukkan total belanja anda " <<endl;
	cin >> Total_Belanja;
	cout << endl;
	if (Total_Belanja > 1102019) {
		cout << "         Selamat anda mendapatkan diskon          " <<endl;
		cout << "   Diskon berlaku jika pembeli asli Makassar" <<endl;
		cout << "             Perlihatkan KTP anda           " <<endl;
		cin >> Asal_Daerah;
		if (Asal_Daerah == "Makassar") {
			cout << "Mendapatkan diskon" <<endl;
			cout << "Untuk mengetahui berapa banyak diskon yang didapatkan" <<endl<<endl;
			cout << "Pilih status perkawinan anda" <<endl;
			cout << "1. Sudah menikah dan memiliki anak" <<endl;
			cout << "2. Sudah menikah tetapi tidak memiliki anak" <<endl;
			cout << "3. Belum menikah dan memiliki kartu anggota" <<endl;
			cout << "4. Sudah menikah tetapi tidak memiliki kartu anggota" <<endl<<endl;
			cin >> Status_Perkawinan;
			if(Status_Perkawinan == "1") {
				cout << "Diskon 75%" <<endl;
				cout << "Total pembayaran anda sebesar = " <<endl;
				Total_Bayar = Total_Belanja * 0.75;
				cout << Total_Bayar <<endl<<endl;
				cout << "Terima kasih telah berbelanja" <<endl;
			}
			else {
				if (Status_Perkawinan == "2") {
				cout << "Diskon 50%" <<endl;
				cout << "Total pembayaran anda sebesar = " <<endl;
				Total_Bayar = Total_Belanja * 0.50;
				cout << Total_Bayar <<endl<<endl;
				cout << "Terima kasih telah berbelanja" <<endl;
					}
			else {
				if (Status_Perkawinan == "3") {
				cout << "Diskon 25%" <<endl;
				cout << "Total pembayaran anda sebesar = " <<endl;
				Total_Bayar = Total_Belanja * 0.25;
				cout << Total_Bayar <<endl<<endl;
				cout << "Terima kasih telah berbelanja" <<endl;
					}
			else {
				if (Status_Perkawinan == "4") {
				cout << "Diskon 50%" <<endl;
				cout << "Total pembayaran anda sebesar = " <<endl;
				Total_Bayar = Total_Belanja * 0.10;
				cout << Total_Bayar <<endl<<endl;
				cout << "Terima kasih telah berbelanja" <<endl;
			} else {
				cout << "Tidak ada dalam pilihan" <<endl;	
				}
			}
		}
	} 
}
 else {
	cout << "Diskon up +10" <<endl;
	cout << "Pilih status perkawinan anda" <<endl;
	cout << "1. Sudah menikah dan memiliki anak" <<endl;
	cout << "2. Sudah menikah tetapi tidak memiliki anak" <<endl;
	cout << "3. Belum menikah dan memiliki kartu anggota" <<endl;
	cout << "4. Sudah menikah tetapi tidak memiliki kartu anggota" <<endl;
	cin >> Status_Perkawinan;
	if (Status_Perkawinan == "1") {
		cout << "Diskon 75%" <<endl;
		Diskon = 0.75-0.10;
		cout << Diskon <<endl;
		cout << "Total pembayaran anda sebesar" <<endl;
		Total_Bayar = Total_Belanja * Diskon;
		cout << Total_Bayar <<endl;
		cout << "Terima kasih telah berbelanja" <<endl;
		}
	else {
			if (Status_Perkawinan == "2") {
		cout << "Diskon 50%" <<endl;
		Diskon = 0.50-0.10;
		cout << Diskon <<endl;
		cout << "Total pembayaran anda sebesar" <<endl;
		Total_Bayar = Total_Belanja * Diskon;
		cout << Total_Bayar <<endl;
		cout << "Terima kasih telah berbelanja" <<endl;
	}
	else {
			if (Status_Perkawinan == "3") {
		cout << "Diskon 25%" <<endl;
		Diskon = 0.25-0.10;
		cout << Diskon <<endl;
		cout << "Total pembayaran anda sebesar" <<endl;
		Total_Bayar = Total_Belanja * Diskon;
		cout << Total_Bayar <<endl;
		cout << "Terima kasih telah berbelanja" <<endl;
		}
	else {
			if (Status_Perkawinan == "4") {
		cout << "Diskon 10%" <<endl;
		Diskon = 0.10-0.10;
		cout << Diskon <<endl;
		cout << "Total pembayaran anda sebesar" <<endl;
		Total_Bayar = Total_Belanja;
		cout << Total_Bayar <<endl;
		cout << "Terima kasih telah berbelanja" <<endl;
	} else {
		cout << "Tidak ada dalam pilihan" <<endl;
	}
	}
}
} 
}

	cout << "Selamat datang kembali" <<endl;
	
	} else {
		cout << "Maaf anda tidak mendapatkan diskon" <<endl;
		cout << "Terima kasih telah berbelanja" <<endl;
		cout << "Selamat datang kembali" <<endl; 
	}
	return 0;
}

