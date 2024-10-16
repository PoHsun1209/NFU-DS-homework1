#include <iostream>
using namespace std;

int sigma(int n){
    if(n<0) throw "n < 0";
    else if(n<=1) return n;
    return n+sigma(n-1);
}

int main(){
    int n=0;
    while(cin>>n){
        if(n<=0) break;
        cout<<sigma(n)<<"\n";
    }
    return 0;
}