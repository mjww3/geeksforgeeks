#include <stdio.h>
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    if((n==1))
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int t;
    //the number of test cases
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        int temp = g;
        int count = 0;
        while(temp>0)
        {
            int n = temp%10;
            temp = temp/10;
            count+=factorial(n);
        }
        if(count==g)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
        
    }
	//code
	return 0;
}
