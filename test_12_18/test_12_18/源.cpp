#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
#if 0
class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		vector<string> ans;
		char arr1[10] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' };
		char arr2[9] = { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' };
		char arr3[7] = { 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
		for (int i = 0; i < words.size(); ++i){
			int count1 = 0, count2 = 0, count3 = 0;
			for (int j = 0; j < words[i].size(); ++j){
				tolower(words[i][j]);
				for (int k = 0; j < 10; ++j){
					if (arr1[k] == words[i][j])
						count1++;
				}
				for (int k = 0; j < 9; ++j){
					if (arr2[k] == words[i][j])
						count2++;
				}
				for (int k = 0; j < 7; ++j){
					if (arr3[k] == words[i][j])
						count3++;
				}
			}
			if (count1 == words[i].size() || count2 == words[i].size() || count3 == words[i].size())
				ans.push_back[words[i]];
		}
		return ans;
	}
};
#endif

class Solution {
public:
	static char findTheDifference(string s, string t) {
		int Hash[26] = { 0 };
		int count = (s.size() >= t.size() ? t.size() : s.size());
		for (int i = 0; i < count; ++i){
			Hash[s[i] % 97]++;
			Hash[t[i] % 97]++;
		}
		Hash[t[count] % 97]++;
		for (int i = 0; i < 26; i++){
			if (Hash[i] % 2 != 0)
				return (char)(i + 97);
		}
	}
};
int main(){
	string s;
	string t;
	getline(cin, s);
	getline(cin, t);
	cout << Solution::findTheDifference(s, t) << endl;
}