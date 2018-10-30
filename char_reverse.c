#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ara[20];
	printf("Enter string:\n");
//	gets(ara);
	scanf("%[^\n]", ara);
	unsigned len;
	for(len = 0; ara[len]!=NULL; len++);// len++;
	printf("%d\n", len);
	for (size_t i = 0; i < len / 2; i++) {
		ara[i] = ara[i] ^ ara[len-1-i];
		ara[len-1-i] = ara[i] ^ ara[len-1-i];
		ara[i] = ara[i] ^ ara[len-1-i];
	}
	printf("Reversed string:\n");
	puts(ara);

	return 0;
}
