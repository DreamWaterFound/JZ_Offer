#include <iostream>
#include <vector>
#include "./Solution.hpp"
#include "./ListNode.hpp"


using namespace std;


//NOTICE  注意考虑一下会出现的意料之外的各种情况

ListNode* getList1(void);
ListNode* getList2(void);
void DispList(ListNode* head);
void setFreeList(ListNode* head);


int main(int argc, char* argv[])
{
    cout<<"Offer_015"<<endl;

    ListNode* list1=getList1();
    ListNode* list2=getList2();

    

    cout<<"list1 is:"<<endl;
    DispList(list1);
    cout<<"list2 is:"<<endl;
    DispList(list2);
    
    ListNode* head;

    Solution s;
    
    head=s.Merge(list1,list2);


    cout<<"Merged List is :"<<endl;
    DispList(head);
    

    setFreeList(head);
    
    return 0;
}

ListNode* getList1(void)
{
    ListNode* head=new ListNode(1);
    ListNode* node=head;
    
    
    node->next=new ListNode(4); node=node->next;
    node->next=new ListNode(5); node=node->next; 
    node->next=new ListNode(5); node=node->next;
    node->next=new ListNode(5); node=node->next;
    node->next=new ListNode(16); node=node->next;
    node->next=new ListNode(19); node=node->next;
    node->next=new ListNode(23); node=node->next;
    node->next=new ListNode(39); node=node->next;
    node->next=new ListNode(41); node=node->next;
    node->next=new ListNode(42);  
    
    
    return head;
}

ListNode* getList2(void)
{
    ListNode* head=new ListNode(3);
    ListNode* node=head;
    
    
    node->next=new ListNode(4); node=node->next;
    node->next=new ListNode(6); node=node->next; 
    node->next=new ListNode(9); node=node->next;
    node->next=new ListNode(10); node=node->next;
    node->next=new ListNode(26); node=node->next;
    node->next=new ListNode(27); node=node->next;
    node->next=new ListNode(28); node=node->next;
    node->next=new ListNode(29); node=node->next;
    node->next=new ListNode(33); node=node->next;
    node->next=new ListNode(33); node=node->next;
    node->next=new ListNode(40); node=node->next;
    node->next=new ListNode(46);  

    return head;
}

void setFreeList(ListNode* head)
{
    vector<ListNode*> vNodes;
    ListNode* node=head;
    if(head==nullptr)
    {
        return;
    }

    vNodes.push_back(head);
    while(node->next=nullptr)
    {
        vNodes.push_back(node->next);
        node=node->next;
    } 

    //set free
    for(auto itNodes : vNodes )
    {
        delete itNodes;
    }

    return ;
    
}

void DispList(ListNode* head)
{
    if(head==nullptr)
    {
        cout<<"Empty List."<<endl;
        return ;
    }

    ListNode* pNode=head;

    while(pNode)
    {
        cout<<pNode->val<<" ";
        pNode=pNode->next;
    }

    cout<<endl;
    return ;

}


