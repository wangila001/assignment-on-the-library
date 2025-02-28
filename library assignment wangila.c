/* 
NAME: EZEKIEL WANGILA 
ADMISSION:D33-2585-2023
*/
#include<stdio.h>
int main() {
int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
printf("enter the book id: \n");
scanf("%d",&bookID);
printf("enter due date:\n");
scanf("%d",&dueDate);
printf("enter the return date: \n");
scanf("%d",& returnDate);
//to calculate the days overdue 
daysOverdue = returnDate - dueDate;
if(daysOverdue<=0){
fineRate=0;
fineAmount=0;
}
else if ( daysOverdue>0 && daysOverdue<=7) {
fineRate= 20;
fineAmount= daysOverdue *fineRate;
}
else if ( daysOverdue >=8 && daysOverdue<=14){
fineRate=50;
fineAmount =daysOverdue * fineRate;
}
else {
fineRate= 100;
fineAmount = daysOverdue * fineRate;
}
printf("bookID is : %d \n",bookID);
printf("the due date is : %d \n",dueDate);
printf("return date is : %d \n", returnDate);
printf("the days overdue are : %d \n",(daysOverdue>0) ? daysOverdue:0);
printf("the fineRate is ksh %d per day \n", fineRate);
printf("the fineAmount is ksh %d \n",fineAmount);
return 0;
}
