bool yuanyin(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' ||  c == 'u'||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    else
        return false;
}

char * reverseVowels(char * s){
    if(strlen(s) > 0){
        for(int i = 0, j = strlen(s)-1; i <= j;){
            if(yuanyin(s[i])){
                if(yuanyin(s[j])){
                    int temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++;
                    j--;
                }else{
                    j--;
                }
            }else{
                i++;
            }
        }
    }   
    return s;
}
