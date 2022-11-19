#include<stdio.h>
#include<math.h>

double factorial(int);  
double calculate(float);  

int main()
{ 
    int i;
    const float pi = 3.14159 ;
    float x, r;
    double val;
    do{
    printf("\n\n\t\t********Choose the unit of the angle********\n");
    printf("For giving the angle in degree = 1\n");
    printf("For giving the angle in radian = 2\n");
    printf("For giving the angle in grade = 3\n");
    printf("EXIT = 4\n");
    printf("Enter your option = ");
    scanf("%d", &i);
    if(i!=4)
    {
    printf("\nEnter the angle = ");
    scanf("%f", &x);
    }
    switch (i)
    {
        case 1:  r = (x * pi) / 180.0;
                 val=calculate(r);
                 printf( "\nsin of this angle = %6.4lf", val );
                 break;
        
        case 2:  r = x ;
                 val=calculate(r);
                 printf( "\nsin of this angle = %6.4lf", val);
                 break;
       
        case 3:  r = (x * pi) / 200.0;
                 val=calculate(r);
                 printf( "\nsin of this angle = %6.4lf", val );
                 break;
                
        case 4 : printf("EXIT!!!!!\n");
                 break;

        default: printf("\nOops!!! Enter a valid option ");
                 break;
    }
    } while(i!=4);
   return 0;
}

double calculate(float r)
{
   int count, n = 1, sign = 1;  
   float res = 0.0;
  
    for(count = 1; n < 100; count += 2)  
    {  
        res  +=  sign * ( pow(r, count) /  factorial(count) );  
        n    +=  1;  
        sign *= -1;  
    }
    return (res);  
}

double factorial(int count)
{ 
  double s = 1.00;
  for(int i=1 ; i<=count ; i++)
   {
     s = s * i;
   }
   return (s); 
}