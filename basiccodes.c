#include<stdio.h>
#include<stdbool.h>

int main(){
bool a=false,bool b=true;
printf("false-%d;true-%d",a,b);
return 0;
}

/*output:
false-0;true-1

"\n" is used for new line.
\t horizontal tab space.
\v vertical tab space
\ - backslash
*/

#include<stdio.h>

int main(){
printf("Monday-$%d\n tuesday-$%d",100,200);
return 0;
}

//user input:
//integer,
#include<stdio.h>

int main(){
int age;
printf("enter your age:");
scanf("%d",&age);
printf("you entered:%d",age);
return 0;
}

//char:
#include<stdio.h>

int main(){
char choice;
printf("enter your choice as Y/N:");
scanf("%c",&choice);
printf("you entered:%c",choice);
return 0;
}

//code to add two numbers:
#include<stdio.h>

int main(){
int a,b,c;
a=2;
b=3;
c=a+b;
printf("sum of a & b is:%d",c);
return 0;
}

//code for modules:

#include<stdio.h>

int main(){
int a,b,c,d;
a=2;
b=3;
c=a/b;
printf("division is:%d",c);
d=a%b;
printf("\n");
printf("modulo is: %d",d);
return 0;
}

// you may think what is modulo may be the output can help you
/*
output:
division is:4
modulo is: 1
*/

//comparison operatorcode.
//code:
#include<stdio.h>

int main(){
int a=100,b=10;
printf("a value=%d & b value=%d\n\n",a,b);
printf("a is greater than b:\t %d\n",a>b);
printf("a is less than b:\t %d\n",a<b);
printf("a is equal to b:\t %d\n",a==b);
printf("a is not equal to b:\t %d\n",a!=b);
return 0;
}

/*output:
a value=100 & b value=10

a is greater than b:     1
a is less than b:        0
a is equal to b:         0
a is not equal to b:     1
*/