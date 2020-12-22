#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		vector<vector<int>> ans;
		int count = 0;
		ans[count].push_back(root->val);
		count++;
		while (root != NULL){
			if (root->left != NULL)
				ans[count].push_back(root->left->val);
			if (root->right != NULL)
				ans[count].push_back(root->right->val);
			root = root->right;
		}
		for (int i = 0; i<ans.size(); ++i){
			if (i % 2 != 0)
				reverse(ans[i].begin(), ans[i].end());
		}
		return ans;
	}
};

void main(){
	vector<vector<int>> array;
	vector<int> arr;
	cout << arr.size() << endl;
}