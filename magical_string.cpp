#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string g;
        cin>>g;
        string s;
        int x;
        for(int i=0;i<g.length();i++)
        {
            if(int(g[i])<=109)
            {
               
               if(int(g[i])==109)
               {
                   x = 110;
               }
               else
               {
                   x = (109-int(g[i]))+110;
               }
            }
            else if(int(g[i])>109)
            {
                if(int(g[i])==110)
                {
                    x = 109;
                }
                else
                
                {
                    x = 109-(int(g[i])-110);
                }
            }
            s = s+(char)x;
        }
        cout<<s<<endl;
    }
	//code
	return 0;
}
