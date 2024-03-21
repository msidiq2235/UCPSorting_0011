// 1. Algoritma bubble sort adalah algoritma yang paling sederhana, yang cara kerjanya dengan
//  scan berulang, akan dijalankan setengah (n-1) langkah (n adalah jumlah data).
// 2. Algoritma shell sort digunakan untuk data yang lebih banyak tetapi langkah bertambah
// 3. Insertion sort, karena memiliki langkah yang sedikit maka dari itu menjadi efisien



#include <iostream>
using namespace std;

int sid[11];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada sidiq : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nsidiq dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Elemen sidiq" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> sid[i];
	}

}

void insertionsort() {
	int temp;
	int j, i, min_index;

	for (j = 0; j < n - 1; j++) {
		min_index = j;
		for (i = j + 1; i < n; i++) {
			if (sid[i] < sid[min_index]) {
				min_index = i;
			}
		}
	}
}

void display() {
	cout << endl;
	cout << "====================================" << endl;
	cout << "Element sidiq yang telah tersusun" << endl;
	cout << "====================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << sid[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionsort();

	display();

	system("pause");
	return 0;
}