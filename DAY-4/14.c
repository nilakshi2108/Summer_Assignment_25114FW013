#include <stdio.h>
int main()
{
    int n,i;
    long int a=0,b=1,c;
    printf("enter the term number");
    scanf("%d",&n);
    if(n==1)
    printf("nth fibonacci term is %ld",a);
    else if(n==2)
    printf("nth fibonacci term is %ld",b);
    else{
        for(i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("nth fibonacci term is %ld",b);
    }
    return 0;
}