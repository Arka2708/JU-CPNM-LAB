#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char number[15] ;
}numbers[4];

struct phonebook{
    char name[30];
    numbers number[5];
} contact[100];

int counter = 0;
void add_contact() {
    int n,m;
    printf("\nEnter the no. of contacts to be saved: ");
    scanf("%d", &n);
    printf("\nHow many numberS do you wanna save under this name(MAX 4): ");
    scanf("%d", &m);
    for(int i=1 ; i<=n; i++){
      printf("\n\t\t********Information of Contact %d********", i);
      printf("\nEnter Name: "); scanf("%s", contact[i-1].name);
      counter++;
      for(int j=1; j<=m; j++) {
         printf("\nEnter Phone No. %d: ", j);scanf("%s", contact[i-1].number[j-1]);
       }
    }
   
   FILE *f;
        f = fopen("contact_list.txt", "a+");
        for(int i = 1; i<=n; i++){
        fprintf(f, "Name : %s\n", contact[i-1].name);
            for(int j=1; j<=m; j++)
            {
            fprintf(f, "Phone number %d: %s\n", j,contact[i-1].number[j-1]);
            }
            fprintf(f, "\n");
        }
        printf("\n\n\t\t**********Contact Added to Telephone Directory Successfully**********\n\n");
        fclose(f);
}

void delete_contact() {
    char name[100];
    int a = 1, b;
    printf("Enter contact Name : ");
    scanf("%s", name);
    FILE *file;
    file = fopen("contact_list.txt", "r");

    char arr[100] = "";
    unsigned int count = 0;
    char ch = fgetc(file);
    int flag = 0;
    while (ch != EOF){
        arr[count] = ch;
        ch = fgetc(file);
        if(ch == ' ' || ch == '\n'){
            a++;
            if(strcmp(arr, name) == 0) {
                flag = 1;
                break; 
            }
            int n = strlen(arr);
            for(int i = 0; i< n+1; i++)
                arr[i] = '\0';
            count = 0;
            ch = fgetc(file);
            continue;
        }
        count++; 
        a++;
    }
    if(!flag) printf("There is no contact saved with name %s\n", name);
    else{
        b = a;
        a = a - strlen(name) - 1;
        printf("%s", name);
        while (ch != '\n' && ch != EOF){
        // printf("%c", ch);//
            ch = fgetc(file);
            b++;
        }
        printf("\n");
    }
    printf("Removed from position %d to %d\n", a, b);
    fclose(file);
    if(flag){
        file = fopen("copy_contacts.txt", "r");
        FILE *f;
            f = fopen("contact_list.txt", "w");
            char ch = fgetc(file);
            int index = 1;
            while (ch != EOF && index < a){
                printf("%c", ch);
                fprintf(f, "%c", ch);
                //printf("%d -> %c\n", index, ch);//
                ch = fgetc(file);
                index++;
            }
            while (ch != EOF && index < b){
                ch = fgetc(file);
                index++;
            }
            while (ch != EOF){
                printf("%c", ch);
                fprintf(f, "%c", ch);
                ch = fgetc(file);
            }
        }
}

void search_contact(){
    char name[100] = "";
    printf("Enter contact Name : ");
    scanf("%s", name);
    FILE *file;
    file = fopen("contact_list.txt", "r");
    char arr[100] = "";
    unsigned int count = 0;
    char ch = fgetc(file);
    int flag = 0;
    while (ch != EOF)
    {
        arr[count] = ch;
        ch = fgetc(file);
        if(ch == ' ' || ch == '\n'){
            if(strcmp(arr, name) == 0){
                flag = 1;
                break;
            }
            int n = strlen(arr);
            for(int i = 0; i< n+1; i++){
                arr[i] = '\0';
            }
            count = 0;
            ch = fgetc(file);
            continue;
        }
        count++;
    }
     if(!flag) printf("There is no contact saved with name %s\n", name);
    else{
        printf("%s", name);
        while (ch != '\n' && ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(file);
        }
        printf("\n");
    }
}
void browse_contact(){
     printf("All contacts -----> \n");
     FILE *f;
     f = fopen("contact_list.txt", "r");
     char ch = fgetc(f);
     while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(f);
     }
     fclose(f);
}

int main() {
    
    printf("\t\t****************Telephone Directory application**************** \n");
    printf("\tPress 1 for - Add Contact\n");
    printf("\tPress 2 for - Delete Contact\n");
    printf("\tPress 3 for - Search Contact\n");
    printf("\tPress 4 for - Browse Contacts\n");
    int choice;
    printf("\n\tEnter your choice = ");
    scanf("%d", &choice);
    if(choice == 1) add_contact();
    else if(choice == 2) delete_contact();
    else if(choice == 3) search_contact();
    else if(choice == 4) browse_contact();
    else printf("Please run the program again...\n");
    return 0;
}
