struct ListNode *readlist()
{
    struct ListNode *head,*tail,*p;
    head = tail = NULL;
    while(1)
    {


        p=(struct ListNode *)malloc(sizeof(struct ListNode));
        scanf("%d",&(p->data));

        if(p->data<0)
            break;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else tail->next=p;
        tail=p;
    }
    return head;

}
struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *p,*head;
    while(1)
    {

        if(L==NULL||L->data!=m)
        {
            head=L;
            break;
        }
        else if(L->data==m)//此处的if else同样是为了防止L是空集
            L=L->next;
    }
    if(head==NULL||head->next==NULL)//借助||的左结合性先判断head是否是空集防止出现head是空地址却head-》next
        return head;
    while(1)
    {
        if(L==NULL)//同样是为了防止L为空集。
            break;
        p=L;
        L=L->next;
        if(L==NULL)
            break;
        if(L->data==m)
        {while(1){
                if(L==NULL||L->data!=m)//同样运用||的左结合性先判断在运行。
                    break;
                L=L->next;
            }
            p->next=L;
        }

    }
    return head;
}
