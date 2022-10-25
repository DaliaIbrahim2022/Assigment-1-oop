#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<utility>
#define ll long long
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL) ,cout.tie(0);
using namespace std;
int display_menu()
{
    int choice;
    cout<<"1 : is to add player in this list ."<<endl;
    cout<<"2 : is to print this list  sorted ."<<endl;
    cout<<"3 : is to check player`s name  in this list ."<<endl;
    cin>>choice;
    return choice;
}
bool sortbysecdesc(const pair<string,int> &a,const pair<string,int> &b)
{
    return a.second>b.second;
}
int main() {
    int choice;
    vector< pair <string,int>> vec;
    vector< pair <string,int>>::iterator it;
    string name,pn;
    ll score,psc;
    cout<<"please enter the list  : ";
    for(ll i=0;i<10;i++)
    {
        cin>>name>>score;
        vec.emplace_back(name,score);
    }
    sort(vec.begin(), vec.end(), sortbysecdesc);
    while (true)
    {
        choice = display_menu();
        if (choice == 1)
        {
            cout << "please enter the players name  and his score you want to add : " << endl;
            cin >> pn >> psc;
            bool test = false;
            for (int i = 0; i < 10; i++) {
                if (psc >= vec[i].second) {
                    vec.erase(vec.end());
                    vec.emplace_back(pn, psc);
                    sort(vec.begin(), vec.end(), sortbysecdesc);
                    cout << " adding successful" << endl;
                    test = true;
                    break;
                }
            }
            if (test==true)
                continue;
            else {
                cout << " i can not add this player " << endl;
            }
            return 0;
        }
        else if (choice == 2)
        {
            for(it=vec.begin();it!=vec.end();it++)
            {
                cout<<it->first<<"   "<<it->second<<endl;
            }
            return 0;
        }
        else if (choice == 3)
        {
            string name1;
            cout<<"please enter player name   "<<endl;
            cin>>name1;
            bool tst=false;
            for (int i = 0; i < 10; i++) {
                if (name1 == vec[i].first) {
                    cout<<vec[i].first<<" "<<vec[i].second;
                    tst=true;
                    break;
                }
            }
            if(!tst)
            {
                cout<<"this player dose not exist"<<endl;
            }
            return 0;
        }
    }

    return 0;
}


