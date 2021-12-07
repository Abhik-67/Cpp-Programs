#include<stdio.h>
#include<string.h>
int main()
{
int i,len;
char str[100];
scanf("%[^\n]s", str);
len=strlen(str);
for(i=0;i<len;i++){
printf("%c",str[i]);
}
printf("\n");
for (i=len-1;i>=0;i--) {
if(str[i]==' '){
str[i]='\0';
printf("%s ",&str[i]+1);
}
}
printf("%s",str);
return 0;
}

/*
Input: one two three
Output: one two three
        three two one

Input: I love my country india
Output:I love my country india
       india country my love I.
*/               
