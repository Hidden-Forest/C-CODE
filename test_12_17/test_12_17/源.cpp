#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		if (root == NULL)
			return NULL;
		if (root->val == val)
			return root;
		while (root){
			if (root->val == val)
				return root;
			else if (root->val < val)
				root = root->left;
			else
				root = root->right;
		}
		return NULL;
	}
};



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		vector<ListNode *> array;
		while (headA){
			array.push_back(headA);
			headA = headA->next;
		}
		while (headB){
			for (int i = 0; i < array.size(); ++i){
				if (array[i] == headB){
					return headB;
				}
			}
		}
		return NULL;
	}
};