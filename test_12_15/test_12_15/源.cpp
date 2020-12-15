#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	static int monotoneIncreasingDigits(int N) {
		string ans;
		int count;
		for (int i = N; i >= 0; i--){
			count = 0;
			ans.clear();
			stringstream ss;
			ss << i;
			ss >> ans;
			for (int j = 1; j < ans.size(); j++){
				if (ans[j] < ans[j - 1])
					break;
				else
					count++;
			}
			if (count == (ans.size()-1))
				return i;
		}
		return 0;
	}
};
int main(void){
	cout << Solution::monotoneIncreasingDigits(332) << endl;
}