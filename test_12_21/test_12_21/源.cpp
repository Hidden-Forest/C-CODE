#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
#if 0;
class Solution {
public:
	bool judge_num(int n){
		if (n % 2 == 0)
			return true;
		return false;
	}
	int numberOfSteps(int num) {
		int ans = 0;
		while (num != 0){
			if (judge_num(num)){
				num /= 2;
				ans++;
			}
			else{
				num -= 1;
				ans++;
			}
		}
		return ans;
	}
};
#endif 

class Solution {
public:
	int findNumbers(vector<int>& nums) {
		string str;
		int ans = 0;
		for (int i = 0; i < nums.size(); ++i){
			str = to_string(nums[i]);
			if (str.size() % 2 == 0)
				ans++;
		}
		return ans;
	}
};
void main(){

}