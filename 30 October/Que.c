#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 struct student{
     char *name;
     int rollno;
     float marks;
      
 };
 
  int main(){
    struct student s1;
     struct student *p=&s1;
    
    //for taking user input
    //for accessing the attribute of structure we will use dot operator
   p->name=(char*)malloc(30*sizeof(char));
   if(p->name==NULL){
   printf("Memory not allocated \n");
   exit(1);
   }
   printf("Enter the name of the student:\n"); 
   fgets(p->name,30,stdin);
   printf("Enter the roll number of the student:\n");
   scanf("%d",&p->rollno);
   printf("Enter marks of the student:\n");
   scanf("%f",&p->marks);
   
   printf("Student details\n");
   printf("name:%s", p->name);
   printf("roll no:%d\n",p->rollno);
   printf("marks:%f\n"p->marks);
   
   free(p->name);
   return 0;
   }
