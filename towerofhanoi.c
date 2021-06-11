#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=2;
   towerhanoi(n,'A','C','B');
   return 0;

}
void towerhanoi(int n, char source, char dest, char spare)
{
    if(n==1)
    {
        printf("disk 1 move from %c to %c\n", source,dest);
        return;
    }
    towerhanoi(n-1, source,spare,dest);
    printf("disk %d from %c to %c\n",n,source,dest);
    towerhanoi(n-1,spare,dest,source);
}
