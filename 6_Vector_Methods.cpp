#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // 1. size()
    cout << "Size: " << v.size() << endl;

    // 2. capacity()
    cout << "Capacity: " << v.capacity() << endl;

    // 3. empty()
    cout << "Empty: " << v.empty() << endl;

    // 4. front()
    cout << "First element: " << v.front() << endl;

    // 5. back()
    cout << "Last element: " << v.back() << endl;

    // 6. at()
    cout << "Element at index 2: " << v.at(2) << endl;

    // 7. push_back()
    v.push_back(60);
    cout << "After push_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 8. pop_back()
    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 9. insert()
    v.insert(v.begin() + 2, 25);
    cout << "After insert: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 10. erase()
    v.erase(v.begin() + 2);
    cout << "After erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 11. resize()
    v.resize(7, 100);
    cout << "After resize: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 12. swap()
    vector<int> v2 = {1, 2, 3};
    v.swap(v2);

    cout << "After swap, v: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 13. clear()
    v.clear();
    cout << "After clear, size: " << v.size() << endl;

    return 0;
}
