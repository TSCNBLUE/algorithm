int removeDuplicates(int* nums, int numsSize){
	if(numsSize){
		int k = 0;
		int flag = 0;
        int same = nums[0];
		for(int i = 0; i < numsSize; i++){
            if(nums[i] == same){
                if(flag<2){
                    nums[k] = nums[i];
                    same = nums[k];
                    flag++;
                    k++;
                }
            }
            if(nums[i] != same){
                
                flag = 1;
                nums[k] = nums[i];
                same = nums[k];
                k++;
            }
			
		}
		return k;
	}
	else
		return 0;
}
