#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;



int main(){


vector<int> v;

long int n;
cin>>n;

while(n--){
    int a;
    cin>>a;
    v.push_back(a);
}

vector<int>::iterator it;


for(it=v.begin();it!=v.end()-1;it++){
    if(*it!= *(it+1)){
        v.erase(it);
        v.erase((it+1));
        it--;
    }

}



for(it=v.begin();it!=v.end()-1;it++){
   cout<<*it<<endl;

}


return 0;

}
