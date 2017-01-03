Given two numbers A and B. Find the value of pair (P,Q) such that A <= P < Q <= B value of P AND Q is maximum where AND is a binary operator. Refer to this link for more information about AND operator : http://en.wikipedia.org/wiki/Bitwise_operation#AND

Input:
First line of input contains number of test cases T. Each test case contains two numbers A and B.

Output: For each test case print the value of maximum AND.

*Constraints: *
1<=T<=1000
1<= A < B <=1018
SAMPLE INPUT

2
2 3
4 8


SAMPLE OUTPUT

2
6

#include <iostream>
using namespace std;
void answer()
{
long long int a,maxval=0,b,i,j,k=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
for(j=i;j<=b;j++)
{
if(i!=j)
{ k=i&j;
if(k>maxval)
maxval=k;
}
}
}
cout<<maxval<<endl;
}
int main()
{
int t,i;
cin>>t;
while(t--)
answer();
return 0;
}
