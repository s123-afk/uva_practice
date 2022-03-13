#include<iostream>
#include<string>
#include<ctype.h>
#include<string.h> 
using namespace std;

int main() {
	string key="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char str[10000];
	char arr[10000];
	cin.get(str,10000);	
	int stl=strlen(str);
	
	int len = strlen(str);
	for(int i = 0; i < len ; ++i)
	{ 	 
    	if(str[i] == ' ')
    	   	arr[i] = ' ';
   		else{
       		str[i] = tolower(str[i]); //??????
       		char k = str[i];
       		int pos = key.find(k);  //?????????????
       		arr[i] = key[pos-2];
	   	}
	}
	for(int i = 0; i < len ; ++i)
	{ 	 
    	cout<<arr[i];
	}
	return 0;
}	
