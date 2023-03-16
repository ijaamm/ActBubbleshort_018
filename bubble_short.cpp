#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}
void display() {   //method untuk menampilkan hasil
	cout << endl;                       //output baris kosong 
	cout << "================================" << endl;   //output ke layar
	cout << "Elemen Array yang telah di susun" << endl;   //output ke layar
	cout << "================================" << endl;   //output ke layar
	for (int j = 0; j  < n; j++) {                        //looping dengan j di mulai dari 0 hingga n-1
		cout << a[j] << endl;                             //output ke layar
	}
}

void bubbleShortArray() { //method untuk mengurutkan array dengan  dengan metode bubbleshort 
	for (int i = 1; i < n; i++) { //looping dengan i di mulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() {
	//membuat objek obj dari class bubbleshort
	input();   //memanggil read () dari class bubbleshort
	bubbleShortArray(); //memanggil bubbleshortarray() dari class bubbleshort
	display(); //memanggil display () dari class bubbleshort
	return 0;

}