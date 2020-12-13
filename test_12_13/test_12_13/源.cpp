#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<iostream>
using namespace std;
int Fib(int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2);
}
int main(){
	int month;
	while (cin >> month){
		cout << Fib(month) << endl;
	}
}
#endif

#if 0
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
	string flag;
	string str;
	while (getline(cin, flag)){
		getline(cin, str);
		int count = str.find(flag);
		if (count >= 0 && count < str.size()){
			cout << "true" << endl;
		}
		else
			cout << "false" << endl;
	}
}
#endif

#if 0
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		reverse(str.begin(), str.end());
		for (int i = 0; i<str.size(); i++){
			if ('A' <= str[i] && str[i] <= 'Z'){
				str[i] += 32;
			}
			else if ('a' <= str[i] && str[i] <= 'z'){
				str[i] -= 32;
			}
		}
		cout << str << endl;
	}
}
#endif 

#if 0
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(void){
	int n, count;
	vector<int> arr;
	while (cin >> n){
		arr.clear();
		for (int i = 0; i < n; i++){
			cin >> count;
			arr.push_back(count);
		}
		sort(arr.begin(),arr.end());
		for (int i = 1; i < n; i++){
			if ((arr[i] - arr[i - 1]) == 0)
				cout << "YES" << endl;
		}
		cout << "NO" << endl;
	}
}
#endif 
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int f(int n){
	static int i = 1;
	if (n >= 5)
		return n;
	n = n + i;
	i++;
	return f(n);
}
int main(void){
	cout << f(1) << endl;
}