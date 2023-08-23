#include<bits/stdc++.h>
using namespace std;
void fun1(int num)
{
	if (num>10) return;
	else cout<<num<<" ";
	fun1(num+1);
}
void fun2(int i)
{
	if (i < 1) return;
	else cout<<i<<" ";
	fun2(i-1);
}
int factorial(int n)
{
	int fact=1;
	if (n==0 || n==1) return 1;
	else return n*factorial(n-1);
}
int digits(int n1){
	if (n1==0) return 0;
	else return digits(n1/10)+1;
}
int main()
{
	fun1(1);
	cout<<endl;
	fun2(10);
	cout<<endl;
	int res,n;
	cin>>n;
	res=factorial(n);
	cout<<res<<endl;
	int noofdigits=digits(12345);
	cout<<noofdigits<<endl;
	return 0;
}
