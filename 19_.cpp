#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

using namespace std;
int main()
{
    /*//array stl
    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i = 0;i < size;i++)
    {
        cout << a[i] << " ";
    }
    cout << a.at(2) << endl;
    cout << a.empty() <<endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    */
    /*//Vector
    vector<int> v {1,2,0};
    // cout << "Capacity:" << v.capacity() << endl;
   

    // cout << "Capacity:" << v.capacity() << endl;
    // cout << "Size:" << v.size() << endl;
    // for(int i:v)
    // {
    //     cout << i <<" ";
    // }*/
    /*// Deque (Doubly Ended Queue)
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_back()
    cout << "print first index element :" << d.at(0) << endl;
    */
    // list
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout << i <<' ';
    }
    cout << 





}