// you can use includes, for example:
// #include <algorithm>
#include <utility>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    vector<pair<int,int>> ranges;
    int matches=0;
    for (long i=0; i<A.size()-1; ++i) {
        long baseLeft=i-A[i];
        long baseRight=i+A[i];
        ranges.push_back(make_pair(baseLeft,baseRight));
        for (unsigned j=i+1; j<A.size(); ++j) {
            long checkLeft=j-A[j];
            long checkRight=j+A[j];
            if (checkLeft <= baseRight && checkRight >= baseLeft) {
                ++matches;
            }
        }
    }
    return matches;
    // write your code in C++14 (g++ 6.2.0)
}