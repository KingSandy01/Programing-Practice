/*
You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning  years old, and the cake will have  candles of height , , , , she will be able to blow out  candles successfully, since the tallest candles are of height  and there are  such candles.

Function Description

Complete the function birthdayCakeCandles in the editor below. It must return an integer representing the number of candles she can blow out.

birthdayCakeCandles has the following parameter(s):

ar: an array of integers representing candle heights
Input Format

The first line contains a single integer, , denoting the number of candles on the cake. 
The second line contains  space-separated integers, where each integer  describes the height of candle .

Constraints

Output Format

Print the number of candles that can be blown out on a new line.

Sample Input 0

4
3 2 1 3
Sample Output 0

2
*/
#include<iostream>
using namespace std;


int ar[100000];
int ascOrder(int);
int birthdayCakeCandles(int);

int main(){
    int n,i;
    cin>>n;
    if(n>=1 && n<=100000){
    for(i=1;i<=n;i++){
        cin>>ar[i];
                    }
                        }
ascOrder(n);
birthdayCakeCandles(n);

return 0;
}

int ascOrder(int n){
int i,j,c;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(ar[i]>ar[j]){
            c=ar[i];
            ar[i]=ar[j];
            ar[j]=c;
        }
    }
}
return 0;
}

int birthdayCakeCandles(int n){
int i,count;
count=0;
for(i=1;i<=n;i++){
if(ar[i]!=ar[n]){
    count++;
    
}
cout<<ar[i]<<endl;
}
cout<<n-count;
return 0;
}
