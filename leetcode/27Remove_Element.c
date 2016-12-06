/**
2016/11/3
leetcode 27 https://leetcode.com/problems/remove-element/

Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.
*/
#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
	int newlength = 0;
	int j=-1;
	for(int i=0;i<numsSize;++i)
	{
		if(nums[i]!=val)
		{
			newlength++;
			if(j!=-1){
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j]=temp;
			}
			++j;
		}
		else {
			if(i==0||nums[i-1]!=val)
			j=i;
		}
	}
	return newlength;
}
int main(int argc, char *argv[]) {
	int a[]={2,2,3};
	int len = removeElement(a, sizeof(a)/sizeof(int), 2);
	printf("%d\n",len);
	for(int i=0;i<len;i++)
	{printf("%d, ", a[i]);}
	
}