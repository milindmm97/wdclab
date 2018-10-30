the decrypted message to plain text.
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define MAX 1000
 
int main()
{
	{
int s, pi, ci;
char plain[MAX], cipher[MAX];

printf("*** Encryption & decryption using substitution cipher ***\n\n");
printf("Enter the plain text:\n");
gets(plain);
while(1)
{
printf("\nKey (number of shifts per character) for encryption : ");
scanf("%d", &s);
if(s < 1 || s > 25)
printf("Bad input! Enter a value between 1 and 25.");
else
break;
}
printf("\nAfter removing non alphabetical characters and capitalizing:\n");
for(ci = 0, pi = 0; plain[pi] != '\0'; pi++)
if(isalpha(plain[pi]))
{
putchar(toupper(plain[pi]));

cipher[ci++] = ((toupper(plain[pi]) - 'A') + s% 26) % 26 + 'A';
}
cipher[ci] = '\0';
printf("\n\nAfter encryption:\n%s\n", cipher);
while(1)
{
printf("\nKey for decryption : ");
scanf("%d", &s);
if(s< 1 || s> 25)
printf("Bad input! Enter a value between 1 and 25.");
else
break;
}
for(pi = 0, ci = 0; cipher[ci] != '\0'; ci++)
plain[pi++] = ((cipher[ci] - 'A') + (26 - s)) % 26 + 'A';
plain[pi] = '\0';
printf("\nAfter decryption:\n%s", plain);
//return 0;
	}
getch();

}

