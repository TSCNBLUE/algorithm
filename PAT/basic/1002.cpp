#include<cstdio>

int pinyin()
{
	int sum = 0;
	char ch, s[4];                       //ch��Ϊ��ʱ�������������ÿһ���ַ���s����sum��ÿһ������                        
	char b[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	while ((ch = getchar()) != '\n')    //���һֱ�����ַ��������س��Ļ� 
		sum += (ch - '0'); //�ַ�����ת�������� 
	sprintf(s, "%d", sum);              // sprintf(char *buffer, const char *format,[ argument])�������������ݰ�ĳ�ָ�ʽת�����ַ��� 
	for (int i = 0; s[i] != 0; i++) {
		if (i > 0)
			printf(" ");//���ÿ�����ַ���֮��Ŀո� 
		printf("%s", b[s[i] - '0']);
	}
	return 0;
}