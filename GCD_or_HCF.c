#include<stdio.h>
int main()
{
    int n,m,min,i,hcf=1;
    scanf("%d%d",&n,&m);
    min=n>m?m:n;
    for(i=2;i<=min;i++)
    {
        if(n%i==0&&m%i==0)
        {
            hcf=i;
        }
    }
    printf("%d
",hcf);
    return 0;
}