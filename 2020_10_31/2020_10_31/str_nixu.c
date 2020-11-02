#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
//×Ö·û´®ÄæÐò£¡
void Reverse_String(char *string) {
	if (*string == '\0') {
		return 0;
	}
	Reverse_String(string + 1);
	printf("%c ", *string);
}
int main() {
	char *str = "abcde";
	Reverse_String(str);
	system("pause");
	return 0;
}
