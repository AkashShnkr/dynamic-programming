#include<bits/stdc++.h>
using namespace std;
void printS(int i,int s,vector<int> arr,vector<int> dp,int sum, int n){
    if(i==n){
        if(s==sum){
            for(auto it:dp) {
                cout<<it<<" ";

            }
        }
        return ;
    }
dp.push_back(arr[i]);
s+=arr[i];
printS(i+1,s,arr,dp,sum,n);
s-=arr[i];
dp.pop_back();

printS(i+1,s,arr,dp,sum,n);

    
}


int main()  {


vector<int> arr{1,2,1};
int sum=2;
int n=3;int s=0;
vector<int> dp;
printS(0,s,arr,dp,sum,n);

return 0;
}