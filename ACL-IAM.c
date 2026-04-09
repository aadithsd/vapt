#include<stdio.h>
#include<string.h>
#define max 5

struct acl
{
    char name[20];
    int r,w,x;
};

struct acl acl[max] = {
    {"aadi",1,1,1},
    {"vp",1,1,0},
    {"vis",1,0,0}
};

int main()
{
    char name[20], op[1];
    int i,f=0;
    printf("IDENTITY AND ACCESS MANAGEMENT\n");
    printf("enter name: ");
    scanf("%s",name);
    
    for(i=0;i<max;i++)
    {
        if(strcmp(name,acl[i].name)==0)
        {
            f=1;
            printf("\nenter oper: ");
            scanf("%s",op);
            
            if(strcmp(op,"r")==0 && acl[i].r || 
                strcmp(op,"w")==0 && acl[i].w ||
                strcmp(op,"x")==0 && acl[i].x)
                
                    printf("user %s has %s permission",name,op);
            else
                    printf("user %s does not have %s permission",name,op);
            
            break;
        }
    }
    
    if(!f)
        printf("user does not exist");
        
    return 0;
  
    
}

