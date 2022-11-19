#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int marks;
}subject[6];

struct student{
    int roll;
    char name[25];
    char dept[25];
    char course[25];
    int joining_year;
    subject sub;
    float avg;
}s[100];
void display_by_year(struct student s[], int n, int year){
    printf("\n*********Students by year*********\n");
    int count = 0;
    for(int i = 0; i<n; i++){
        if(s[i].joining_year == year){
            printf("%s\n", s[i].name);
            count++;
        }
    }
    if(!count) 
        printf("No student in our database joined in %d\n", year);
}
void display_by_roll(struct student s[], int n, int roll){
    printf("\n*********Students by roll*********\n");
    int count = 0;
    for(int i = 0; i<n; i++) {
        if(s[i].roll == roll){
            printf("%s\n", s[i].name);
            count++;
        }
    }
    if(!count) 
        printf("No student in our database with roll no. %d\n", roll);
}
void display_sorted_average_marks(struct student s[], int n){
    printf("\nSorting by average -----> \n");
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if( s[i].avg > s[j].avg ){ 
                struct student temp; 
                temp = s[i];
                s[i] = s[j]; 
                s[j] = temp; 
            }
        } //sorted the student array wrt data.avg
    }
    for(int i = 0; i<n; i++){
        printf("%d. %s : %s - avg : %.2f\n", i+1, s[i].name,s[i].dept, s[i].avg);
    }
}
int main(){
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    for(int i=1 ; i<=n; i++) {
      printf("\n\t\t********Information of Student %d********", i);
      printf("\nEnter Name: ");scanf("%s", s[i-1].name);
      printf("\nEnter Roll No.: ");scanf("%d", &s[i-1].roll);
      printf("\nEnter name of the department: ");scanf("%s", &s[i-1].dept);
      printf("\nEnter name of the course: ");scanf("%s", &s[i-1].course);
      printf("\nEnter joining year: ");scanf("%d", &s[i-1].joining_year);
      
        float sum = 0 , avg;
        for(int j=1 ; j<=6; j++){
         printf("\nEnter marks of Subject %d : ", j);
         scanf("%d", &s[i-1].sub[j-1].marks);
         sum+= s[i-1].sub[j-1].marks;
        }
        avg = sum/ 6.0;
        s[i-1].avg= avg;
    }
    FILE *f;
    f = fopen("student_data.txt", "w");
    for(int i = 0; i<n; i++){
    fprintf(f, "Student roll no. : %d\n", s[i].roll);
    fprintf(f, "Student name : %s\n", s[i].name);
    fprintf(f, "Student dept : %s\n", s[i].dept);
    fprintf(f, "Student course : %s\n", s[i].course);
    fprintf(f, "Student joiningYear : %d\n", s[i].joining_year);
    fprintf(f, "Marks of Student : [%d, %d, %d, %d, %d, %d]\n" ,  s[i].sub[0].marks, 
    s[i].sub[1].marks , s[i].sub[2].marks, s[i].sub[3].marks, s[i].sub[4].marks, 
    s[i].sub[5].marks);
    fprintf(f, "Average : %.2f\n", s[i].avg);
    fprintf(f, "\n");
        }
    fclose(f);
    int year;
    printf("Enter year to get its corresponding students : "); scanf("%d",&year);
    display_by_year(s, n, year);
    int roll;
    printf("Enter roll number to get its corresponding student : "); scanf("%d",&roll);
    display_by_roll(s, n, roll);
    display_sorted_average_marks(s, n);
    return 0;
}
