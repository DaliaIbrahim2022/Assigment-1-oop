#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
    string s, s2;
    cout << "Enter a sentence: " << endl;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> s2)
    {
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'h' && s2[i + 1] == 'i' && s2[i + 2] == 'm')
            {
                if (!isalpha(s2[i + 3]))
                {
                    s2 = s2.substr(0, 3) + " or her" + s2.substr(i + 3, s2.size());

                }
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'H' && s2[i + 1] == 'e')
            {
                if (!isalpha(s2[i + 2]))
                {
                    s2 = s2.substr(0, 2) + " or she" + s2.substr(i + 2, s2.size());

                }
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'h' && s2[i + 1] == 'e')
            {
                if (!isalpha(s2[i + 2]))
                {
                    s2 = s2.substr(0, 2) + " or she" + s2.substr(i + 2, s2.size());
                }
            }

        }
        cout << s2 << " ";
    }
}