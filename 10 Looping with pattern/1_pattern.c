#include<stdio.h>   // Input અને Output માટેની standard library

int main()          // Program અહીંથી શરૂ થાય છે
{
    int i, j;       // બે integer variable declare કર્યા (i = row માટે, j = column માટે)

    // બહારનો loop → કેટલા row print કરવા તે નક્કી કરે
    for(i = 1; i <= 5; i++)   
    {
        // અંદરનો loop → દરેક row માં 1 થી 5 number print કરે
        for(j = 1; j <= 5; j++)  
        {
            printf("%d", j);  // j ની value print થશે (1 2 3 4 5)
        }

        printf("\n");  // એક row પૂરી થયા પછી next line માં જશે
    }

    return 0;   // Program સફળતાપૂર્વક બંધ થાય છે
}


// output

// 12345
// 12345
// 12345
// 12345
// 12345