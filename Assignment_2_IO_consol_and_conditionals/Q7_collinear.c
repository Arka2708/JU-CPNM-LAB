#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("\nEnter the coordinates of the first point : ");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter the coordinates of the second point : ");
    scanf("%d %d", &x2, &y2);
    printf("\nEnter the coordinates of the third point : ");
    scanf("%d %d", &x3, &y3);
    int a = x1 * (y2 - y3) +  
            x2 * (y3 - y1) +  
            x3 * (y1 - y2); 
  
    if (a == 0) 
    {
        printf("\nThe three points are collinear. \n \n");
    }
    else
    {
       printf("\nThe three points are non-collinear. \n \n");
    }
    
    return 0;
} 