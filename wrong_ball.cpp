#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i=i+2)
        {
            if(s[i]!='R')
            {
                count++;
            }
        }
        for(int i=1;i<s.length();i=i+2)
        {
            if(s[i]!='B')
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
	//code
	return 0;
}
