#include<string.h>
#include<stdio.h>
char tmp[256];
char * del(char i1[], char i2[])
{
	
	char * p = strstr(i1, i2);
	char *k1 = i1;
	char *k2 = i2;
	p[0] = '\0';
	p += strlen(i2);
	strcpy(tmp, k1);
	strcat(tmp, p);
	printf("%s", tmp);
	
	return tmp;
}

int main()
{
	char i1[256] = "abcdeef";
	char i2[256] = "cde";
	char tmp[256];
	/*char * p = strstr(i1, i2);
	char *k1 = i1;
	char *k2 = i2;
	p[0] = '\0';
	p += strlen(i2);
	strcpy(tmp, k1);
	strcat(tmp, p);*/
	//printf("%s", tmp);

	char i3[256];
	strcpy(i3, del(i1, i2));
	printf("%s", i3);
	return 0;
}
