#include <iostream>
using namespace std;

// Ham kiem tra so nguyen to
bool isPrime(int n) {
	if (n <= 1) 
		return false; 
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false; 
		}
	}
	return true; 
}

// Ham kiem tra nam nhuan
bool isLeapYear(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		return true; 
	}
	return false;
}

int main() {
	int choice;

	do {
		cout << "\n=============<> Menu<>===========\n";
		cout << "  1. Kiem tra so nguyen to\n";
		cout << "  2. Kiem tra nam nhuan\n";
		cout << "  3. Thoat\n";
		cout << "  Chon chuc nang: ";
		cin >> choice;
		
		if (choice == 1) {
			int n;
			cout << "\nNhap mot so nguyen duong: ";
			cin >> n;
			if (isPrime(n)) {
				cout << n << " la so nguyen to\n";
			}
			else {
				cout << n << " khong phai la so nguyen to\n";
			}
		}
		else if (choice == 2) {
			int y;
			cout << "\nNhap nam: ";
			cin >> y;
			if (isLeapYear(y)) {
				cout << y << " la nam nhuan\n";
			}
			else {
				cout << y << " khong phai la nam nhuan\n";
			}
		}
		else if (choice != 3) {
			cout << "Lua chon khong hop le! Vui long chon lai!!!\n";
		}

	} while (choice != 3); 

	cout << "Chuong trinh ket thuc\n";
	return 0;
}
