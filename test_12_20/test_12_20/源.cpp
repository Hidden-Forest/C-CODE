#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	static string removeDuplicateLetters(string s) {
		if (s.size() == 0)
			return s;
		int Hash[26] = { 0 };
		int flag = 0;
		string ans;
		for (int i = 0; i<s.size(); ++i){
			Hash[s[i] - 97]++;
		}
		for (int i = 0; i<s.size(); ++i){
			if (Hash[s[i] - 97]>1){
				for (int j = i; j<s.size(); ++j){
					if (s[j]<s[i]){
						flag = 1;
						Hash[s[i] - 97]--;
					}
				}
			}
			if (Hash[s[i] - 97] == 1  || flag==1){
				Hash[s[i] - 97]--;
				ans.push_back(s[i]);
			}

		}
		return ans;

	}
};
int main(){
	string s;
	cin >> s;
	cout << Solution::removeDuplicateLetters(s) << endl;
}