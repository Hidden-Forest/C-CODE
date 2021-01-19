#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<string>
int main(){
	std::string str;
	std::cin >> str;
	std::reverse(str.begin(), str.end());
	std::cout << str << std::endl;
}