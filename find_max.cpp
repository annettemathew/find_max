// find_max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int input = INT_MIN;
    int max = INT_MIN;
    vector<int> v;
    while (input != 0)
    {
        cout << "Please enter a number(0 to quit): ";
        cin >> input;
        v.push_back(input);
        if (input > max) {
            max = input;
        }
        cout << "Max number so far: " << max << endl;
    }
        vector<int>::iterator iter = v.begin(),
            iter_end = v.end();
        for (; iter_end != iter; ++iter) {
            cout << *iter << " ";
        }
        cout << endl;

}
