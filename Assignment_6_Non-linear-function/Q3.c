#include<stdio.h>
#include<math.h>
#define EPSILON 0.00001

float f(float x)
{
    return x*x*x - 2.5*x*x - 2.46*x + 3.96;
}

float differentiate(float x)
{
    return 3*x*x - 5*x - 2.46;
}

float quadroot1()
{
	float s;
	s = (5+sqrt(25+(4*3*2.46)))/6;
	return s;
}
float quadroot2()
{
	float s;
	s = (5-sqrt(25+(4*3*2.46)))/6;
	return s;
}

float newton(float x0)
{
    float x1,y0, y_0;
    for( int i=1 ; i<=10000 ;i++)
    {
        y_0 = differentiate(x0);
        y0 = f(x0);
        x1 = x0 - (y0/y_0);
        if( fabs(y0/y_0) <= EPSILON)
        {

            return x0;
        }
        x0 = x1; 
    }
}

int main()
{
    printf("The disjoint subintervals are : \n");
	printf("[-4,%.3f),(%.3f,%.3f),(%.3f,4]",quadroot2(),quadroot2(),quadroot1(),quadroot1());
	printf("\nRoots using newton rhapson method are : \n");
	printf("%.3f",newton((-4+quadroot2())/2));
	printf("\n%.3f",newton((quadroot2()+quadroot1())/2));
	printf("\n%.3f",newton((quadroot1()+4)/2));
    return 0;
}