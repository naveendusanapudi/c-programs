#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,e;
    printf("enter the number : ");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/2;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("the area is : %f",e);
}
