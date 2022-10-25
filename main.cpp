#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL) ,cout.tie(0);
#define endl '\n'
string remove(string &str)
{
    //the Answer to life, the Universe, and everything IS 42.
    string ss;
    for(int i=0;i<str.length();)
    {
        if(str[i]==' ')
        {
            if(i==0||i==str.length()-1)
            {
                i++;
                continue;
            }
            while(str[i+1]==' ')
                i++;
        }
        ss+=str[i++];
    }
    return ss;

}
int main()
{
    string str,nstr;
    cout<<"please enter your sentence : ";
    getline(cin,str,'.');
    nstr= remove(str);
    for (int i = 0; i <= nstr.size(); i++) {
        if (nstr[i] != ' ') {
            nstr[i] = toupper(nstr[i]);
        }
        transform(nstr.begin() + 1, nstr.end(), nstr.begin() + 1, ::tolower);
    }
cout<<"modified sentence : "<<nstr<<"."<<endl;
    return 0;
}