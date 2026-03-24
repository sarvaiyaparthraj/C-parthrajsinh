// TAKE NOTHING, RETURN SOMETHING

#include<stdio.h>

int sum()
{
    int a,b;
    
      printf("enter a name ");
      scanf("%d",&a);

    printf("enter a id ");
    scanf("%d",&b);

    return a+b;

}


int main()
{
  int result;
  result = sum ();
  printf("sum = %d", result);

  return 0;
}