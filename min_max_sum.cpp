#include<iostream>
using namespace std;

long arr[5];
int AInput(){
 int i;
    for(i=1;i<=5;i++){
        cin>>arr[i];
    }
    return 0;
}

int ascOrder(){
int i,j;
long c;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(arr[i]>=arr[j]){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
        }
    }
}
return 0;
}

int ASum(){
    int i;
    long s1,s2;
    s1=s2=0;
    for(i=1;i<=4;i++){
        s1=s1+arr[i];
    }
    for (i = 5; i >= 2; i--) {
      s2 = s2 + arr[i];
    }
    cout<<s2<<" "<<s1;
    return 0;
}

int main(){
AInput();
ascOrder();
ASum();
}
