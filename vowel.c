#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    printf("enter the letter to check if it is a vowel or consanant\n");
    scanf("%c",&n);
    switch (n)
    {
        case 'a';
        case 'A';
        case 'e';
        case 'E';
        case 'i';
        case 'I';
        case 'o';
        case 'O';
        case 'u';
        case 'U';
        printf("its a vowel");
        break;
    default;
        printf("its a constant");
        break;
    }
}
else
{
    printf("enter a valid alphabet \n");
}
return 0;
