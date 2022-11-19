#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int marks;
}subject[5];

struct student
{
    int roll;
    char name[25];
    subject sub;
}s[10];

int main()
{
 int n;
 printf("Enter the no. of students: ");
 scanf("%d", &n);

 int max, second_max, max_index, second_max_index;
 for(int i=1 ; i<=n; i++)
 {
    printf("\n\t\t********Information of Student %d********", i);
    printf("\nEnter Name: ");
    scanf("%s", s[i-1].name);
    printf("\nEnter Roll No.: ");
    scanf("%d", &s[i-1].roll);
    for(int j=1 ; j<=5; j++)
    {
        printf("\nEnter marks of Subject %d : ", j);
        scanf("%d", &s[i-1].sub[j-1].marks);
    }
 }

 for (int j = 0; j < 5; j++)
 {
    max_index=0, second_max_index=0,max =0,second_max = 0;
    for (int i = 0; i < n; i++)
    {
        if(max < s[i].sub[j].marks)
       {
            second_max = max;
            max = s[i].sub[j].marks;
            second_max_index = max_index; 
            max_index = i;
        }
        else if(s[i].sub[j].marks > second_max && s[i].sub[j].marks < max)
        {
            second_max = s[i].sub[j].marks;
            second_max_index = i;
        }
    }
    printf("\n\n\nHighest marks in Subject %d = %d", j+1, max);
    printf("\nName = %s ; Roll-no. = %d", s[max_index].name, s[max_index].roll);
    printf("\nSecond Highest marks in Subject %d = %d", j+1, second_max);
    printf("\nName = %s ; Roll-no. = %d", s[second_max_index].name, s[second_max_index].roll);
}
    return 0;
}