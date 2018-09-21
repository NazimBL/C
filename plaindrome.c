#include <stdio.h>
#include <stdlib.h>

int main()
{




int i=0,j;


char s[10]="MOM";

j=strlen(s)-1;

if(pal(s,i,j)==1)printf("palindrome");
else printf("not palindrome");

    return 0;
}

int pal(char s[10],int i,int j)
{
   if(strlen(s)<2) return 1;

   if(i<=j)
        {
            if(s[i]==s[j])
            {
                if(pal(s,i+1,j-1))return 1;

                else return 0;
            }
        }
}
