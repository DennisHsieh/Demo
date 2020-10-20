int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int i, max, min;

    max = min = nums[0];

    for(i = 0; i < numsSize; i++) {

        if(nums[i] > max) max = nums[i];

        if(nums[i] < min) min = nums[i];

    }

    int *map  = (int *)calloc((max - min + 1), sizeof(int));

    int *result = (int *)malloc(2 * sizeof(int));

    bool found = false;

    for(i = 0; i < numsSize; i++) {

        int lookfornum = target - nums[i];

        if(lookfornum < min || lookfornum > max) continue;

        int dis = lookfornum - min;

        if (map[dis]) {

            result[0] = i;

            result[1] = map[dis] - 1;

            found = true;

            break;

        }

        else{

            map[nums[i] - min] = i + 1;

        }

    }

    if(found)

        *returnSize = 2;

    else

        *returnSize= 0;

    return result;

}
