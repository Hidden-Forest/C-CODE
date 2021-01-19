#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
bool fun(int n){
	int sum = 0;
	for (int i = 0; n > sum; i += 2){
		sum += i;
	}
	return (sum == n);
}
void main(){
	/*int n = 0;
	while (std::cin >> n){
		if (n == 0)
			return;
		int count = 0;
		while (n != 1 && n != 0){
			if (n == 2){
				count++;
				n = 0;
				break;
			}
			else
			{
				count += ((n-(n%3)) / 3);
				n = ((n - (n % 3)) / 3) + (n % 3);
			}
		} 
		std::cout << count << std::endl;
	}*/
	if (fun(484) == false)
		std::cout << "fun(484)" ;
}