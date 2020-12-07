#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//пртк╣д╢Эвс
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sum(const vector<int> arr){
	int length = arr.size();
	int summ = 0;
	for (int i = 0; i<length; i++){
		summ += arr[i];
	}
	return summ;
}
int product(const vector<int> arr){
	int length = arr.size();
	int product = 1;
	for (int i = 0; i<length; i++){
		product *= arr[i];
	}
	return product;
}
int judge(const vector<int> arr){
	int i = sum(vector<int> arr);
	int j = product(vector<int> arr);
	if (i == j)
		return 1;
	else
		return 0;
}
void main(){
	int n = 0, count = 0;
	while (cin >> n){
		int amount = 0;
		vector<int> arr;
		for (int i = 0; i<n; i++){
			cin >> count;
			arr.push_back(count);
		}
		vector<int> array;

	}

}
#endif 

#include<iostream>
using namespace std;

int main(){
	int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	int sum = 0;
	while (cin >> year >> month >> day){
		sum = 0;
		monthday[2] = 28;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			monthday[2] = 29;
		}
		for (int i = 1; i < month; i++){
			sum += monthday[i];
		}
		sum += day;
		cout << sum << endl;
	}
}
