// Assumed all opens would have closes. 




// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


bool isOpenBracket(const char letter) {
    if (letter == '{'
     || letter == '('
     || letter == '[') {
         return true;
    }else {
        return false;
    }
}

bool isClosedBracket(const char letter) {
    if (letter == '}'
     || letter == ')'
     || letter == ']') {
         return true;
    }else {
        return false;
    }
}

char getMatchingBracket(const char letter) {
    if (letter == '}') {
        return '{';
    }
    if (letter == ']') {
        return '[';
    }
    if (letter == ')') {
        return '(';
    }
    if (letter == '{') {
        return '}';
    }
    if (letter == '[') {
        return ']';
    }
    if (letter == '(') {
        return ')';
    }
    return '\0';
}



int solution(string &S) {
    stack<char> openBrackets;
    for(auto it=S.begin(); it!=S.end(); ++it) {
        if (true == isOpenBracket(*it)) {
            openBrackets.push(*it);
        }
        if (true == isClosedBracket(*it)) {
            char match = getMatchingBracket(*it);
            char lastOpen = openBrackets.top();
            openBrackets.pop();
            if (match != lastOpen) {
                return 0;
            }
        }
    }
    if (openBrackets.empty()) {
        return 1;
    }
    return 0;
    // write your code in C++14 (g++ 6.2.0)
}