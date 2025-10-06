#include<iostream>
using namespace std;
class List{
	public:
		string name;
		int roll;
		int marks[3];
		int Pass = 33;
		int count = 0;
	List(string nam, int rollno, int mark[]){
	    name = nam;
		roll = rollno;
		for(int i = 0; i<3; i++){
			marks[i] = mark[i];
		}		
	}
	void check(){
		count = 0;
		for(int i = 0; i<3; i++){
			if(marks[i] < Pass){
				count++;
			}
		}
		if(count > 1){
			cout<<"\n\nFailed Student"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll<<endl;
			for(int i = 0; i<3; i++){
				cout<<"Marks in Subject "<<i+1<<" is "<<marks[i]<<endl;
			}	
		}else{
			cout<<"\n\nHe is Passed"<<endl;
		}
	}
};
int main(){
	string name;
	int roll;
	int marks[3];
	List *mylist[5];
	for(int i = 0; i<5; i++){
		cout<<"Enter "<<i+1<<" Student Data: "<<endl;
		cout<<"Please Enter Name: "<<endl;
		cin>>name;
		cout<<"Please Enter Roll no: "<<endl;
		cin>>roll;
		for(int j = 0; j<3; j++){
			cout<<"Enter the Marks of "<<j+1<<" Student"<<endl;
			cin>>marks[j];
		}
		mylist[i] = new List(name,roll,marks);
		cout<<"\n\n";
	}
    for(int i = 0; i<5; i++){
        mylist[i]->check();
    }

    for(int i = 0; i<5; i++){
        delete mylist[i];
    }
}
