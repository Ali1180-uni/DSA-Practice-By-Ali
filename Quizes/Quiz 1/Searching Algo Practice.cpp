#include<iostream>
using namespace std;
int main(){
	int arr[10] = {1,2,6,4,5,6,6,8,9,10};
	cout<<"Please Enter the number you wnat to Search:"<<endl;
	int num,count = 0,index = -1;
	cin>>num;
	for(int i = 0; i<10; i++){
		// Finding 6 how many times
//		if(arr[i] == num){
//			count++;
//		}
        if(arr[i] == num){
        	count = i;
        	break;
		}
	}
	cout<<num<<" is Present "<<count<<" Index in this Array"<<endl;
}