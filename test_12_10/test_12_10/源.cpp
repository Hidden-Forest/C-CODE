#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream> 
#include <string> 
#include <vector>
#include <algorithm> 
using namespace std;
#if 0
int main(){
	string line;
	while (getline(cin, line)){      
		if (line.find("joker JOKER") != -1){
			cout << "joker JOKER" << endl;
		}
		else{
			int dash = line.find('-');          
			string car1 = line.substr(0, dash);
			string car2 = line.substr(dash + 1);          
			int c1 = count(car1.begin(), car1.end(), ' ');
			int c2 = count(car2.begin(), car2.end(), ' ');         
			string first1 = car1.substr(0, car1.find(' '));
			string first2 = car2.substr(0, car2.find(' '));
			string str = "345678910JQKA2jokerJOKER";
			if (c1 == c2){      
				if (str.find(first1) > str.find(first2)){
					cout << car1 << endl;
				}
				else{
					cout << car2 << endl;
				}
			}
			else
				if (c1 == 3){
					cout << car1 << endl;
				}
				else if (c2 == 3){
					cout << car2 << endl;
				}
				else{
					cout << "ERROR" << endl;
				}
			}
		}
	}
#endif

#if 0
void swap(int* a, int* b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void p(char *s){
	if (*s){
		p(++s);
		printf("%c", *s);
	}
}
void main(){
	char str[] = "Geneius";
	p(str);
}
#endif 
#if 0
int main(){
	vector<vector<int>> arr;
	int n;
	while (cin >> n){
		arr.resize(n);
		for (int i = 0; i < n; i++){
			for (int j = 1; j <= ((i + 1) * 2 - 1); j++){
				arr[i].push_back(1);
			}
		}
		for (int i = 2; i < n; i++){
			for (int j = 1; j < 2 * i; j++){
				if ((j == 1) || (j == (2 * n - 1)))
					arr[i][j] = n;
				else
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1];
			}
		}
		for (int j = 1; j < 2 * n; j++){
			if (arr[n - 1][j] % 2 == 0)
				cout << (j + 1) << endl;
		}
	}
}
#endif 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void add(string addend, string addgend){
	int length_addend = addend.size();
	int length_addgend = addgend.size();

}