#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        bool poss = false;
        int n = floor(sqrt(g));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(pow(i,2)+pow(j,2)==g)
                {
                    poss = true;
                }
            }
        }
        if(poss)
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
