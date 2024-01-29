#include <stdio.h>
#include <stdlib.h>
void create_account(){
    char name[20],email[20],create_account[20],create_password[20];
    printf("\t******************************************\n");
    printf("\t\tCreate your Account here\n");
    printf("\t******************************************\n\n");
    printf("Enter a name : ");
    fgets(name,sizeof(name),stdin);
     int age;
     printf("Enter a email : ");
    fgets(email,sizeof(email),stdin);
    printf("Create a account number : ");
    fgets(create_account,sizeof(create_account),stdin);
       printf("Enter your age: ");
    scanf("%d\n", &age);
     printf("Create a password : ");
    fgets(create_password,sizeof(create_password),stdin);
    FILE *detail;
    detail = fopen("Details.txt","w");
    if (detail == NULL){
        printf("Error opening file!!\n");
    }
    fprintf(detail,"Name : %s",name);
    fprintf(detail,"Email : %s",email);
    fprintf(detail,"Account Number : %s",create_account);
    fprintf(detail,"Password : %s",create_password);
    // fprintf(detail,"age : %d",age);
    fclose(detail);
    system("clear");
}
int main(){
create_account();
    return 0;
}
