#include <stdio.h>
#include <stdlib.h>
#define KEY 45

 void xorString(char *s){

 for(i=0;s[i]!='\0';i++){

       s[i]^=KEY;
   }
 }

int main()
{
    FILE *input,*output;
    char testContent[200];
    char string[80]="debut of file ";





    input=fopen("test.txt","r");
    output=fopen("output.txt","w");

while (fgets(testContent, 200,input)) {

printf("%s\n",testContent);
xorString(testContent);
fprintf(output,"%s",testContent);

    }



    fclose(input);
    fclose(output);




    return 0;
}
