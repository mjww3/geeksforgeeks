#include <iostream>
using namespace std;
#include <vector>

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char> v;
        int count = 0;
        int vowel = 0;
        for(int i=0;i<s.length();i++)
        {
            bool ss = false;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vowel++;
            }
                for(int j=0;j<v.size();j++)
                {
                    if(s[i]==v[j])
                    {
                        ss = true;
                        break;
                    }
                }
                if(!ss)
                {
                    v.push_back(s[i]);
                }
            }
            int b = v.size()-vowel;
            if(b%2==0)
            {
                cout<<"SHE!"<<endl;
            }
            else{
                cout<<"HE!"<<endl;
            }
    }
	//code
	return 0;
}
