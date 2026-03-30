

#include <stdio.h>


int callByValue(int num)

{

    num = 100;
}

int main()

{

    int numAgreement = 19;


    int result = callByValue( numAgreement);


    
    printf("num argument %d\n",  numAgreement);



    return 0;
}