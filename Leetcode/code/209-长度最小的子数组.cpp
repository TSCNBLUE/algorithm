int findKthLargest(int* nums, int numsSize, int k){
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize - i - 1; j++){
            if(nums[j] < nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }

   
    return nums[k-1];
}
