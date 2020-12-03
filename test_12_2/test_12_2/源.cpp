#include<iostream>
#include<string>
#include<vector>
using namespace std;
int flag = 0;
int way(int n, int m){
	if (m == 0 || n == 0){
		return flag++;
	}
		way(n--, m);

		way(n, m--);
}
int main(void){
	int m, n;
	cin >> n >> m;
	cout << way(n, m) << endl;
}