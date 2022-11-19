#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//parameters- coefficient(a,b,c,d) given_a given_b
float func(float num1){
    return (pow(num1,2));
}
void Trapezoidal(const char *argv[]){
    float n;
    printf("\nEnter the number of interval you want to divide the interval: ");
    scanf("%f",&n);
    char a = *argv[1];
    char b = *argv[2];
    float num2= b-'0'; 
    float num1 = a-'0';
    float test=num1;
    float h=(b-a)/(n);
    int N;
    N=n;
    float arr[N+1];
    for(int i=0;i<=N;i++){
        arr[i]=func(num1);
        num1=num1+h;
    }
    //integration formula
    float ans=(arr[0]+arr[N])/2;
    for(int i=1;i<N;i++){
        ans+=arr[i];
    }
    ans=h*ans;
    printf("\nThe integration of the given function from %f to %f is = %f\n",test,num2,ans);
}
void Simpson_1_3(char const *argv[]){
    float n;
    printf("\nEnter the number of interval you want to divide the interval: ");
    scanf("%f",&n);
    char a = *argv[1];
    char b = *argv[2];
    float num2= b-'0'; 
    float num1 = a-'0';
    float test=num1;
    float h=(b-a)/(n);
    int N;
    N=n;
    float arr[N+1];
    for(int i=0;i<=N;i++){
        arr[i]=func(num1);
        num1=num1+h;
    }
    //integration formula
    float ans=(arr[0]+arr[N]);
    for(int i=1;i<N;i++){
        if(i%2==1){
            ans=ans+4*arr[i];
        }
        else{
            ans=ans+2*arr[i];
        }
    }
    ans=(h/3)*ans;
    printf("\nThe integration of the given function from %f to %f is = %f\n",test,num2,ans);
}
int main(int agrc,char const *argv[]){
    printf("\nMenu driven program to find the integration of the given function\n");
    int x;
    do{
        printf("1.Trapezoidal\n");
        printf("2.Simpson 1/3\n");
        printf("3.Quit\n");
        printf("\nChoose the appropriate option: ");
        scanf("%d",&x);
        switch(x){
            case 1:Trapezoidal(argv);
                break;
            case 2:Simpson_1_3(argv);
                break;
            case 3:printf("\nEXIT POINT!!!!!");
            break;
            default:printf("\nInvalid input given\n");
        }
    }while(x!=3);
}//answer is directly proportional to the number of steps given