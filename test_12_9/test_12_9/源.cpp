#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool judge_num(int num){
	int sum = 0;
	for (int i = 1; i < num; i++){
		if (num%i == 0){
			sum += i;
		}
	}
	if (sum == num)
		return true;
	else
		return false;
}
int main(void){
	int n, count;
	while (cin >> n){
		count = 0;
		if (n == 0)
			return -1;
		for (int i = 1; i < n; i++){
			if (i){
				count++;
			}
		}
		cout << count;
	}
}