
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int isTrue(string s){

string a="YES",b="yes",c="Yes",d="yEs", e="yeS", f="yES", g="YEs", h="YeS";
if(s==a || s==b || s==c || s==d || s==e || s==f ||s==g ||s==h ){
    return 1;
}else{
return 0;
}

}

int main(){

int n;
cin>>n;
while(n--){
    string s;
cin>>s;
    if(isTrue(s)){
    cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}

}



return 0;
}
