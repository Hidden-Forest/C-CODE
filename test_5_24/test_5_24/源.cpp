#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int b = 0;
//	char num;
//	char arr[100] = { '0' };
//	scanf("%s", &arr);
//	scanf("%s", &num);
//	b = int(num);
//	for (int i = 0; i <100 ; i++)
//	{
//		if (arr[i] == b)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//删除数组中的重复项
//#include<stdio.h>
//int removeDuplicates(int* nums, int numsSize){
//	int src1 = 0, src2 = 1;
//	int dst = 0;
//	
//	while (src2 < numsSize)
//	{
//		nums[dst] = nums[src1];
//		++dst;
//		
//		if (nums[src1] != nums[src2])
//		{
//			++src1;
//			++src2;
//		}
//		else
//		{
//			
//			while (src2 < numsSize && nums[src1] == nums[src2])
//			{
//				++src2;
//			}
//			
//			src1 = src2;
//			++src2;
//		}
//	}
//
//	if (src1 < numsSize)
//	{
//		nums[dst] = nums[src1];
//		++dst;
//	}
//
//
//	return dst;
//}
//int main()
//{
//	int ret = 0;
//	int numsSize = 10;
//	int nums[10] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
//	ret = removeDuplicates(nums , numsSize);
//	printf("%d", ret);
//	return 0;
//}
//1.原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1)。
//#include<stdio.h>
//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//	​
//		return dst;
//}
void reverse(int* nums, int begin, int end)
{
	while (begin < end)
	{
		int tmp = nums[begin];
		nums[begin] = nums[end];
		nums[end] = tmp;

		++begin;
		--end;
	}
}

int* addToArrayForm(int* A, int ASize, int K, int* returnSize){
	int* addRet = (int*)malloc(10001 * sizeof(int));
	int reti = 0;
	int ai = ASize - 1;
	int next = 0; 
	while (ai >= 0 || K > 0)
	{

		int x1 = 0;
	
		if (ai >= 0)
		{
			x1 = A[ai];
			--ai;
		}

		int x2 = 0;
		
		if (K > 0)
		{
			x2 = K % 10;
			K /= 10;
		}
		
		int ret = x1 + x2 + next;
		
		if (ret > 9)
		{
			ret %= 10;
			next = 1;
		}
		else
		{
			next = 0;
		}
		
		addRet[reti++] = ret;
	}
	
	if (next == 1)
	{
		addRet[reti++] = 1;
	}
	
	reverse(addRet, 0, reti - 1);
	*returnSize = reti;

	return addRet;
}