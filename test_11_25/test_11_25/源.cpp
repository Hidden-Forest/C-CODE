#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

#if 0
int main(void){
	string str;
	vector<string> res;
	getline(cin, str);
	int length = str.size();
	int begin = 0,end = 0;
	if (length == 1){
		if (str[0] >= '0' && str[0] <= '9'){
			cout << str[0] << endl; 
			return 0;
		}	
		else
			return 0;
	}
	for (int i = 1; i < length; i++){
		int flag = 0;
		if ((str[i] >= '0' && str[i] <= '9') && (str[i - 1]<'0' || str[i - 1]>'9')){
			begin = i;
		}
		if ((str[i-1] >= '0' && str[i-1] <= '9') && (str[i]<'0' || str[i]>'9')){
			if (end != i - 1){
				flag = 1;
			}
			end = i - 1;
		}
		if (flag==1)
			res.push_back(str.substr(begin, end - begin + 1));
		if (i == length - 1){
			if (str[i] >= '0' && str[i] <= '9'){
				res.push_back(str.substr(begin));
			}
		}
	}
	int max = 0, count = 0;
	for (int i = 0; i < res.size(); i++){
		if (res[i].size() >= max)
			max = res[i].size();
	}
	for (int i = 0; i < res.size(); i++){
		if (res[i].size() == max)
			cout << res[i] << endl;
	}
	
	return 0;
}
#endif

#if 0
int func(){
	int i, j, k=0;
	for (i = 0, j = -1; j = 0; j++, i++){
		k++;
	}
	return k;
}
int main(void){
	char a[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 }, *p; int i;
	i = 8;
	p = a + i;
	printf("%s\n", p - 3);
}
#endif

#if 0
int main(void){
	int num,count;
	vector<int> result1;
	string result2;
	cin >> num >> count;
	if (count < 10){
		if (count>num){
			cout << num;
			return 0;
		}
		while (num != 1){
			result1.push_back(num%count);
			num /= count;
		}
		result1.push_back(1);
		reverse(result1.begin(), result1.end());
		for (auto i : result1){
			cout << i;
			return 0;
		}
	}
	
	else if (count == 10){
		cout << num << endl;
	}
	else if (count > 10){
		if (count>num){
			cout << num;
			return 0;
		}
		while (num != 1){
			int exp = 0;
			exp = num%count;
			if (exp < 10){
				stringstream ss;
				ss << exp;
				result2.push_back(ss.str()[0]);
				ss.clear();
			}
			else{
				if (exp == 10){
					result2.push_back('A');
				}
				else if (exp == 11){
					result2.push_back('B');
				}
				else if (exp == 12){
					result2.push_back('C');
				}
				else if (exp == 13){
					result2.push_back('D');
				}
				else if (exp == 14){
					result2.push_back('E');
				}
				else if (exp == 15){
					result2.push_back('F');
				}
			}
			num /= count;
		}
		result2.push_back('1');
		reverse(result2.begin(), result2.end());
		for (auto i : result2){
			cout << i;
			return 0;
		}
	}

}
#endif
int main()
{
	int num, count;
	int i = 0;
	cin >> num >> count;
	char str[100];
	_itoa(num, str, count);  
	while (str[i] != '\0'){
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	printf("%s\n", str);

	return 0;
}