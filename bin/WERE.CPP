/*
:-OBJECTIVE:- TO MAKE A SIMPLE CALCULATOR PERFORMING BASIC MATHEMATICAL OPERATIONS  */
/*

:-AUTHOR:-SAMIYAL MASSY  (BTECH(CSE) 3RD SEM).
*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int driver=DETECT,mode;
initgraph(&driver,&mode,"C://tc//bgi");
int i,choice;
int num1,num2;
float result=0;
clrscr();
printf("\n this is a simple calculator which can perform basic mathematical operations\n");
printf("\n PLEASE ENTER TWO NUMBERS \n");
printf("\n ENTER THE FIRST NUMBER \n");
scanf("%d",&num1);
printf("\nNUMBER 1=%d\n",num1);
textcolor(WHITE+BLINK);
printf("\nENTER THE SECOND NUMBER \n");
scanf("%d",&num2);
printf("\nNUMBER 2=%d\n",num2);
textcolor(BLUE+BLINK);
cprintf("\n------------------------------CALCULATOR---------------------------------------------\n");
cprintf("\nPRESS 1  FOR THE ADDITION OF THE TWO NUMBERS WHICH YOU HAVE ENTERED \n ");
cprintf("\nPRESS 2  FOR THE SUBTRACTION OF THE TWO NUMBERS WHICH YOU HAVE ENTERED \n ");
cprintf("\nPRESS 3  FOR THE MULTIPLICATION OF THE TWO NUMBERS WHICH YOU HAVE ENTERED \n ");
cprintf("\nPRESS 4  FOR THE DIVISION OF THE TWO NUMBERS WHICH YOU HAVE ENTERED \n ");
cprintf("\nPRESS 5  FOR THE MODUL OF THE TWO NUMBERS WHICH YOU HAVE ENTERED \n ");
printf("\n----------------------------------------------------------------------------\n");
textcolor(BLUE);
printf("\n please select the choice corresponding to the mathematical operation you want  perform \n");
scanf("%d",&choice);
printf("\nchoice you have entered is =%d\n",choice);
switch(choice)
{
case 1:
printf("\n calculating the sum of the two entered numbers.............. \n ");
result=num1+num2;
printf("\n sum of the two numbers are=%d \n",result);
break;
case 2:
printf("\n calculating the subtraction of the two entered numbers........  \n");
result=num1-num2;
printf("\n subtraction of the two numbers are=%d\n ",result);
break;
case 3:
printf("\n calculating the multiplication of the two entered numbers........  \n");
result=float(num1*num2);
printf("\n multiplication of the two numbers are=%d\n ",result);
break;
case 4:
printf("\n calculating the division of the two entered numbers........  \n");
result=float(num1/num2);
printf("\n division of the two numbers are=%d \n ",result);
break;
default:
printf("\n YOU HAVE ENTERED A NUMBER OUT OF THE CHOICE  \n");
};
getch();
return 0;
}















