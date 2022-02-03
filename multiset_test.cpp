#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    // empty multiset container
    multiset<int, greater<int>> ms1;

    // insert elements in random order
    ms1.insert(400);
    ms1.insert(300);
    ms1.insert(600);
    ms1.insert(200);
    ms1.insert(500);
    ms1.insert(500); // 500 will be added again to the multiset unlike set
    ms1.insert(100);

    // printing multiset ms1
    multiset<int>::iterator itr;

    cout << "\nMarks of ms1 class Room: " << endl;
    for (itr = ms1.begin(); itr != ms1.end(); ++itr)
    {
        cout << "  " << *itr;
    }
    cout << endl;

    // assigning the elements from ms1 to ms2
    multiset<int> ms2(ms1.begin(), ms1.end());

    // print all elements of the multiset ms2
    cout << "\nThe Number of students in class Room after assigning Class Room students: " << endl;
    for (itr = ms2.begin(); itr != ms2.end(); ++itr)
    {
        cout << "  " << *itr;
    }
    cout << endl;

    // Find the highest element in multiset ms1 and ms2
    multiset<int>::iterator msIt1, msIt2;
    msIt1 = ms1.begin();
    cout << "\nHighest marks in ms1 Class Room: " << *msIt1;

    msIt2 = ms2.begin();
    cout << "\nHighest marks in ms2 Class Room: " << *msIt2;

    // remove all elements up to element with value 300 in ms2
    cout << "\n\nms2 Class Room after removal of Students less than 300 marks:\n ";
    ms2.erase(ms2.begin(), ms2.find(300));
    for (itr = ms2.begin(); itr != ms2.end(); ++itr)
    {
        cout << "  " << *itr;
    }

    // remove all elements with value 500 in ms2
    int num;
    num = ms2.erase(500);
    cout << "\n\nms2.erase(500) : ";
    cout << num << " removed \t";
    for (itr = ms2.begin(); itr != ms2.end(); ++itr)
    {
        cout << "  " << *itr;
    }

    cout << endl
         << endl;
    // lower bound and upper bound for multiset ms1
    cout << "ms1.lower_bound(400) : " << *ms1.lower_bound(400) << endl;
    cout << "ms1.upper_bound(400) : " << *ms1.upper_bound(400) << endl;
    // lower bound and upper bound for multiset ms2
    cout << "ms2.lower_bound(400) : " << *ms2.lower_bound(400) << endl;
    cout << "ms2.upper_bound(400) : " << *ms2.upper_bound(200) << endl;

    return 0;
}