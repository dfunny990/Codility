// you can use includes, for example:
// #include <algorithm>
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


void IntToBinaryVector(const int N, std::vector<int> & binaryNumber) {
    int temp = N;
    while (temp>0){
        binaryNumber.push_back(temp%2);
        temp=temp/2;
    }
}


int solution(int N) {
    std::vector<int> binaryNumber;
    IntToBinaryVector(N, binaryNumber);
    vector<int>::reverse_iterator current = binaryNumber.rbegin();
    vector<int>::reverse_iterator next = binaryNumber.rbegin();
    if (binaryNumber.rend() == next) {
        return 0;
    }
    next++;
    int max=0, currentCount=0, index=0;
    while (binaryNumber.rend() != next) {
        index++;
        if (*current==0) {
            currentCount++;
            if (*next==1) {
                if (max < currentCount) {
                    max = currentCount;
                }
                currentCount=0;
            }
        }
        current++;
        next++;
    }
    
    
    
    return max;
    // write your code in C++14 (g++ 6.2.0)
}