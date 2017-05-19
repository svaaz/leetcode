/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
int index =0;
int loop = 0;
int *result = malloc(2*(sizeof(int)));

for(index=0;index<numsSize;index++)
    {
        for(loop = index+1; loop<numsSize; loop++)
        {
            if(nums[index]+nums[loop] == target)
            {
                result[0]= index;
                result[1]= loop;
            }
        }
    }
    
return result;
    
}
