#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
#if 0
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		// 水平翻转
		for (int i = 0; i < n / 2; ++i) {
			for (int j = 0; j < n; ++j) {
				swap(matrix[i][j], matrix[n - i - 1][j]);
			}
		}
		// 主对角线翻转
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}
	}
};
#endif 

class Solution {
public:
	int countConsistentStrings(string allowed, vector<string>& words) {
		int Hash[26] = { 0 };
		int ans = 0;
		int count = 0;
		for (int i = 0; i < allowed.size(); ++i){
			Hash[allowed[i] - 97]++;
		}
		for (int i = 0; i < words.size(); ++i){
			count = 0;
			for (int j = 0; j < words[i].size(); ++j){
				if (Hash[words[i][j] - 97] == 0)
					count++;
			}
			if (count != 0)
				ans++;
		}
		return ans;
	}
};
void main(){
	vector<vector<int>> arr;

}