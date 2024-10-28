#include<stdio.h>
#include<string.h>
#define MAX 100
struct Contact
{
 char name[50];
 char phone[15];
 char email[50];
};
void displaycontact(struct Contact contacts)
{
 printf("NAME: %s\n",contacts.name);
 printf("Phone: %s\n",contacts.phone);
 printf("Email: %s\n",contacts.email);
}


int main()
{
 struct Contact contacts[MAX];
 int num=0;
 int choice,i;
 
 while(1)
 {
 printf("\n\nContact Managment system");
 printf("\n__________________________\n\n");
 printf("1.Add Contact\n2.View contact\n3.EXIT \nEnter your choice: ");
 scanf("%d",&choice);

  switch(choice)
  {
   case 1:
   if(num<MAX)
   {
    struct Contact newContact;
    printf("Enter Name: ");
    scanf(" %[^\n]", newContact.name);
    printf("Enter Phone: ");
    scanf(" %[^\n]", newContact.phone);
    printf("Enter Email:");
    scanf(" %[^\n]", newContact.email);
    printf("Contact added successfully\n\n");
    contacts[num]=newContact;
    num++;
   }
   else
   {
    printf("\nContact list Ful !!l\n");
   }
    break;
   case 2:
   if(num==0)
   {
   printf("Contact list empty");
  }
   else
   {
    printf("CONCTCT LIST\n------------------\n");
     for(i=0;i<num;i++)
      {
       printf("Contact %d\n",i+1);
       displaycontact(contacts[i]);
      }
      break;
   }

   case 3:
    printf("\nExinted From the contact management system\n");
    return 0;

  default:
   printf("Invalid choice\n");
 }
}
 return 0;
}
