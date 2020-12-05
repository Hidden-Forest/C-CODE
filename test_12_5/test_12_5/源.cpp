#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

int test(int n, int m, int i, int j){
	return n + (m << j);
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
#if 0
int main(void){
	int n;
	cin >> n;
	
	for (int i = (n / 2); i >= 0; i--){
		if (isPrime(i) == true){
			left = i;
			break;
		}
	}
	for (int i = (n / 2); i <= n; i++){
		if (isPrime(i) == true){
			right = i;
			break;
		}
	}
	cout << left << " " << right;
}
#endif 

#if 0
int main()
{
	int n;
	while (cin >> n)
	{
		int half = n / 2;
		if (isPrime(half))
		{
			cout << half << endl;
			cout << half << endl;
			continue;
		}
		int left = half - 1, right = half + 1;
		while (left >= 0)
		{
			if (isPrime(left) && isPrime(right))
				break;
			left--;
			right++;
		}
		cout << left << endl;
		cout << right << endl;
	}
	return 0;
}
#endif 
#define s(x) x*x

void fun(const int& i, const int& j){
	cout << i << " " << j;
}
class A{
public:
	virtual int bar(char x){
		return (int)(x);
	}
};
class B : public A{
public:
	int bar(char x){
		return (int)(-x);
	}
};

struct D {
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
	
void func(const int& v1, const int& v2){
	cout << v1 << " " << &v1 << endl;
	cout << v2 << " " << &v2 << endl;
}
void main(){
	int i = 0;
	func(++i, i++);
	cout << &i << endl;
	printf("%02X", 14);
}