#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>


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
    /*// list
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout << i <<' ';
    }
    cout << l.empty() << " ";
    */
    /*/ Stack
    stack<string> s;
    s.push("Paras");
    s.push("Chawla");
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    */
    /*// Queue
    queue<string> q;
    q.push("Paras");
    q.push("Chawla");

    cout << q.front() << endl;
    */
    /*// Priority queue
    priority_queue<int> maxi;
    priority_queue<int,vector<int> ,greater<int> > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n =maxi.size();
    for(int i = 0; i < n;i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    */
    /*// Set 
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(3);

    for(int i:s)
    {
        cout << i << ' ';
    }
    */
    /*// map
    map<int,string> m;
    m[1] = "paras";
    m[2] = "Chawla";
    */


    






}