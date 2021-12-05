# https://leetcode-cn.com/problems/search-insert-position/


int searchInsert(int* nums, int numsSize, int target){
    int lt = 0;
    int rt = numsSize - 1;
    int mid = 0;
    printf("The init mid is %d, the lft is %d, the right is %d.\n", mid, lt, rt);
    while(lt <= rt){
        mid = (lt + rt)/2;
        printf(">>in loop>>\n");
        if(nums[mid] == target){
            printf(">>in case1>>\n");
            return mid;
        }

        if(nums[mid] > target){
            printf(">>in case2>>\n");
            rt = mid - 1;
        }

        if(nums[mid] < target){
            printf(">>in case3>>\n");
            lt = mid + 1;
        }
        printf(">>in end pos,the mid is %d, the lt is %d, the rt is %d.>>\n", mid, lt, rt);
    }
    return lt;
}