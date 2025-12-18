#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char win = 'k';
	cout<<"\t\t\t<------> Welcome to Lottery Game <------>"<<endl;
	cout<<"\n\nPress any key to Start: You Have 5 Tries";
	getch();
	char ans;
	int i = 1, count = 0;
	while(i<6){
		cout<<endl<<"Please Guess the Letter between \"a - z\" "<<endl;
	    cin>>ans;
	    if(ans>='a' && ans<='z'){
	    	if(ans == win){
	    		cout<<"Congrates you win"<<endl;
	    		i++;
	    	    break;
			}else{
				cout<<"Wrong Please try again"<<endl;
				count++;
				if(count>=5){
					cout<<"You Fail"<<endl;
					break;
				}
			}
		}else{
			system("cls");
			cout<<endl<<"Please Enter the Letter between \"a - z\" "<<endl;
		}
	}
	if(count == 0){
		cout<<"You Score is 10,000"<<endl;
	}else if(count == 1){
		cout<<"You Score is 8,000"<<endl;
	}else if(count == 2){
		cout<<"You Score is 6,000"<<endl;
	}else if(count == 3){
		cout<<"You Score is 4,000"<<endl;
	}else if(count == 4){
		cout<<"You Score is 2,000"<<endl;
	}
}
