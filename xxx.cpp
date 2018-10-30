#include<iostream>
#include <iomanip>
using namespace std;
int num(long long n);
int min(long long n);
int max(long long n);
bool prost(long long n);
int main()
{
	setlocale(LC_CTYPE, "rus");
	long long n;
	cout << "Введите число: ";
	cin >> n;
	if(n == 0) n = 1;
	cout << "\nКол-во цифр:" << setw(7) << num(n) <<
		"\nМинимальная цифра:" << setw(7) << min(n) << 
		"\nМаксимальная цифра:" << setw(7) << max(n) <<
		"\nПростое число:\t";
	if (prost(n) == 0) cout << "false" << endl;
	else cout << "true" << endl;
	system("pause");
	return 0;
}
int num(long long n) {
	int c(0);
	while (n !=0){
		n /= 10;
		c++;
	}
	return c;
}
int min(long long n) {
	int c(10);
	while (n != 0){
		if (n % 10 < c) c = n % 10;
		n /= 10;
	}
	return c;
}
int max(long long n) {
	int c(0);
	while (n != 0){
		if (n % 10 > c) c = n % 10;
		n /= 10;
	}
	return c;
}
bool prost(long long n) {
	for (int i(2); i <= n / 2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}