void reverseString(char* s, int sSize){
    if(sSize > 0){
        for(int i = 0, j = sSize-1; i <= j; i++, j--){
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
    
}
