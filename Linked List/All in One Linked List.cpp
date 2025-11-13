#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        data=0;
        next=nullptr;
    }
};
class Linklist{
    public:
    Node *first,*last;
    Linklist(){
        first=last=nullptr;
    }
    void additem_atlast(int d){
        Node *temp=new Node();
        temp->data=d;
        if(first==nullptr){
            first=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
    void additem_atfirst(int d){
        Node *temp=new Node();
        temp->data=d;
        if(first==nullptr){
            first=temp;
            last=temp;
        }
        else{
            temp->next=first;
            first=temp;
        }
    }
    void addinbtw(int d,int position){
        Node *newnode=new Node();
        newnode->data=d;
        Node *temp=first;
        int count=1;
        while(temp!=nullptr && count!=position-1){
            temp=temp->next;
            count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void Deleteitem(int d){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to delete!...\n";
            return;
        }
        if(first->data==d){
            first=first->next;
            cout<<"First node deleted!...\n";
            if(first==nullptr){
                last=nullptr;
                cout<<"This was the only Node!...\n";
            }
        }
        else{
            Node *curr=first;
            Node *prev;
            while(curr!=nullptr && curr->data!=d){
                prev=curr;
                curr=curr->next;
            }
            if(curr==nullptr){
                cout<<"Data not found!...\n";
                return;
            }
            if(curr==last){
                prev->next=nullptr;
                last=prev;
                cout<<"Last node deleted!...\n";
            }
            else{
                prev->next=curr->next;
                cout<<"Middle node deleted!...\n";
            }
        }
    }
    void ShowItem(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to display!...\n";
            return;
        }
        Node *temp=first;
        while(temp!=nullptr){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverselist(){
        if(first==nullptr){
            cout<<"list is empty!...Noting to reverse!...";
        }
        Node *prev=nullptr,*Next=nullptr;
        Node *curr=first;
        while(curr!=nullptr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        first=prev;
    }
    void search(int d){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to search!...\n";
            return;
        }
        int count=1;
        Node *temp=first;
        while(temp!=nullptr && temp->data!=d){
            temp=temp->next;
            count++;
        }
        if(temp==nullptr){
            cout<<"Data not found at any position!...\n";
            return;
        }
        else{
            cout<<"Data Found at position :"<<count;
            cout<<endl;
        }
    }
    void sort(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to sort!...\n";
            return;
        }
        for(Node *i=first;i!=nullptr;i=i->next){
            for(Node *j=i->next;j!=nullptr;j=j->next){
                if(j->data<i->data){
                    int temp=i->data;
                    i->data=j->data;
                    j->data=temp;
                }
            }
        }
    }
    void sort_indec(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to sort!...\n";
            return;
        }
        for(Node *i=first;i!=nullptr;i=i->next){
            for(Node *j=i->next;j!=nullptr;j=j->next){
                if(j->data>i->data){
                    int temp=i->data;
                    i->data=j->data;
                    j->data=temp;
                }
            }
        }
    }
    void swap(int d1,int d2){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to swap!...\n";
            return;
        }
        Node *sp1,*sp2,*temp=first;
        while(temp!=nullptr){
            if(temp->data==d1){
                sp1=temp;
            }
            else if(temp->data==d2){
                sp2=temp; 
            }
            temp=temp->next;

        }
        if(sp1==nullptr || sp2==nullptr){
            cout<<"Data not found!... nothing to swap!...\n";
            return;
        }
        else{
            int temp=sp1->data;
            sp1->data=sp2->data;
            sp2->data=temp;
        }
    }
    void minimum(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing Minimum!...\n";
            return;
        }
        Node *temp=first;
        int min=1000000;
        while(temp!=nullptr){
            if(temp->data<min){
                min=temp->data;
            }
            temp=temp->next;
        }
        if(min==1000000){
            cout<<"Error in min!...\n";
            return;
        }
        else{
            cout<<"Minimum value in the list is: "<<min;
            cout<<endl;
        }
    }
    void maximum(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing Minimum!...\n";
            return;
        }
        Node *temp=first;
        int max=-1;
        while(temp!=nullptr){
            if(temp->data>max){
                max=temp->data;
            }
            temp=temp->next;
        }
        if(max==-1){
            cout<<"Error in max!...\n";
            return;
        }
        else{
            cout<<"Maximum value in the list is: "<<max;
            cout<<endl;
        }
    }
    void total_Node(){
        if(first==nullptr){
            cout<<"\nList is empty!... No node!...\n";
            return;
        }
        Node *temp=first;
        int count=0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        cout<<"\nTotal Nodes(data) in the linlist are: "<<count<<endl;
    }
    void sum_avg(){
        if(first==nullptr){
            cout<<"\nList is empty!... Nothing to sum or average!...\n";
            return;
        }
        Node *temp=first;
        int sum=0;
        int count=0;
        while(temp!=nullptr){
            sum+=temp->data;
            count++;
            temp=temp->next;
        }
        cout<<"\nSum of all the data is: "<<sum<<endl;
        cout<<"\nAverage of the data is: "<<(sum/count)<<endl;
    }

};
Node *create_circle(int n){
    if(n==0){
        cout<<"\nNo circle of the given input!...\n";
        return nullptr;
    }
    Node *First = new Node();
    First->data = 1;
    Node *Last = First;
    for(int i=2;i<=n;i++){
        Node *temp=new Node();
        temp->data=i;
        Last->next=temp;
        //temp->prev=last;
        Last=temp;
    }
    Last->next=First;
    //first->prev=last
    return First;
}
void Jousufus(int n,int k){
    Node *curr=create_circle(n);
    Node *prev=curr;
    while(curr->next!=curr){
        for(int i=1;i<k;i++){
            prev=curr;
            curr=curr->next;          
        }
        prev->next=curr->next;
        curr=curr->next;
        //curr->follow=prev
    }
    int winner=curr->data;
    cout<<"\nWinner of josufhus is: "<<winner<<endl;
}

int main(){
    Linklist mylist;
    mylist.additem_atlast(10);
    mylist.additem_atlast(20);
    mylist.additem_atlast(30);
    mylist.additem_atfirst(40);
    mylist.additem_atfirst(50);
    mylist.additem_atfirst(60);
    mylist.addinbtw(100,4);
    Jousufus(6,3);
    mylist.ShowItem();
    mylist.total_Node();
    mylist.sum_avg();
    mylist.minimum();
    mylist.maximum();
    mylist.swap(20,50);  
     mylist.ShowItem();
    mylist.sort_indec();
    mylist.ShowItem();
    mylist.search(40);
    mylist.reverselist();
    mylist.ShowItem();
    mylist.Deleteitem(40);
    return 0;
}