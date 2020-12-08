#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p1={1,2};
    cout<<p1.first<<"\n";
     cout<<p1.second<<"\n";

     pair<int,pair<int,int>>p2={3,{4,5}};
     cout<<p2.first<<"\n";
     cout<<p2.second.first<<"\n";
     cout<<p2.second.second<<"\n";

     pair<int,int>arr[]={{6,7},{8,9},{10,11}};
     cout<<arr[0].second<<"\n";
       cout<<arr[2].second<<"\n";
 return 0;
}
