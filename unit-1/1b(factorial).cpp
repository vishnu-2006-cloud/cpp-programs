#include<iostream>
using namespace std;
int fact(int num)
{
	if(num==0||num==1)  
	{
	return 1;
	}
else
{
	return num*fact(num-1);
} 
}
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	cout<<"factorial= "<<fact(n);
}
