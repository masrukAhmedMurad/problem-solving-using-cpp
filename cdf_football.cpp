#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>;
#include<iterator>
using namespace std;

int main(){


int n;

cin>>n;
string st,ft;
int a=0,b=0;

while(n--){
    string s;
    cin>>s;

if(st=="" && ft==""){
    st=s;
    a++;

}else if(st==s){
a++;
}else{
ft=s;
b++;
}






}




a>b?cout<<st<<endl:cout<<ft<<endl;

  return 0;

}
