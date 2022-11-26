#include<stdio.h>
int main()
{
    char a[10]="hello";
    for( int i=0 ; a[i]!='\0' ; i++ )
    {
        switch (a[i])
        {
            case 'a':
                printf("%c Vowel\n",a[i]);
                break;
            case 'e':
                printf("%c Vowel\n",a[i]);
                break;
            case 'i':
                printf("%c Vowel\n",a[i]);
                break;
            case 'o':
                printf("%c Vowel\n",a[i]);
                break;
            case 'u':
                printf("%c Vowel\n",a[i]);
                break;
            case 'A':
                printf("%c Vowel\n",a[i]);
                break;
            case 'E':
                printf("%c Vowel\n",a[i]);
                break;
            case 'I':
                printf("%c Vowel\n",a[i]);
                break;
            case 'O':
                printf("%c Vowel\n",a[i]);
                break;
            case 'U':
                printf("%c Vowel\n",a[i]);
                break;
            default:
                printf("%c Consonant\n",a[i]);
        }
    }
}
