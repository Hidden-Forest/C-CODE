#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int Fib(int n){
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
class Parenthesis {
public:
	bool chkParenthesis(string str, int count) {
		int right = 0, left = 0;
		for (int i = 0; i<count; i++){
			if (str[i] != '(' && str[i] != ')')
				return false;
			if (str[0] == ')')
				return false;
			if (str[i] == '(')
				right++;
			else if (str[i] == ')')
				left++;
		}
		if (right == left)
			return true;
		else
			return false;
	}
};
#if 0
int main(void){
	vector<int> array;
	int count = 0, i = 0, ans = 0;
	cin >> count;
	if (count == 0 ){
		cout << 0 << endl;
		return 0;
	}
	for (i = 0; i < count; i++){
		array.push_back(Fib(i));
		if (Fib(i) >= count)
			break;
	}
	ans = (array[i] - count) > (count - array[i - 1]) ? (count - array[i - 1]) : (array[i] - count);
	cout << ans << endl;
	return 0;
}
#endif

class A
{
public:
	A(int aa, int bb){
		a = aa -- ;
		b = a*bb;
		cout << a << b << endl;

	};
	static void C(){
		cout << 666 << endl;
	}
private:
	int a, b;
};
int main(void){
	A test(4, 5);
	A::C();
}