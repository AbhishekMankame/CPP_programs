#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            // cout<<"The given key "<<key<<" is present at the index "<<endl;
            return i;
        }
    }
    cout<<"The given key "<<key<<" is not present in the array"<<endl;
    return -1;
}

void solve(){
    int arr[5]={12,23,43,21,3};
    int size=5;
    int key=21;
    linearSearch(arr,size,key);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}