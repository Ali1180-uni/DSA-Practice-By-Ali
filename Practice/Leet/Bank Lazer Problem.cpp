#include<iostream>
#include<vector>
using namespace std;
int NumberOfBeams(vector<string>& bank) {
        int total = 0;
        int prev = 0;
        for(int i = 0; i<bank.size(); i++){
        	int count = 0;
            for(int j = 0; j<bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    count++;
                }
            }
            if(count > 0){
                total += count * prev;
                prev = count;
            }
        }
        return total;
}
int main() {
	vector<string> arr = {"011001","000000","010100","001000"};
	int num = NumberOfBeams(arr);
	cout<<num;
}
