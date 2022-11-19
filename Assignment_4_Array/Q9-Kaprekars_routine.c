#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    int n,m,digits[4],i,j,diff,prev=0,count=0;
    printf("Enter a 4 digit number : ");
    scanf("%d",&n); 
    m=n;
    ptr=fopen("output.dat","w");
    do
    {
        int acc=0,dsc=0;  
        prev=m;
        for(i=0;i<4;i++)
        {
            digits[i]=m%10;
            m=m/10;
        }

        
        for(i=0;i<4;i++)
        {
        for(j=0;j<(3-i);j++)
        {
            if(digits[j]>digits[j+1])
            {
             int temp;
             temp=digits[j];
             digits[j]=digits[j+1];
             digits[j+1]=temp;
            }
        }
        }
        for(int i=0; i<4; i++) 
            acc= acc*10 + digits[i];
        for(int i=3; i>=0; i--) 
            dsc= dsc*10 + digits[i];
        diff=dsc-acc;
        fprintf(ptr, "\n\nInput : %d \nLarger number : %d \nSmaller number : %d \nDifference : %d\n",prev,dsc,acc,diff);
        m=diff;
        count++;
        printf("\nDifference in %dth cycle : %d",count,diff);
        if(diff==prev)
            {
            printf("\n\nKaprekar Constant is %d ", diff);
            printf("\n\nKaprekar Constant comes after %d routines",count-1);
            }

    }
    while(diff!=prev);
    
    fclose(ptr);
    return 0;
}