// you can use includes, for example:
// #include <algorithm>
#include<set>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    set<int> sortedNumbers;
    for (auto it = A.begin(); it != A.end(); ++it) {
        sortedNumbers.insert(*it);
    }
    int count=1;
    for (auto it = sortedNumbers.begin(); it != sortedNumbers.end(); ++it) {
        if (*it > count) {
            return count;
        }else if (*it < 1) {
            count = 1;
        }else {
            ++count;
        }
    }
    return count;
    // write your code in C++14 (g++ 6.2.0)
}