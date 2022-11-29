#include<iostream>
using namespace std;
void foo(int *a)
{
    cout<<*a<<endl;
}
int main()
{
    int a[]={1,2,3,4};
    foo(a);
    return 0;
}