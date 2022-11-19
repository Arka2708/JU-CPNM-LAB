#include <stdio.h>
#include <string.h>
void function(char str[])
{
  char rev[1000];
  int count = 0;

  while (str[count] != '\0')
  {
    count++;
  }
  int j = count - 1;
  printf("\nLength of the string is %d\n", count);
  
  for (int i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("String After Reverse: %s\n\n", rev);
}
int main()
{
  char str[1000];
  printf("Enter the string : ");
  scanf("%[^\n]s", str);
  printf("\nString Before Reverse: %s", str);
  function(str);
}