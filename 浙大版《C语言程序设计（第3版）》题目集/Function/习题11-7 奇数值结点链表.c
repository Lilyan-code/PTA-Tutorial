struct ListNode *readlist()
{
    struct ListNode *h, *p, *pre;
    int da, fst=1;
    while(~scanf("%d", &da) && da!=-1)
    {
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->data=da;
        if(!fst) pre->next=p, pre->next->next=NULL, pre=pre->next;
        if(fst) pre=h=p, fst=0;
    }
 
    return h;
}
 
struct ListNode *getodd( struct ListNode **L )
{
    struct ListNode *p, *pre1, *pre2, *h1=NULL, *h2=NULL;
    int f1=1, f2=1, da;
    while(*L)
    {
        da=(*L)->data;
        if(da%2)
        {
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            p->data=da;
            if(!f1) pre1->next=p, pre1->next->next=NULL, pre1=pre1->next;
            if(f1) pre1=h1=p, f1=0;
        }
        else
        {
            p=(struct ListNode*)malloc(sizeof(struct ListNode));
            p->data=da;
            if(!f2) pre2->next=p, pre2->next->next=NULL, pre2=pre2->next;
            if(f2) pre2=h2=p, f2=0;
        }
        *L=(*L)->next;
    }
    *L=h2;
    return h1;
}