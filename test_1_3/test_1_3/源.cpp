#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* partition(ListNode* head, int x) {
		vector<int> array;
		int i = 0, flag = 0, judge = 0;
		array.push_back(head->val);
		while (head = head->next){
			array.push_back(head->val);
		}
		ListNode* ans;
		ListNode* count = ans;
		while (i < array.size()){
			if (flag = 0){
				for (int j = 0; j < array.size(); ++j){
					if (array[j] < x){
						count->val = array[j];
						count = count->next;
						judge++;
					}
					
				}
			}
			else if (flag = 1){
				for (int j = 0; j < array.size(); ++j){
					if (array[j] < x){
						count->val = array[j];
						count = count->next;
						judge++;
					}

				}
			}
		}
		return ans;
	}
};