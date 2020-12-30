#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
	int get_Max(vector<int>& stones){
		int flag = 0;
		int Max = 0;
		for (int i = 0; i < stones.size(); ++i){
			if (stones[i] >= Max){
				Max = stones[i];
				flag = i;
			}
		}
		return flag;
	}
	int get_max(vector<int>& stones, int count){
		int flag = 0;
		int max = 0;
		for (int i = 0; i < stones.size(); ++i){
			if (count == i)
				continue;
			if (stones[i] >= max){
				max = stones[i];
				flag = i;
			}
		}
		return flag;
	}
	int lastStoneWeight(vector<int>& stones) {
		int Max = get_Max(stones);
		int max = get_max(stones, Max);
		while (Max != 0 && max != 0){
			if (stones[Max] == stones[max]){
				stones[Max] = 0;
				stones[max] = 0;
			}
			else
			{
				stones[Max] = stones[Max] - stones[max];
				stones[max] = 0;
			}
			Max = get_Max(stones);
			max = get_max(stones, Max);
		}
		return stones[get_Max(stones)];
	}
};

void main(){
	vector<int> stones{ 2, 1, 1, 1 };
	Solution Test;
	cout << Test.lastStoneWeight(stones) << endl;

	
}