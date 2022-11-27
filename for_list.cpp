//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l;
    l.assign({3,6,5,4,2});
    l.push_front(5);
    l.push_front(6);
    l.remove(5);
    l.pop_front();
    auto it =l.insert_after(l.begin(),45);
    it=l.insert_after(it,{5,8,0});
    it=l.erase_after(it);
    // for(auto it=l.begin();it!=l.end();it++)//auto=forward_list<int>::itrator
    // {
    //     cout<<*it<<" ";
    // }

    for(auto i:l)
    {
        cout<<i<<" ";
    }
}