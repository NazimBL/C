#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


int main()
{
    limitC();
    floatC();

    return 0;
}

void limitC(){

   printf("\tMinimum \tMaximum \tSize in bytes\n\n");
   printf("Char \t%d\t\t%d   \t\t%d\n\n",SCHAR_MIN,SCHAR_MAX,sizeof(char));
   printf("UChar \t0\t\t%d   \t\t%d\n\n",UCHAR_MAX,sizeof(char));


   printf("Short \t%d\t\t%d   \t%d\n\n",SHRT_MIN,SHRT_MAX,sizeof(short));
   printf("UShort \t0\t\t%d   \t%d\n\n",USHRT_MAX,sizeof(short));
   printf("int \t%d\t%d \t%d\n\n",INT_MIN,INT_MAX,sizeof(int));
   printf("Uint \t0\t\t%lld \t%d\n\n",UINT_MAX,sizeof(int));
   printf("Long \t%ld\t%ld \t%d\n\n",LONG_MIN,LONG_MAX,sizeof(long));

   printf("LLong \t%lld\t%lld \t%d\n\n",LONG_LONG_MIN,LONG_LONG_MAX,sizeof(long long));

}


void floatC(){

    printf("\tDigits\tMinExpo\tMaxExpo\tSize\n\n");
    printf("Float\t%d\t%d\t%d\t%d\n\n",FLT_MANT_DIG,FLT_MIN_EXP,FLT_MAX_EXP,sizeof(float));
    printf("Double\t%d\t%d\t%d\t%d\n\n",DBL_MANT_DIG,DBL_MIN_EXP,DBL_MAX_EXP,sizeof(double));
    printf("LDouble\t%ld\t%ld\t%ld\t%ld\n\n",LDBL_MANT_DIG,LDBL_MIN_EXP,LDBL_MAX_EXP,sizeof(long double));

}
