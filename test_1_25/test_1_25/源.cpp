#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n = 0, ans = 0;
	string str;
	while (cin>>n)
	{
		while (n>=10){
			str = to_string(n);
			n = 0;
			for (int i = 0; i < str.size(); ++i){
				n += (str[i]-48);
			}
		}
		cout << n << endl;
	}
}