#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){


int n;
cin>>n;
int arr[n];
int minh=0; int maxh=0;
int mini=-1;int maxi=-1;
for(int i=0;i<n;i++){
    cin>>arr[i];

    if(i==0){
        minh=arr[i];
        maxh=arr[i];
        mini=i;
        maxi=i;
        continue;
    }

    if(arr[i]>maxh){
        maxh=arr[i];
        maxi=i;
    }
    if(arr[i]<=minh){
        minh=arr[i];
        mini=i;
    }
}


if(maxi>mini){
    maxi--;
}

cout<<maxi+(n-1)-mini<<endl;

return 0;

}
