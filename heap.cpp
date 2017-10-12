#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class heap
{
    public:
    vector <int> arr;
    public:
    void insert(int k);
    void delete_key(int i);
    int print_min() { return arr[0]; }
    int parent(int i) { return (i+1)/2; }
    int l_child(int i) { return (i*2)+1; }
    int r_child(int i) { return (i*2)+2; }
    void decrease(int i, int val);
    //void heapify(int i);
};
void heap::insert(int k)
{
    arr.push_back(k);
    int size = arr.size() - 1;
    while(size != 0 && arr[parent(size)] < arr[size])
    {
        swap(arr[size], arr[parent(size)]);
        size = parent(size);
    }
}
void heap::delete_key(int key)
{
    int size = arr.size() - 1;
    long long int i;
    while(size != 0)
    {
        if(arr[size] == key)
        {
            i = size;
            break;
        }
        size--;
    }
    decrease(i, INT_MIN);
}
void heap::decrease(int i, int val)
{
    arr[i] = val;
    while(i != 0 && arr[parent(i)] > arr[i] )
    {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    heap h;
    int test;
    while(test--)
    {
        long long int choice, num;
        cin >> choice;
        if(choice == 1)
        {
            cin >> num;
            h.insert(num);
        }
        if(choice == 2)
        {
            cin >> num;
            h.delete_key(num);
        }
        if(choice == 3)
        {
            cout << h.print_min() << endl;
        }
    }
    return 0;
}
