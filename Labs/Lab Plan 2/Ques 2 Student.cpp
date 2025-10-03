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
		for(int i = 0; i<3; i++){
			if(marks[i] <= Pass){
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
	for(int i = 0; i<25; i++){
		cout<<"Enter "<<i+1<<" Student Data: "<<endl;
		cout<<"Please Enter Name: "<<endl;
		cin>>name;
		cout<<"Please Enter Roll no: "<<endl;
		cin>>roll;
		for(int i = 0; i<3; i++){
			cout<<"Enter the Data of "<<i+1<<" Student"<<endl;
			cin>>marks[i];
		}
		List mylist(name,roll,marks);
		mylist.check();
		cout<<"\n\n";
	}
}
