bool isPalindrome(char * s){
	int len = strlen(s);

    char * newstr = (char *)malloc(sizeof(char)*(len+1));
	bool flag = false;
	int j = 0;
	for(int i = 0; i < len; i++){
		if( (s[i]>='A') && (s[i]<='Z') )
            s[i] = tolower(s[i]);	
                	
		if( ( (s[i]>='a') && (s[i]<='z') ) || ( (s[i]>='0') && (s[i]<='9') ) ){
			newstr[j] = s[i];
			j++;
		}
	}
    newstr[j] = '\0';

	if(strlen(newstr) == 0)
		return 1;
	else{
		for(int i = 0, j = (strlen(newstr)-1); i <= j; i++, j--){
			if(newstr[i] == newstr[j])
				flag = true;
			else{
				flag = false;
				break;
			}
		}	

		return flag;
	}	
}
