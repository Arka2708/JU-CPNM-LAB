#include <stdio.h>

int main()
{ 
  printf("1 " );
  for (int i=11; i<=500 ; i++) 
  {
    int n =i, r , s = 0;
    while(n>0)
    {
        r = n % 10;
        s = s  + r*r*r;
        n = n / 10;
    }
    if( i == s )
        {
            printf("%d ", s);
        } 
  }
   return 0; 
}