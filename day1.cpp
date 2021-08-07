// Day1 Assignment

problem 1: 
#include<iostream>
using namespace std;
int main()
{
   int a=1,b=1;
   while(b<=a){
       a=a+1;
       b=b+a;
       cout<<"hi\n"; 
   }
    return 0;
}
ans : TIME COMPLEXITY IS O(n)

Problem 2: 
#include<iostream>
using namespace std;
int main()
{   int a,b,c,n=64;
   for(int i=1; i<=n; i=i*2){
       cout<<"hi everyOne :)\n";
   }
    return 0;
}
Time Complexity is O log(n)