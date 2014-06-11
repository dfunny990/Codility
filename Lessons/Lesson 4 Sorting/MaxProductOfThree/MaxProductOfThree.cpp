//Codility Lesson 4, Program 2, MaxProductOfThree
#include <algorithm>
#include <iostream>
using namespace std;
int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    return max(A[0]*A[1]*A[A.size()-1], A[A.size()-1] * A[A.size()-2] * A[A.size()-3]);
}
