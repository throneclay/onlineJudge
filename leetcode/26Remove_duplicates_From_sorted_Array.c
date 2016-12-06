/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
*/
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
	int j=1;
	if(numsSize<=1)
		return numsSize;
	for(int i=1;i<numsSize;++i)
	{
		if(nums[i]!=nums[i-1])
			nums[j++]=nums[i];
	}
	return j;
}

int main(int argc, char *argv[]) {
	int array[] = {1,1,2,2};
	int length = removeDuplicates(array, (sizeof(array)/sizeof(int)));
	printf("length = %d\n",length);
	for(int i=0;i<length;i++)
		printf(" %d ",array[i]);
	printf("\n");
	return 0;
}