#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){


int n;

cin>>n;

while(n--){
    int rating;

    cin>>rating;


    if(rating>=1900){
        cout<<"Division 1"<<endl;
    }else if(rating>=1600){
        cout<<"Division 2"<<endl;
    }else if(rating>=1400){
        cout<<"Division 3"<<endl;
    }else{
        cout<<"Division 4"<<endl;

    }


}



return 0;
}
