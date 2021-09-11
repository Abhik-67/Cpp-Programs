//calculation of sgpa of semester 

#include<stdio.h>
#include<string.h> 
int main() {
int num,i,sem;
printf("which sem result do you want:");
scanf("%d",&sem);
printf("\nEnter number of subjects:");
scanf("%d",&num);
const int size = num;
int marks[size];
float credit[size], creditPoints[size], points[size], sumcredit=0, sumcreditPoint=0, sgpa=0;
char subject[size][50]; 
char grade[size], code [size][10];
for(i=0; i<num; i++){
fflush(stdin);
 printf("\nEnter the name of subject %d:" ,i+1);
 gets(subject[1]);
 printf("Enter the code of %s subject: ", subject[i]);
 gets (code[i]); printf("Enter the marks of 2s subject: ",subject[i]);
 scanf("%d",&marks[i]);
 printf("Enter the credit of As subject: ", subject[i]);
 scanf("%f",&credit[i]);
}
 for(i=0; i<num; i++){

  if(marks[i]<=100 && marks[i]>=90){ 

  grade [i]='0';
  points[i] = 10;
  }
  else if(marks[i]<90 && marks [1]>=80){

  grade[i]='E';
  points[i] = 9;

  }
  else if(marks[1]<80 && marks[1]>=70){

   grade[i]='A';
   points[i] = 8;

   } 
   else if(marks[i]<70 && marks[1]>=60) {

   grade [i]='B';
   points[i] = 7;

   }

   else if(marks[i]<60 && marks[i]>-50){

   grade [i]='C'; 
   points[i] = 6;

   }

   else if (marks[i]<50 && marks[i]>=0){

   grade[i]='0'; 
   points[i] = 5;

   } 
   else{

   grade[i]='F'; 
   points[i] = 2;

   }

creditPoints[i] = (credit[i] * points[i]);

sumcredit += credit[i]; 
sumcreditPoint += creditPoints[i];
}

char print[][50] = {"Subject code", "subject offered", "Grade", "Points", "Credit","Credit Points"};
printf("\n ||%125| %40s| %6s| %6s| %15s|| \n",print[0], print[1],print[2], print[3],print[4],print[5]);

for(i=0; i<num; i++){

printf(" ||%125| %40s| %6c| %6.1f| %6s.1f| %15.1f|| \n",code[1], subject[1], grade[1], points[1], credit[1], creditPoints[1]);
}

printf("\n\YOUR SGPA OF SEM %d is: %.2f",sem, sgpa);

printf("\n \t\t\t\t\t Total: \t\t\t %.1f  \t%.1f",sumcredit, sumcreditPoint);

sgpa= sumcreditPoint/sumcredit;

return 0;
}
