int maxArea(int* height, int heightSize){

    int max = 0;
    int area = 0;

    for(int i = 0, j = heightSize-1; i < j;){
        if(height[i] <= height[j]){
            area = height[i] * (j-i);
            if(area > max)
                max = area;
            i++;
        }
                
        if(height[i] > height[j]){
            area = height[j] * (j-i);
            if(area > max)
                max = area;
            j--;
        }

    }
    return max;
}
