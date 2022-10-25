#include <iostream>
#include <istream>
#include <fstream>
#include<sstream>
#include <string>
using namespace std;
int main()
{
    ifstream f1;
    ifstream f2;
    string name1, name2;
    cout << "Enter the name of the first file: " << endl;
    cin >> name1;
    f1.open(name1, ios::in);
    cout << "Enter the name of the second file: " << endl;
    cin >> name2;
    f2.open(name2,  ios::in);
    cout << "What kind of comparison do you want? " << "\n" << "1- character by character." << "\n"
         << "2- word by word." << endl;
    int answer;
    cin >> answer;
    if (answer == 1)
    {
        string line1, line2;
        int lineNum = 0;
        while(getline(f1, line1) && getline(f2, line2))
        {
            lineNum++;
            if (line1 != line2)
            {
                cout << "line contains a different is " << lineNum << endl;
                cout << line1 << endl;
                cout << line2 << endl;
                return 0;
            }
        }
        cout << "files are identical";
    }
    else if (answer == 2)
    {
        string line1, line2;
        int lineNum = 0;
        while(getline(f1, line1) && getline(f2, line2))
        {
            lineNum++;
            stringstream ss1(line1);
            stringstream ss2(line2);
            string word1, word2;
            while(ss1 >> word1 && ss2 >> word2)
            {
                if (word1 != word2)
                {
                    cout << "line contains a different is " << lineNum << endl;
                    cout << word1 << endl;
                    cout << word2 << endl;
                    return 0;
                }
            }
        }
        cout << "files are identical";
    }
    else
    {
        cout << "invalid input";
    }
}