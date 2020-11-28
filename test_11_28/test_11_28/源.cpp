#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		const int len = str.length();
		if (len == 0) return 0;
		int i = 0;
		while (i < len && str[i] == ' ') { ++i; } // 排除开头的空格
		if (i == len) return 0;
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-') return 0;
		bool neg = str[i] == '-' ? true : false;
		i = isdigit(str[i]) ? i : i + 1;
		long long ans = 0L;

		while (i < len && isdigit(str[i])) {
			ans = ans * 10 + (str[i++] - '0');

			if (!neg && ans > INT_MAX) {
				ans = INT_MAX;
				break;
			}
			if (neg && ans > 1L + INT_MAX) {
				ans = 1L + INT_MAX;
				break;
			}
		}
		if (i != len) return 0; // 不要此处，就是atoi()库函数的实现
		return !neg ? static_cast<int>(ans) : static_cast<int>(-ans);
	}

};


#if 0
int main(void){

	int W, H, i, j, counts = 0;

	cin >> W >> H;

	if (W % 4 == 0 || H % 4 == 0){

		counts = W*H / 2;

	}else if(W % 2 == 0 && H % 2 == 0){

		counts = (W*H / 4 + 1) * 2;

	}
	else{

		counts = W*H / 2 + 1;

	}

	cout << counts << endl;

	return 0;

}


#endif

#if 0
int main(void){
	printf("%o %o", 0123, 123);
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	printf("%c", a + b);
}
#endif



int main(void){
	string str;
	while (cin >> str){
		int arr[256] = { 0 };
		int count = 99999;
		for (int i = 0; i<str.size(); i++){
			arr[str[i]]++;
		}
		for (int i = 0; i < 256; i++){
			if (arr[i] == 0)
				continue;
			else if (arr[i] <= count)
				count = arr[i];
		}
		for (int i = 0; i<str.size(); i++){
			if (arr[str[i]] != 0 && arr[str[i]] != count)
				cout << str[i];
		}
		cout << endl;
	}
}