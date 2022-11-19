#include<stdio.h>
int main()
{
int i, j, k, m, a = 1,b = 0;
for(i = 5;i > 0;i--)
{
   for(j = i;j > 0;j--)
   {
      printf("+");
    }
   for(k = 1;k < a;k++)
    {
      printf(" ");
    }
      a = a + 2;
    for(m = i;m > 0;m--)
   {
      printf("+");
    }
     printf("\n");
}
    for(i = 1;i <= 4;i++)
   {
       for(j = 0;j <= i;j++)
       {
          printf("+");
        }
       for(k = 6;k > b;k--)
       {
          printf(" ");
        }
         b = b + 2;
        for(m = 0;m <= i;m++)
       {
          printf("+");
        }
          printf("\n");
    }
return 0;
}