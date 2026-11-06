#include<stdio.h>
char str[100],pat[100],rep[100],ans[100];
void read()
{
    printf("enter string:");
    gets(str);

    printf("enter pattern:");
    gets(pat);
     
    printf("enter replacement string:");
    gets(rep);
}

void pat_match()
{
    int i,m,c,j,k;
    int flag=0;
    i=m=c=j=0;

    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                printf("\nPAT:%s is found at position %d.",pat,c);
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j]=rep[k];
                    i=0;
                    c=m;
                    flag=1;
                }
            }
        }
        else
        {
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
    if(flag==0)
        printf("\nPAT: %s is not found.",pat);
    else
         printf("\n resulting string is :%s",ans);
    
}

int main()
{
    read();
    pat_match();
    getch();

    return 0;
}