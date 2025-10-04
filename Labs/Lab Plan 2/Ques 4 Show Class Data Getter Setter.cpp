#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
		string CniC;
	public: 
	void setName(string n){
		name = n;
	}
	string GetName(){
		return name;
	}
	void setage(int a){
		age = a;
	}
	int Getage(){
		return age;
	}
	void setcnic(string c){
		if(c[13]){
			break;
		}
	}
	string Getcnic(){
		return CniC;
	}
	void Show(){
		string Name = GetName();
		int Age = Getage();
		string CNIC = Getcnic();
		cout<<"Name is : "<<Name<<endl;
		cout<<"Age is : "<<Age<<endl;
		cout<<"CNIC is : "<<CNIC<<endl;
	}
};
int main(){
	Person P1,P2,P3;
	P1.setName("Ali");
	P1.setage(12);
	P1.setcnic("123123");
	P2.setName("Alian");
	P2.setage(13);
	P2.setcnic("323123");
	P3.setName("Aliyar");
	P3.setage(14);
	P3.setcnic("223123");
	P1.Show();
	cout<<endl;
	P2.Show();
	cout<<endl;
	P3.Show();
}
