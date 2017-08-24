#include <stdlib.h>
#include <stdio.h>


typedef struct nodo{
    int val;
    struct nodo *next;
}nodo;


nodo *crear(int n)
{
    int i;
    nodo *head,*prev,*cur;
    if(n>0)
    {
        head=malloc(sizeof(nodo));
        head->val=1;
        prev=head;

        for(i=2;i<=n;i++)
        {
            cur=malloc(sizeof(nodo));
            cur->val=i;
            prev->next=cur;
            prev=cur;
        }
        prev->next=NULL;
        return head;
    }
    else return 0;
}


void imprimir(nodo *temp)
{
    nodo *t;
    t=temp;
    while(t!=NULL)
    {
        printf("%d  ",t->val);
        t=t->next;
    }
}


void borrar(nodo *temp, int key)
{
    nodo *cur,*prev;
    prev=temp;
    cur=temp->next;
    while(cur!=NULL)
    {
        if(cur->val==key)
        {
            prev->next=cur->next;
            free(cur);
            break;
        }
        prev=cur;
        cur=cur->next;
    }

}

nodo *insertarinicio(nodo *temp,int n)
{
    nodo *adicional;
    adicional=malloc(sizeof(nodo));
    adicional->val=n;
    adicional->next=temp;

    return adicional;
}


int cantidad(nodo *temp)
{
    int i=0;
    nodo *cur;
    cur=temp;
    while(cur!=NULL)
    {
        ++i;
        cur=cur->next;
    }
    return i;
}

nodo *insertaralmedio(nodo *temp, int n)
{
    int i;
    nodo *adicional,*cur;
    adicional=malloc(sizeof(nodo));
    adicional->val=n;
    cur=temp;

    for(i=2;i<=((cantidad(temp)/2));i++)
        cur=cur->next;
    adicional->next=cur->next;
    cur->next=adicional;

    return cur;
}

void ordenarlista(nodo *temp)
{
    nodo *prev,*cur;
    int i,j,mayor,cant;
    cant=cantidad(temp);

    for(i=0;i<cantidad(temp);i++,cant--)
    {
        prev=temp;
        cur=temp->next;
        for(j=1;j<cant;j++)
        {
            if(prev->val > cur->val)
            {
                mayor=prev->val;
                prev->val=cur->val;
                cur->val=mayor;
            }
            cur=cur->next;
            prev=prev->next;
        }
    }
}

void concatenarlista(nodo *temp_1,nodo *temp_2)
{
    int i;
    nodo *a,*b;
    a=temp_1;
    b=temp_2;

    for(i=2;i<=cantidad(temp_1);i++)
        a=a->next;
    a->next=b;
}
