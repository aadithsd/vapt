#include<stdio.h>
#include<string.h>
#define max 3

struct users
{
    char u[20],p[20],r[20];
};

int main()
{
    struct users users[max] = {
        {"admin","admin123","admin"},
        {"user","u123ser","user"},
        {"guest","gu345est","guest"}
    };
    char p[20],u[20];
    printf("enter username: ");
    scanf("%s",u);
    printf("\nenter password: ");
    scanf("%s",p);
    int i,found=0;
    
    for(i=0;i<max;i++)
    {
        if (strcmp(u,users[i].u)==0 && (strcmp(p,users[i].p)==0))
        {
            found=1;
            printf("\nlogin successfull");
            printf("\nRole: %s",users[i].r);
            
            if(strcmp(users[i].r,"admin")==0)
                printf("\nFULL ACCESS GRANTED");
            else if(strcmp(users[i].r,"user")==0)
                printf("\nW X GRANTED");
            else
                printf("\nONLY R GRANTED");
            
            break;
        }
    }
    
    if(!found)
        printf("\n Auth failed");
        
    return 0;
}
