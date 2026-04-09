#include<stdio.h>
#include<string.h>
#define max 100
const char *banned[] = {"123456","admin","root"};
#define bancount (sizeof(banned)/sizeof(banned[0]))

int main()
{
    int i,b=0;
    char p[max];
    printf("enter pass: ");
    scanf("%s",p);
    for(i=0;i<bancount;i++)
    {
        if(strcmp(p,banned[i])==0)
            b=1;
    }
    if(b==1)
        printf("change pass");
    else
        printf("pass accepted");
        
    return 0;
}
