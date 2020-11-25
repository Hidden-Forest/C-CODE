#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <iostream>
#include<algorithm>
#include <vector>
#include<string>
using namespace std;
#if 0
int main()
{
	int n = 0;
	vector<int> nums;
	int sum = 1;
	cin >> n;
	if (n == 0){
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		nums.push_back(num);   // 将输入的数字放在数组里
	}
	for (int i = 1; i<n - 1; i++)
	{
		if (nums[i] == nums[i - 1]){
			continue;
		}
		if ((nums[i] > nums[i - 1] && nums[i]>nums[i + 1]) ||
			(nums[i] < nums[i - 1] && nums[i] <nums[i + 1]))    
		{
			++sum;
			if (i != n - 3)
				++i;
			else
				break;
		}
	}
	cout << sum << endl;
	return 0;
}
#endif 

#if 0
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int length = numbers.size() / 2;
		int max = 0;
		int nums[50000] = { 0 };
		for (auto i : numbers){
			nums[i]++;
		}
		for (int i = 0; i<50000; i++){
			if (nums[i]>length){
				cout << i << endl;
				return 0;
			}
		}
		cout << 0 << endl;
	}
};

#endif


int main(void){
	string str;
	getline(cin, str);
	vector<string> result;
	int begin = 0, end = 0; 
	if (str.size() == 1){
		if (str[0] <= 9 && str[0] >= 0){
			cout << str[0] << endl;
		}
		else
		{
			return 0;
		}
	}
	if (str[0] <= 9 && str[0] >= 0){
		begin = 0;
	}
	for (size_t i = 1; i < str.size(); i++){
		if ((str[i] <= 9 && str[i] >= 0) && (str[i - 1]>9 && str[i - 1] < 0)){
			begin = i;
		}
		if ((str[i-1] <= 9 && str[i-1] >= 0) && (str[i]>9 && str[i] < 0)){
			end = i - 1;
		}
		result.push_back(str.substr(begin, end));
	}
	int max = 0;
	int count = 0;
	for (size_t i = 0; i < result.size(); i++){
		if (result[i].size() >= max){
			max = result[i].size();
			count = i;
		}
	}
	cout << result[count] << endl;
}

