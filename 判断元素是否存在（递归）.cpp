#include<iostream>
using namespace std;
bool panduan(int a,int b)
{
    if(a>b)
        return false;
    if(a==b)
    {
        return true;
    }        
    else
    {
        if(panduan(2*a+1,b))
            return true;
        if(panduan(3*a+1,b))
            return true;
    }
}
int main()
{
    int k,x;//k�Ǽ���M��Ԫ�أ��ж�x�ǲ��Ǽ���M��Ԫ��
    char s;
    cin>>k>>s>>x;
	if(panduan(k,x))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
