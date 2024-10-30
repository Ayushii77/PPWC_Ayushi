#include<stdio.h>//used for printf and scanf fucntions
#include<stdlib.h>// for memory allocation
#include<string.h>


 struct student{
     char *name;//pointer to store the students name
     int rollno;
     float marks;
 };
  int main(){
    struct student s1;//to declare an instance of struct student
     struct student *p=&s1;//to create a pointer to the instance
    //for taking user input
    //for accessing the attribute of structure we will use dot operator
   p->name=(char*)malloc(30*sizeof(char));//used to allocate memory for 30 characters
   if(p->name==NULL){//to check if the allocation failed
   printf("Memory not allocated \n");
   exit(1);//if failed then exit
   }
   printf("Enter the name of the student:\n"); 
   fgets(p->name,30,stdin);//to read the name
   printf("Enter the roll number of the student:\n");
   scanf("%d",&p->rollno);//to read the roll no
   printf("Enter marks of the student:\n");
   scanf("%f",&p->marks);//to read the marks
   printf("Student details\n");
   printf("name:%s", p->name);//to print name
   printf("roll no:%d\n",p->rollno);//to print rollno
   printf("marks:%f\n"p->marks);//to print the marks
   free(p->name);//to free the allocated memory for the name
   return 0;//indicates that the program has successfully been completed
   }
