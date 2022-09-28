#include <stdio.h>
#define MAX 5
int array[MAX]={1,2,3};
int top=2;
int isempty(){
if (top==-1)
return 1;
else
return 0;
}
int isfull(){
if (top==(MAX-1))
return 1;
else
return 0;
}
void push(){
if (isfull())
printf("Stack overflow!");
else{
printf("Enter element to be pushed: ");
scanf("%d",&array[++top]);
}
}
void pop(){
if (isempty())
printf("Empty stack");
else
printf("%d",array[top--]);
}
void show(){
if (isempty()){
printf("Empty stack.");
}
else{
printf("Stack: ");
for (int i=0;i<=top;i++){
 printf("%d",array[i]);
 printf(" ");
}
}
}
void peek(){
if (isempty())
printf("Empty stack");
else
printf("%d",array[top]);
}
int main(){
int choice,flag=1;
do{
printf("\nMENU \n\t1. Show \n\t2. Push \n\t3. Pop \n\t4. Peek \n\t5.Exit");
printf("\nChoose an option : ");
scanf("%d",&choice);
switch(choice){
case 1:
show();
break;
case 2:
push();
break;
case 3:
pop();
break;
case 4:
peek();
break;
case 5:
flag=0;
break;
default:
printf("Please choose a correct option.\n");
}
}while(flag);
}