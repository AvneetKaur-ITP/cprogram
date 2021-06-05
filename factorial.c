#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("Enter a number:  ");
  scanf("\n%d",&num);
  int factorial=1;
  for(int i=1;i<=num;i++)
  {
      factorial*=i;
  }
  printf("%d\n",factorial);
  return 0;
}
