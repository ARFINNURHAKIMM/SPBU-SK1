#include <iostream>

using namespace std;

int main() {
	string nama;
	float harga, total;
	int pil,liter;
	

	cout << "Selamat datang di SPBU Pertamina" << endl;
	cout << "--------------------------------" << endl << endl;

	cout << "Masukkan nama anda : "; cin >> nama;	
	cout << "1. Pertalite  : 7000/liter" << endl;
	cout << "2. Pertamax   : 9000/liter" << endl;
	cout << endl;
	
	cout << "Pilih jenis BBM : "; cin >> pil;
	if(pil == 1) {
		cout << "berapa liter yang ingin anda isi : "; cin >> liter;
		total = liter * 7000;
	}else if(pil == 2){
		cout << "Berapa liter yang ingin anda isi : "; cin >> liter;
		total = liter *9000;
	}else{
		cout << "Masukkan nomor yang benar";
	}
	cout << endl;
	
	if(pil == 1){
		cout << "----SPBU Pertamina----" << endl;
		cout << "Nama anda : " << nama << endl;
		cout << "Jenis BBM yang anda pilih : pertalite" << endl;
		cout << "Harga yang harus anda bayar : " << total << endl;
	}else if(pil == 2){
		cout << "----SPBU Pertamina----" << endl;
		cout << "Nama anda : " << nama << endl;
		cout << "Jenis BBM yang anda pilih : pertamax" << endl;
		cout << "Harga yang harus anda bayar : " << total << endl;
	
	}
	
	return 0;
	
}
