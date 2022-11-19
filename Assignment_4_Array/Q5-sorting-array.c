#include <stdio.h>

void sort(int array[], int size)
{
   for(int i = 0; i < size - 1; i++)
   {
      for(int j = 0; j < size - i - 1; j++)
      {
         if(array[j] > array[j+1])
         {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         }
      }
   }
}

void printArray(int array[], int size)
{
   printf("\nArranging the numbers in ascending order :");
   for(int i = 0; i < size; i++)
   {
      printf("%d ", array[i]);
   }
   printf("\n\n");
}

int main()
{ 
   int n;
   printf("Enter the length of array: ");
   scanf("%d", &n);
   int array[n];
   for(int i=0 ; i < n ; i++)
    {
        printf("\n A[%d]= ", i);
        scanf("%d", &array[i]);
    }
   int size = sizeof(array)/sizeof(array[0]);

   sort(array, size);
   printArray(array, size);
 
   return 0; 
}