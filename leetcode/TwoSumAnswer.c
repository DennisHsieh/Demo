int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result = (int *)malloc(2 * sizeof(int));
    bool found = false;
    for(int i = 0; i < numsSize - 1; i++){
        if(!found){
            for(int j = i + 1; j < numsSize; j++){
                if(nums[i] + nums[j] == target){
                    result[0] = i;
                    result[1] = j;
                    found = true;
                    break;
                }
            }
        }
    }
    if(found){
        *returnSize = 2;
    }
    else{
        *returnSize = 0;
    }
    return result;
}
