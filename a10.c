#include<stdio.h>
int main()
{
int d,m; 
printf("Enter the days: ");
scanf("%d", &d);
m= d/30;
d= d%30;
printf("The number of months are %d \n",m);
printf("The number of days are %d \n",d);
return 0;
}


