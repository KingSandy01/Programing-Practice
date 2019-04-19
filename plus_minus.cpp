/*
Given an array of integers, calculate the fractions of its elements that are positive, negative, and are zeros. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

For example, given the array  there are  elements, two positive, two negative and one zero. Their ratios would be ,  and . It should be printed as

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below. It should print out the ratio of positive, negative and zero items in the array, each on a separate line rounded to six decimals.

plusMinus has the following parameter(s):

arr: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Constraints

 

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array compared to its size.
A decimal representing of the fraction of negative numbers in the array compared to its size.
A decimal representing of the fraction of zeros in the array compared to its size.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
*/

#include<iostream>
using namespace std;

int arr[1000];

int main(){
    int n, i;
    double  count1, count2, count3;
    count1=0; count2=0; count3=0;
     cin>>n;
     if((n>0 && n<=100)==1){
     for(i=1;i<=n;i++){
        cin>>arr[i];
                      }
    
     for(i=1;i<=n;i++){
        if(arr[i]>=-100 && arr[i]<=100){
        if(arr[i]>0)
            count1=count1+1;
        if(arr[i]<0)
            count2=count2+1;
        if(arr[i]==0)
            count3=count3+1;
                    }}
        cout<<count1/n<<endl;
        cout<<count2/n<<endl;
        cout<<count3/n<<endl;
                          }
return 0;
}
