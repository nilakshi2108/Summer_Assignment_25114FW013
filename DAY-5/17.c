#include <stdio.h>
int main(){
    int num,i,sum=0;
printf("enter a number:");
scanf("%d",&num);
for(i=1;i<num;i++){
    if (num%i==0)
    sum+=i;
}
if (sum==num)
printf("perfect number");
else
printf("not a perfect number");
return 0;
}