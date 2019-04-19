#include<iostream>
#include<cmath>
using namespace std;

int arr[100][100];

int main(){
 int n,i,j,sum1, sum2,flag,z;
 cin>>n;
 sum1=0;sum2=0;flag=0;

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cin>>arr[i][j];
    }
}
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(arr[i][j]>=-100 && arr[i][j]<=100){
            flag=flag+0;
        }
        else
        {
            flag=flag+1;
        }
    }
}

if(flag==0){
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==j){
            sum1=sum1+arr[i][j];
        }
        if((i+j)==(n+1)){
            sum2=sum2+arr[i][j];
        }
        else 
            continue;
    }
    }
}
cout<<sum1<<" "<<sum2;
z=sum1-sum2;
cout<<z;

return 0;
}
