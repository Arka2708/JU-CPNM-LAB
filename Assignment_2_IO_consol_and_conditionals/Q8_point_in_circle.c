#include<stdio.h>
#include<math.h>
int main()
{
    int x=0,y=0,p,q,radius=5;
    printf("\nEnter the coordinates of the point :- ");
    scanf("%d %d", &p, &q);
    if (sqrt(pow((p - x), 2)+pow((q - y), 2)) < radius)
    {
        printf("The point lies inside the circle");
    }
    else if (sqrt(pow((p - x), 2)+pow((q - y), 2)) == radius)
    {
       printf("The point lies on the circle.\n");
    }
    else 
    {
       printf("The point lies outside the circle.\n \n");
    }
    
    return 0;
} 