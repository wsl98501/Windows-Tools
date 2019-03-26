#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
# include <io.h>
# include <iostream>
using namespace std;
//#include "C:/MinGW/include/dirent.h"

char tmp[256];
char * del(char i1[],char i2[])
{
	
	char * p = strstr(i1, i2);
	char *k1 = i1;
	char *k2 = i2;
	p[0] = '\0';
	p += strlen(i2);
	strcpy(tmp, k1);
	strcat(tmp, p);
	//printf("%s", tmp);
	return tmp;
}

char * rep(char i1[], char i2[], char i3[])
{

	char * p = strstr(i1, i2);
	char *k1 = i1;
	char *k2 = i2;
	p[0] = '\0';
	p += strlen(i2);
	strcpy(tmp, k1);
	strcat(tmp, i3);
	strcat(tmp, p);
	//printf("%s", tmp);
	return tmp;
}
char * add(char i1[], char i2[])
{

	char *k1 = i1;
	char *k2 = i2;
	strcpy(tmp, i1);
	strcat(tmp, i2);
	
	//printf("%s", tmp);
	return tmp;
}
char * addn(char i1[], char i2[],int place)
{

	char *k1 = i1;
	char *k2 = i2;
	if (place <-1 || place >strlen(i1)-1)
	{
		strcpy(tmp, i2);
		return i2;;
	}
	else if(place==-1)
	{
		strcpy(tmp, i2);
		strcat(tmp, i1);
		return tmp;
	}
	else if (place == strlen(i1)-1)
	{
		strcpy(tmp, i1);
		strcat(tmp, i2);
		return tmp;
	}
	else
	{
		char *p = i1;
		p += place;
		char after[128];
		strcpy(after, p);
		p[0] = '\0';
		strcpy(tmp, i1);
		strcat(tmp, i2);
		strcat(tmp, after);
		return tmp;
	}

	//printf("%s", tmp);
	return tmp;
}
int main(int ac,char* av[])
{
	if (ac == 1)
	{
		printf("dd to delete dirOpened output of\n");
		printf("d argv to delete argv\n");
		printf("r argv1 argv2 to replace\n");
		printf("a argv to add front\n");
		printf("input here:");
		//scanf("%d",&ac);
		ac = 2;
		if (ac < 2)
			return 0;
		int t1 = 1;
		av[1] = (char *)malloc(2*sizeof(char*));
		char **p=av+1;
		while (t1 < ac)
		{
			cin >> av[1];
			p++;
			t1++;
		}
		goto console;
	}
	if (ac == 2 && (!strcmp(av[1], "-h") || !strcmp(av[1], "help")))
	{
		printf("dd to delete dirOpened output of\n");
		printf("d argv to delete argv\n");
		printf("r argv1 argv2 to replace\n");
		printf("a argv to add back\n");
		return 0;
	}
	if (ac < 2)
	{
		printf("error\n");
		return 0;
	}
console:
	char call[256];
	char tmp[256];
	char namelater[256];
	if (ac == 3 && !strcmp(av[1], "d"))
	{
		char *n1 = av[1];
		char *n2 = av[2];
		

		char* filename;
		struct _finddata_t fileinfo;
		intptr_t fHandle;
		int filenumber = 0;
		fHandle = _findfirst("./*", &fileinfo);
		do {
			filenumber++;
			strcpy(tmp, fileinfo.name);
			if (strstr(tmp, n2) != NULL)
			{
				strcpy(namelater, del(tmp, n2));
				sprintf(call, "cmd /c rename \"%s\" \"%s\"", fileinfo.name, namelater);
				printf("%s\n", call);
			}
			
		} while (_findnext(fHandle, &fileinfo) == 0);
		_findclose(fHandle);
	}
	else if (ac == 2 && !strcmp(av[1], "dd"))
	{
		char *n1 = av[1];
		printf("SURE TO RENAME? y or n:");
		char inp;
		//scanf("%c", &inp);
		cin >> inp;

		if (inp != 'y')
			goto skip;

		char* filename;
		struct _finddata_t fileinfo;
		intptr_t fHandle;
		int filenumber = 0;
		fHandle = _findfirst("./*", &fileinfo);
		do {
			filenumber++;
			strcpy(tmp, fileinfo.name);
			if (strstr(tmp, "dirOpened output of ") != NULL)
			{
				strcpy(namelater, del(tmp, "dirOpened output of "));
				sprintf(call, "cmd /c rename \"%s\" \"%s\"", fileinfo.name, namelater);
				printf("%s\n", call);
				system(call);
			}

		} while (_findnext(fHandle, &fileinfo) == 0);
		_findclose(fHandle);
	skip:
		int i;
	}
	else if (ac == 4 && !strcmp(av[1], "r"))
	{
		char *n1 = av[1];
		char *n2 = av[2];
		char *n3 = av[3];

		char* filename;
		struct _finddata_t fileinfo;
		intptr_t fHandle;
		int filenumber = 0;
		fHandle = _findfirst("./*", &fileinfo);
		do {
			filenumber++;
			strcpy(tmp, fileinfo.name);
			if (strstr(tmp, n2) != NULL)
			{
				strcpy(namelater, rep(tmp,n2,n3));
				sprintf(call, "cmd /c rename \"%s\" \"%s\"", fileinfo.name, namelater);
				printf("%s\n", call);
			}

		} while (_findnext(fHandle, &fileinfo) == 0);
		_findclose(fHandle);
	}
	else if (ac == 3 && !strcmp(av[1], "a"))
	{
		char *n1 = av[1];
		char *n2 = av[2];

		char* filename;
		struct _finddata_t fileinfo;
		intptr_t fHandle;
		int filenumber = 0;
		fHandle = _findfirst("./*", &fileinfo);
		do {
			filenumber++;
			strcpy(tmp, fileinfo.name);
			if (1)
			{
				strcpy(namelater, add(tmp,n2));
				sprintf(call, "cmd /c rename \"%s\" \"%s\"", fileinfo.name, namelater);
				printf("%s\n", call);
			}

		} while (_findnext(fHandle, &fileinfo) == 0);
		_findclose(fHandle);
	}
	else if (ac == 4 && !strcmp(av[1], "a"))
	{
		char *n1 = av[1];
		int place = atoi(av[2]);
		char *n2 = av[3];

		char* filename;
		struct _finddata_t fileinfo;
		intptr_t fHandle;
		int filenumber = 0;
		fHandle = _findfirst("./*", &fileinfo);
		do {
			filenumber++;
			strcpy(tmp, fileinfo.name);
			if (1)
			{
				strcpy(namelater, addn(tmp, n2,place));
				sprintf(call, "cmd /c rename \"%s\" \"%s\"", fileinfo.name, namelater);
				printf("%s\n", call);
			}

		} while (_findnext(fHandle, &fileinfo) == 0);
		_findclose(fHandle);
	}
	else
	{
		char *n1 = av[1];
		char *n2 = av[2];
		sprintf(call, "cmd /c rename \"%s\" \"%s\"", n1, n2);
		system(call);
	}
}
