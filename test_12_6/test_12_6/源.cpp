#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<iostream>
using namespace std;
void func(const int& v1, const int& v2){
	cout << v1 << " " << &v1 << endl;
	cout << v2 << " " << &v2 << endl;
}
int main(void){
	int i = 0;
	cout << &i << endl;
	func(++i, i++);
}
#endif

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int step = 0;

int num(int n){
	for (int i = n - 1; i > 1; i--){
		if ( n % i == 0 ){
			return i;
		}
	}
}

static bool isPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= (int)sqrt((double)n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int Stair(int n, int m){
	if (n > m){
		step--;
		return 0;
	}
	if (n == m){
		cout << step << endl;
		exit(1);
	}
	else{
		if (isPrime(n)){
			step--;
			return 0;
		}
		else{
			for (int i = (n - 1); i > 1; i--){
				if (n%i == 0){
					step++;
					Stair(n + i, m);
				}
			}
		}
	}
}

int main(void){
	int n, m;
	while (cin >> n >> m){
		if (isPrime(n)){
			cout << -1 << endl;
			return 0;
		}

	}
	return 0;
}