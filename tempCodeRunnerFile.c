#include<stdio.h>
#include<ctype.h>
void FIRST(char[],char );
void result(char[],char);
int nop;
char prod[10][10];
void main()
{
    int i;
    char choice;
    char c;
    char result[20];
    printf("How many number of productions ? :");
    scanf(" %d",&nop);
    for(i=0;i<nop;i++)
    {
        printf("Enter productions Number %d : ",i+1);
        scanf(" %s",prod[i]);
    }
    do
    {
        printf("\n Find the FIRST of  :");
        scanf(" %c",&c);
        FIRST(result,c);
        printf("\n FIRST(%c)= { ",c);
        for(i=0;result[i]!='\0';i++)
        printf(" %c ",result[i]);      
        printf("}\n");
        printf("press 'y' to continue : ");
        scanf(" %c",&choice);
    }
    while(choice=='y'||choice =='Y');
}

void FIRST(char* Result,char c)
{
    int i,j,k;
    char subRes[20];
    int eps;
    subRes[0]='\0';
    Result[0]='\0';
    if(!(isupper(c)))
    {
        result(Result,c);
            return ;
    }
    for(i=0;i<nop;i++)
    {
        if(prod[i][0]==c)
        {
        if(prod[i][2]=='$') 
            result(Result,'$');
        else
            {
                j=2;
                while(prod[i][j]!='\0')
                {
                eps=0;
                FIRST(subRes,prod[i][j]);
                for(k=0;subRes[k]!='\0';k++)
                    result(Result,subRes[k]);
                for(k=0;subRes[k]!='\0';k++)
                    if(subRes[k]=='$')
                    {
                        eps=1;
                        break;
                    }
                if(!eps)
                    break;
                j++;
                }
            }
    }
}
    return ;
}

void result(char Result[],char val)
{
    int k;
    for(k=0 ;Result[k]!='\0';k++)
        if(Result[k]==val)
            return;
    Result[k]=val;
    Result[k+1]='\0';
}
