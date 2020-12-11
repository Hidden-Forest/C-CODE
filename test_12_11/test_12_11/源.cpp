#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
struct Test{
	static void foo(T op1, T op2){
		cout << op1 << " " << op2;
	}
};
void main(){
	Test<int>::foo(1, 3);
}