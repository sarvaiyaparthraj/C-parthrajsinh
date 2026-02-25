#include <stdio.h>   // Input અને Output માટેની standard library

int main()          // Program અહીંથી શરૂ થાય છે
{
    int i, j;       // બે integer variable declare કર્યા (i = row માટે, j = column માટે)

    // બહારનો loop → 1 થી 5 સુધી row બનાવે છે
    for(i = 1; i <= 5; i++) 
    {
        // અંદરનો loop → j ની value 1 થી i સુધી ચાલે છે
        for(j = 1; j <= i; j++)  
        {
            printf("%d", j);  // 1 થી i સુધી number print કરે છે
        }
        
        printf("\n");  // દરેક row પછી next line માં જાય છે
    }

    return 0;   // Program સફળતાપૂર્વક પૂર્ણ થાય છે
}


// output
// 1
// 12
// 123
// 1234
// 12345