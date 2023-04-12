#include <iostream>
using namespace std; 

class Mahasiswa {

private:
	int nim;
	string nama;
public :
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampilandata() {
		cout << "\nNIM : " << nim << endl;
		cout << "\nNama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;
public:
	void inputMK();
	void TampilanMK();


};

void Matakuliah::inputMK() {
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "\nMasukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "\nMasukkan Sks Mata Kuliah : ";
	cin >> sks;

}