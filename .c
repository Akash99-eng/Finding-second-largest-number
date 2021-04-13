#include <stdio.h>

int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

if(a>=b &&a>=c)
{
    if(b>=c){
        printf("%d is second largest number\n",b);
    }
    else
    {
        printf("%d is second largest number\n",c);
    }
}
if(b>=a && b>=c){
    if(a>=c)
    {
        printf("%d is second largest number\n",a);
    }
    
    else
    {
        printf("%d is second largest number\n",c);
    }
}
if(c>=a && c>=b){
    if(a>=b){
        printf("%d is second largest number\n",a);
    }
    else{
        printf("%d is second largest number\n",b);
    }
}




    return 0;
}
