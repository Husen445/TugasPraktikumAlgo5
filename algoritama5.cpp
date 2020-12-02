#include <iostream>
using namespace std;
main (){
	int Pilih, Panjang, Lebar, Tinggi, i, j, x;

	cout<< "==========GAMBAR BANGUN DATAR==========" <<endl;
	cout<< "1. Kotak Bolong" <<endl;
	cout<< "2. Segitiga" <<endl;
	cout<< "=======================================\n";
	cout<< "Pilih = "; cin>> Pilih;
	cout<< "" <<endl;
	switch(Pilih){
		case 1:
		cout<< "Panjang = "; cin>> Panjang;
		cout<< "Lebar   = "; cin>> Lebar;
		for(i=0;i<Panjang;i++){
			for(j=0;j<Lebar;j++){
				if(i == 0 || i == Panjang - 1|| j == 0 || j == Lebar - 1){
					cout<< "* ";
				}else{
					cout<< "  ";
				}
			}
				cout<< endl;
		}
		return 0;
		break;
		case 2:
		cout<< "Tinggi  = "; cin>> Tinggi;
		for(i=1;i<=Tinggi;i++){
			x = 1;
			cout<< i;
			for(j=1;j<i;j++){
				cout<< " " << i + (Tinggi * j) - x; x = x + j + 1;
			}
				cout<< endl;
		}
		return 0;
		break;
		default:
		cout<< "Tidak Ada Bangun Datar!" <<endl;
	}
}


