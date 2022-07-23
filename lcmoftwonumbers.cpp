#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int ans;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }
    int mul=num1*num2;
    cout<<mul/ans;
 return 0;
}
