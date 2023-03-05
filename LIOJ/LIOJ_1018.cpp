#include<iostream>
using namespace std;

int main(){
    int n, cur, pre = -1, cnt = 0, max_len = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cur;
        if(cur == pre) cnt++;
        else cnt = 1;
        pre = cur;
        max_len = max(max_len, cnt);
    }
    cout << max_len << endl;
    return 0;
}