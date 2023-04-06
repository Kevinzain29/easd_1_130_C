//1.suatu algortima dibutuhkan untuk menyelesaikan suatu masalah karena suatu masalah membutuhkan solusi yang efektif dan juga efisien untuk menyelesaikan masalah tersebut, maka dari itu dengan algoritma kita bisa lebih mudah untuk menyelesaikan suatu masalah 
//2.struktur data statis dan struktur data dinamis   
//3.faktor faktor yang mempengaruhi efisiensi suatu program yaitu banyaknya data dan memori
//4.bubblesort, karena bubblesort menurut saya bubblesort sangat simple dan juga efisien
//5.
//6.

#include <iostream>
using namespace std;

int kevin[37];
int n;
int cmp_count = 0;
int mov_count = 0;

void input() {
	while (true) {
		cout << "masukkan panjang element array: ";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "maksimum panjang array adalah 37" << endl;
	}

		cout << endl;
		cout << "\n============================" << endl;
		cout << "\nmasukkan element array" << endl;
		cout << "\n============================" << endl;
		
		for (int i = 0; i < n; i++) {
			cout << "<" << (i + 1) << ">";
			cin >> kevin[i];
		}
}

void swap(int a, int b) {
	int temp;
	temp = kevin[a];
	kevin[a] = kevin[b];
	kevin[b] = temp;
}

int mid(int low, int high) {
	return (low + high) / 2;
}

void mergesort(int low, int high, int mid) {
	int pivot, i, dd, k;
	if (low >= high)
		return;
	i = low;
	dd = mid + 1;
	k = low;

	for (int i = 0; i > dd or high; i++) {
		cmp_count++;

	}

	if (kevin[i] <= kevin[dd]) {
		swap(kevin[i], k);
		i++;
		cmp_count++;
	}

	else {
		swap(kevin[dd], k);
		dd++;
		k++;
		cmp_count++;
	}

	for (int dd = 0; dd > high; dd++) {
		swap(kevin[dd], k);
		dd++;
		k++;
		cmp_count++;
	}
}

void display() {
	cout << "\n============================" << endl;
	cout << "array yang telah disusun" << endl;
	cout << "\n============================" << endl;

	for (int i = 0; i < n; i++) {
		cout << kevin[i] << "";
	}

	cout << "\n\nperbandingan nomor :" << cmp_count << endl;
	cout << "perpindahan data: " << mov_count << endl;

    }

	int main() {
		input();
		display();
	}


