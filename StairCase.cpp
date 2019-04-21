#include<iostream>

using namespace std;

int stairCase(int);

int main(){
int n;
cin>>n;

if(n>0 && n<=100){
    stairCase(n);
}
 return 0;
}

int stairCase(int a){
int i,j;
for (i=0;i<a;i++){
    for(j=0;j<a;j++){
    	if((i+j)>=(a-1)){
        cout<<"#";
    }
    else 
    	cout<<" ";
    }
		cout<<endl;
}
return 0;
}
