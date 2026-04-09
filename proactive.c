#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define min 8
#define max 100

int proactive(const char pass[])
{
    int u=0,l=0,d=0, s=0,i,len;
    char ch;
    len = strlen(pass);
    if(len<min)
    {
        return -1;
    }
    for(i=0;i<len;i++)
    {
        ch=pass[i];
        if(isupper(ch))
            u++;
        else if(islower(ch))
            l++;
        else if(isdigit(ch))
            d++;
        else
            s++;
    }
    return (u>=2 && l>=2 && d>=2 && s>=2);
}
int main()
{
    char p[max];
    int res;
    printf("\nEnter string: ");
    scanf("%s",p);
    res=proactive(p);
    if(res!=1)
        printf("weak pass");
    else
        printf("strong pass");
    return 0;
}