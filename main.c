#include <stdio.h>
#include <stdlib.h>
struct Token
{
    char d[10];
    int li;
    struct Token* next;
}st, *x=&st;
typedef struct Token token;
struct Symbol
{
    int index;
    char type[10];//int 1 float 2 char 3 bool 4
    char atri[10];
    struct Symbol* next;
}t,*a=&t;
typedef struct Symbol sym;
struct number
{
    char valu[10];
    int index;
    struct number* next;
};
typedef struct number numb;
void symboltable(sym* f,token* start)
{
    sym* v;
    int i=0;
    start=start->next;
    while(start->next!=NULL)
    {
        if((strcmpi(start->d,"int")==0)&&(strcmpi(start->d,"float")==0)&&(strcmpi(start->d,"char")==0)&&(strcmpi(start->d,"bool")==0))
        {
            if((id((start->next)->d)==1)
               {if(sesym()=-1))
               {
                   v=malloc(sizeof(sym));
                    f->next=v;
                    f=f->next;
                    strcpy(f->atri,(start->next)->d);
                    f->index=i;
                    strcpy(f->type,start->d);
                    i++;
               }
                else
                    printf("in line%d conflicting identifier");
               }
               else
               {
                  printf("in line%d unvalid identifier",start->li);
               }
        }
        start=start->next;
    }
}
void numbertable(numb* f,token* start)
{
    numb* v;
    int i=0;
    start=start->next;
    while(start->next!=NULL)
    {
        if((typch(start->d)==1)||(typch(start->d)==2))
        {
            v=malloc(sizeof(numb));
            f->next=v;
            f=f->next;
            f->valu=start->d;
            f->index=i;
            i++;
        }
    }
}
int opch(token* x,sym* a,int z)
{
    int i,b,c;
    i=typch(x->d);
    if(i==4)
        {c=sesym(x->d);
        if(c==-1)
            printf("in line%d undeclared identifier",x->li);}

        if((i==1)||(i==2)||(i==4))
    {
        x=x->next;
        if((strcmpi(x->d,"+")==0)||(strcmpi(x->d,"-")==0)||(strcmpi(x->d,"*")==0)||(strcmpi(x->d,"/")==0))
        {
            x=x->next;
            b=typch(x->d);
            if((b!=1)&&(b!=2)&&(b!=4))
            {
                printf("in line%d expected identifier before %s",x->li,x->d);
            }
        }
        /*else if((strcmpi(y->d,"=")==0))
        {
            y=y->next;
            c=typch(x);
            if(c=-1)
                    printf("in line%d undeclared identifier");
            else if(i!=c)
                printf("in line%d incompatible type");
        }
        else
        {
            y=y->next;
            if(strcmpi(y->d,";")!=0)
                printf("in line%d expected ;",y->li);
        }
    }
    else if(i==3)
    {
        x=x->next;
        if(strcmpi(x->d,"=")==0)
        {
            x=x->next;
            c=typch(x);
            if(c!=3)
                {printf("in line%d incompatible type");
        }
    }
    else
        {x=x->next;
        if(strcmpi(x->d,";")!=0)
                printf("in line%d expected ;",x->li);}
    }*/}
    int bodych(token* start, token* x)
    {
        sym* u;
        int i;
        if((strcmpi(x->d,"main")==0)||(strcmpi(x->d,"if")==0)||(strcmpi(x->d,"while")==0))
            halg(x);
        else if((strcmpi(x->d,"int")==0)||(strcmpi(x->d,"float")==0))
        {
            x=x->next;
            if(id(x->d)!=1)
                printf("in line%d invalid identifier");
            x=x->next;
            if(strcmpi(x->d,"=")==0)
            {
                x=x->next;
                opch();
            }

        }
        else if(strcmpi(x->d,"char")==0)
        {
            x=x->next;
            if(id(x->d)!=1)
                printf("in line%d invalid identifier");
            x=x->next;
            if(strcmpi(x->d,"=")==0)
               {
                x=x->next;
                if(typch(x->d)!=3)
                {
                    printf("in line%d expected char before %s",x->li,x->d);
                    x=x->next;
                }
            }
            }
        else if(strcmpi(x->d,"bool")==0)
        {
            x=x->next;
            if(id(x->d)!=1)
                printf("in line%d invalid identifier");
            if(strcmpi(x->d,"=")==0)
               {
                x=x->next;
                if((strcmpi(x->d,"true")!=0)&&(strcmpi(x->d,"false")!=0))
                {
                    printf("in line%d expected boolean before %s",x->li,x->d);
                    x=x->next;
                }
            }
        }
        else if(typch(x->d)==4)
           {
               x=x->next;
               if(strcmpi(x->d,"=")==0)
               {
                   x=x->next;
                   opch();
               }
           }
      if(strcmpi(x->d,";")==0)
        error();

    }
    void error ()
    {
        while(x->d)
        {
            x=x->next;
        }
    }
    void cond(token* start,token* y)
    {
        y=y->next;
        int i,b,c;
        i=typch(x->d);
    if(i==4)
        {c=sesym(x->d);
        if(c==-1)
            printf("in line%d undeclared identifier",x->li);}

        if(i==4)
    {
        x=x->next;
        if((strcmpi(x->d,"==")==0)||(strcmpi(x->d,"!=")==0)||(strcmpi(x->d,"<=")==0)||(strcmpi(x->d,">=")==0)||(strcmpi(x->d,"&&")==0)||(strcmpi(x->d,"||")==0))
        {
            x=x->next;
            b=typch(x->d);
            if((b!=1)&&(b!=2)&&(b!=4))
            {
                printf("in line%d expected identifier before %s",x->li,x->d);
            }
    }
int opin(token* x)
{
    int i,e;
    i=typch(x->d);
    if((i==1)||(i==2))
    {
        printf("T_%d%s",q,x->d);
    }
    else if(i==4)
    {
        e=sesym(x->d);
        if(e>=10)
            e=e-10;
        printf("T%d",e);
        x=x->next;
        if((strcmpi(x->d,"+")==0)||(strcmpi(x->d,"-")==0)||(strcmpi(x->d,"*")==0)||(strcmpi(x->d,"/")==0)||(strcmpi(x->d,"==")==0)||(strcmpi(x->d,"!=")==0)||(strcmpi(x->d,"<=")==0)||(strcmpi(x->d,">=")==0)||(strcmpi(x->d,"||")==0)||(strcmpi(x->d,"&&")==0))
        {
           opin(x);
        }
        else if((strcmpi(x->d,"+")==0)
                opin(x);
    }
}
int condin(token* x)
{
    x=x->next;
    int i,e;
    i=typch(x->d);

    if((i==1)||(i==2))
    {
        printf("T_%d%s",q,x->d);
    }
    else if(i==4)
    {
        e=sesym(x->d);
        printf("T%d",e);
        x=x->next;
        if((strcmpi(x->d,"==")==0)||(strcmpi(x->d,"!=")==0)||(strcmpi(x->d,"<=")==0)||(strcmpi(x->d,">=")==0)||(strcmpi(x->d,">=")==0)(strcmpi(x->d,"||")==0)||(strcmpi(x->d,"&&")==0))
        {op(x);
        }
    }
}
int opin(token* x)
{
    int i,e;
    i=typch(x->d);
    if((i==1)||(i==2))
    {
        printf("T_%d%s",q,x->d);
    }
    else if(i==4)
    {
        e=sesym(x->d);
        if(e>=10)
            e=e-10;
        printf("T%d",e);
        x=x->next;
        if((strcmpi(x->d,"+")==0)||(strcmpi(x->d,"-")==0)||(strcmpi(x->d,"*")==0)||(strcmpi(x->d,"/")==0)||(strcmpi(x->d,"==")==0)||(strcmpi(x->d,"!=")==0)||(strcmpi(x->d,"<=")==0)||(strcmpi(x->d,">=")==0)||(strcmpi(x->d,"||")==0)||(strcmpi(x->d,"&&")==0))
        {
           opin(x);
        }
        else if((strcmpi(x->d,"+")==0)
                opin(x);
    }
}
int bodyin(token* p)
{


    if(strcmpi(curr->data,"if")==0)
    {
        fprintf(p,"IF");//last file
        p=p->next;
        condin(p);
        p=p->next;
        fprintf(p,"THEN L1 ELSE L2\n");
         fprintf(p, L1\n");
    }
    else if(strcmpi(r,"else")==0)
    {
         fprintf(p,"L2\n");
        op();}
    else if(strcmpi(r,"while")==0)
    else if((strcmpi(r,"int")==0)||(strcmpi(r,"char")==0)||(strcmpi(r,"float")==0)||(strcmpi(r,"bool")==0))
    x=x->next;
    opin();

int main()
{
    if(strcmpi(r,"void")==0)
    {
        if(strcmpi(r,"main")==0)
        {
            x=x->next;
            bodyin();
    }
    FILE* u;
    u=fopen("c.text","w");
    bodyin();
    return 0;
}
