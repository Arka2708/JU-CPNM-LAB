#include <stdio.h>
#include <string.h>
#include <math.h>

void decimal_others(int num, int base)
{
        int rem = num%base;
        if(num==0)
                return;
        decimal_others(num/base, base);
        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}
int others_decimal(int num, int base)
{   
    
      int decimal = 0, i = 0, rem;
      while (num != 0)
       {
          rem = num % 10;
          num /= 10;
          decimal += rem * pow(base, i);
          ++i;
        }
       return decimal;
    
}
int hexadecimal_decimal(char *hex) 
{
    int p = 0; 
    int decimal = 0;
    int r, i;
    for(i = strlen(hex) - 1 ; i >= 0 ; --i)
    {
      if(hex[i]>='0'&&hex[i]<='9')
      {
            r = hex[i] - '0';
      }
      else
      {
            r = hex[i] - 'A' + 10;
      }
      decimal = decimal + r * pow(16 , p);
      ++p;
    }
    return decimal;
}


int main() {
    int input, num , base, decimal;
    printf("\n\t\t************Select the input format************: \n\n");
    printf("For Binary input enter 1 \n");
    printf("For Octal input enter 2 \n");
    printf("For Decimal input enter 3 \n");
    printf("For Hexadecimal input enter 4 \n");
    printf("\nEnter your choice: ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
       printf("\n\t\t************Select how to convert************: \n\n");
       printf("For Octal output enter 8 \n");
       printf("For Decimal output enter 10 \n");
       printf("For Hexadecimal output enter 16 \n");
       printf("\nEnter your choice: ");
       scanf("%d", &base); 
       printf("\nEnter the number: ");
       scanf("%d", &num); 
       switch (base)
       {
        case 8: 
           decimal = others_decimal(num, 2);
           printf("Octal of this number is = " );
           decimal_others(decimal, base);
           break;
        case 10:
           decimal = others_decimal(num, 2);
           printf("Decimal of this number is = %d", decimal);
           break;
        case 16:
           decimal = others_decimal(num, 2);
           printf("Hexadecimal of this number is = " );
           decimal_others(decimal, base);
           break;
        default:
           printf("Enter a valid choice!!!!!");
           break;
       }
       break;
   
    case 2:
       printf("\n\t\t************Select how to convert************: \n\n");
       printf("For Binary output enter 2 \n");
       printf("For Decimal output enter 10 \n");
       printf("For Hexadecimal output enter 16 \n");
       printf("\nEnter your choice: ");
       scanf("%d", &base); 
       printf("\nEnter the number: ");
       scanf("%d", &num); 
       switch (base)
       {
        case 2: 
           decimal = others_decimal(num, 8);
           printf("Binary of this number is = " );
           decimal_others(decimal, base);
           break;
        case 10:
           decimal = others_decimal(num, 8);
           printf("Decimal of this number is = %d", decimal);
           break;
        case 16:
           decimal = others_decimal(num, 8);
           printf("Hexadecimal of this number is = " );
           decimal_others(decimal, base);
           break;
        default:
           printf("Enter a valid choice!!!!!");
           break;
       }    
     break;
   
    case 3:
       printf("\n\t\t************Select how to convert************: \n\n");
       printf("For binary output enter 2 \n");
       printf("For octal output enter 8 \n");
       printf("For Hexadecimal output enter 16 \n");
       printf("\nEnter your choice: ");
       scanf("%d", &base); 
       printf("\nEnter the number: ");
       scanf("%d", &num); 
       switch (base)
       {
        case 2: 
           printf("Binary of this number is = " );
           decimal_others(num, base);
           break;
        case 8:
           printf("Octal of this number is = " );
           decimal_others(num, base);
           break;
        case 16:
           printf("\nEnter the number: ");
           scanf("%d", &num); 
           printf("Hexadecimal of this number is = " );
           decimal_others(num, base);
           break;
        default:
           printf("Enter a valid choice!!!!!");
           break;
       }
       break;
    
    case 4:
       printf("\n\t\t************Select how to convert************: \n\n");
       printf("For Binary output enter 2 \n");
       printf("For Decimal output enter 10 \n");
       printf("For Octal output enter 8 \n");
       printf("\nEnter your choice: ");
       scanf("%d", &base); 
       char hex[10];
       printf("\nEnter the number: ");
       scanf("%s", &hex); 
       switch (base)
       {
        case 2: 
           decimal = hexadecimal_decimal(hex);
           printf("Binary of this number is = " );
           decimal_others(decimal, base);
           break;
        case 10:
           decimal = hexadecimal_decimal(hex);
           printf("Decimal of this number is = %d", decimal);
           break;
        case 8:
           decimal = hexadecimal_decimal(hex);
           printf("Hexadecimal of this number is = " );
           decimal_others(decimal, base);
           break;
        default:
           printf("Enter a valid choice!!!!!");
           break;
       }    
     break;
    
    default:
        printf("Enter a valid choice!!!!!");
        break;
    }
    return 0;
}