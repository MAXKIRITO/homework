#include<iostream>
using namespace std;
int main(){
    int target, n, arr[1001];
    cin >> target >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}