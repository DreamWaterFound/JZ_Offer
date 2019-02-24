#include <iostream>
#include <vector>
#include "./Solution.hpp"
#include "./ListNode.hpp"


using namespace std;

ListNode* getList(void);
void DispList(ListNode* head);
void setFreeList(ListNode* head);


int main(int argc, char* argv[])
{
    cout<<"Test."<<endl;
    ListNode* head=getList();
    DispList(head);

    Solution s;
    unsigned int k=1;
    ListNode* node=s.FindKthToTail(head,k);
    cout<<"The k= "<<k<<" is "<<node->val<<endl;

    setFreeList(head);
    return 0;
}

ListNode* getList(void)
{

    ListNode* head=new ListNode(1);
    ListNode* node=head;
    
    node->next=new ListNode(2); node=node->next;
    node->next=new ListNode(3); node=node->next; 
    node->next=new ListNode(4); node=node->next;
    node->next=new ListNode(5); 

    /*
    ListNode* head=new ListNode(1);
    ListNode* node=head;
    
    node->next=new ListNode(2); node=node->next;
    node->next=new ListNode(3); node=node->next; 
    node->next=new ListNode(4); node=node->next;
    node->next=new ListNode(5); node=node->next;
    node->next=new ListNode(6); node=node->next;
    node->next=new ListNode(7); node=node->next;
    node->next=new ListNode(8); node=node->next;
    node->next=new ListNode(9); node=node->next;
    node->next=new ListNode(10); node=node->next;
    node->next=new ListNode(11); 
    */

    
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


