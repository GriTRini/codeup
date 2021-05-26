#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b)
    {
        if(b>=c)
            x=b;
        else if(c>=a)
            x=a;
        else if(c>=b && c>=a)
            x=c;
    }
    if(b>=c)
    {
        if(c>=a)
            x=c;
        else if(a>=b)
            x=b;
        else if(b>=c && a>=c)
            x=a;
    }
    if(c>=a)
    {
        if(a>=b)
            x=a;
        else if(b>=c)
            x=c;
        else if(c>=a && b>=a)
            x=b;
    }
    printf("%d",x);
    return 0;
}