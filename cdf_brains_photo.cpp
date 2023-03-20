#include<iostream>
using namespace std;

int main(){


int m,n;

cin>>m>>n;

int isBlack=0;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        char a;
        cin>>a;
        if(a=='C' || a=='M' || a=='Y'){
            isBlack=1;
            break;
        }

    }
}

if(isBlack==0){
    cout<<"#Black&White"<<endl;
}else{
cout<<"#Color"<<endl;
}

return 0;
}
