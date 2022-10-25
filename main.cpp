#include <bits/stdc++.h>
#define ll long long
#define besmellah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
template <class T>
class Darray
{
private:
    T* ptr;
    int length;
    int  n;
public:
    Darray()
    {
        ptr = new T[n];
        cout<<"enter size of Array : ";
        cin>>n;
        length = n;
        for(int i=0;i<n;i++)
        {
            ptr[i]=0;
        }
    }
    Darray(int n)
    {
        ptr = new T[n];
        length=n;
        for(int i=0;i<n;i++)
        {
            ptr[i]=0;
        }


    }
    void getarray()
    {
        cout<<"enter the array`s value : ";
        for(int i=0;i<length;i++)
        {
            cin>>ptr[i];
        }
    }
    Darray(const Darray& anotherarray){
        delete []ptr;
        length=anotherarray.length;
        ptr = new T[length];
        for (int i = 0; i < length; i++) {
            ptr[i] = anotherarray.ptr[i];
        }
    }//copy constructor
    T& operator[](int index)
    {
        if (index >= length) {
            cout<<" index is out of boundary "<<endl;
        }
        return ptr[index];
    }
    T& operator =(const Darray& anotherarray)
    {
        length = anotherarray.length;
        delete []ptr;
        ptr = new T[length];
        for (int i = 0; i < length; i++)
        {
            ptr[i] = anotherarray.ptr[i];
        }
    }
    int size()
    {
        return length;
    }
    void print()
    {
        cout<<"values is : "<<endl;
        for(int i=0;i<length;i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
    ~Darray();
};
//_________________________
template<class T>
Darray<T>::~Darray() {
    delete[] ptr;
}
int main()
{
    Darray<char> a;
    a.getarray();
    Darray <char> b(a);
    //b.getarray();
    // b[1]='g';
    //b=a;
    cout<<"size of array is :" <<b.size()<<endl;
    cout<<"the value of index is : "<<b[1]<<endl;
    b.print();

}