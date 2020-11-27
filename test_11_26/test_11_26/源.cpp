#define _CRT_SECURE_NO_WARNINGS 1
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

#if 0
//½øÖÆ×ª»»
int main(void){
	int a, d;
	int flag = 0;
	cin >> a >> d;
	if (a < 0){
		a *= -1;
		flag = 1;
	}
	if (a == 0){
		cout << 0;
		return 0;
	}
	int i = 0; char s[120];
	while (a != 0){
		int f = a%d;
		if (f<10){
			s[i++] = f + '0';
		}
		else{
			char v = 'A' + f - 10;
			s[i++] = v;
		}
		a /= d;
	}
	if (flag == 1)
		cout << '-';
	for (int j = i - 1; j >= 0; j--) {
		cout << s[j];
	}
	return 0;
}
#endif

#if 0
int main(void){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A, B, C;
	A = (a + c) / 2;
	B = (b + d) / 2;
	C = d - (b + d) / 2;
	if (A < 0 || B < 0 || C < 0){
		cout << "No" << endl;
	}
	cout << A << " " << B << " " << C << endl;
}
 
#endif

#if 0
int main(void){
	int a[5] = { 1, 3, 5, 7, 9 };
	int *p = (int *)(&a + 1);
	printf("%d  %d", *(a + 1), *(p - 1));
}

#endif

#if 0
int main(void){
	string str1, str2, str, exp;
	int count = 0;
	cin >> str1>> str2;
	if (str1.size() == 1){
		str = str1;
		str.insert(0, str2);
		exp = str;
		reverse(str.begin(), str.end());
		if (str == exp)
			count++;
	}
	if (str1.size() == 1){
		str = str1;
		str += str2;
		exp = str;
		reverse(str.begin(), str.end());
		if (str == exp)
			count++;
		cout << count << endl;
		return 0;
	}
	for (int i = 0; i < str1.size(); i++){
		str = str1;
		str.insert(i, str2);
		exp = str;
		reverse(str.begin(), str.end());
		if (str == exp)
			count++;
	}
	str = str1;
	str += str2;
	exp = str;
	reverse(str.begin(), str.end());
	if (str == exp)
		count++;
	cout << count << endl;
	return 0;
}
#endif

int main(void){
	vector<int> nums;
	vector<int> sum;
	int n, res = 0;
	int num = 0;
	int max = 0;
	int m_max = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num;
		nums.push_back(num);
	}
	for (int i = 0; i < nums.size(); i++){
		m_max = max;
		m_max += nums[i];
		if (m_max>max){
			max = m_max;
		}
		else{
			sum.push_back(max);
			max = nums[i];
		}
	}
	cout << sum[sum.size() - 1] << endl;
	return 0;
}