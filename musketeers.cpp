#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string g;
	    cin>>g;
	    int c=0;
	    bool allone = false;
	    int count1=0;
	    for(int i=0;i<g.length();i++)
	    {
	        if(g[i]=='1')
	        {
	           count1++; 
	        }
	    }
	    if(count1==g.length())
	    {
	        allone = true;
	    }
	    
	    for(int i=0;i<g.length()-1;i++)
	    {
	        if(g[i]-g[i+1]!=0)
	        {
	            c++;
	        }
	    }

	    if(allone)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(c>1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
