#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string s1, string s2){
	return s1.size() < s2.size();
}
#if 0
int main(void){
	vector<string> array;
	vector<string> dict;
	vector<string> length;
	int n = 0;
	string str;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> str;
		array.push_back(str);
		dict.push_back(str);
		length.push_back(str);
	}
	sort(dict.begin(), dict.end());
	sort(length.begin(), length.end(), compare);
	if (dict == array && length!=array){
		cout << "lexicographically" << endl;
		return 0;
	}
	if (dict == array && length != array){
		cout << "length" << endl;
		return 0;
	}
	if (dict == array && length == array){
		cout << "both" << endl;
		return 0;
	}
	if (dict != array && length != array){
		cout << "none" << endl;
		return 0;
	}


}

#endif 
#if 0
int main(void){
	int m, n;
	cin >> m >> n;
	if (m == n){
		cout << m << endl;
	}
	if (m > n){
		for (int i = n; i <= (m*n); i++){
			if (i%n == 0 && i%m == 0){
				cout << i << endl;
				return 0;
			}
			
		}
	}
	if (m < n){
		for (int i = m ; i <= (m*n); i++){
			if (i%n == 0 && i%m == 0){
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}
#endif
class cla{
	static int n;
public:
		cla(){ n++; }
		~cla(){ n--; }

};
int cla::n = 0;


int main(void){
	
}