#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans=0;
    int t=1;
    while(n>0){
        int now=n%10;
        if(now>0 && now<9) ans+=now*t;
        if(now>=9) ans+=(now-1)*t;
        n/=10;
        t*=9;
    }
    cout<<ans<<endl;
    return 0;
}