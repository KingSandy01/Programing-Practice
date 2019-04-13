/*
Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers representing the array's elements.

Constraints


Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
*/

#include<iostream>
using namespace std;

int ar[1000];
int ar_sum(int);

 
int main(){
int n,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>ar[i];
}
ar_sum(n);
cout<<ar_sum(n);
return 0;
}

int ar_sum(int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + ar[i];
  }
  return sum;
}
