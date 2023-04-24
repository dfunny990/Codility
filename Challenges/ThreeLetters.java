package com.example.restservice;

public class ThreeLetters {
    public String solution(int A, int B) {
        String result = "";
        while (A> 0 || B > 0) {
            if (A >= B || result.endsWith("b")){ 
                if (A >= 2) {
                    result += "aa";
                    A-=2;
                }
                else if (A == 1) {
                    result +="a";
                    A--;
                }
            }
            if (B >= A || result.endsWith ("a")) {
                if (B >= 2) {
                    result += "bb";
                    B-=2;
                }
                else if (B == 1) {
                    result +="b";
                    B--;
                }
            }
        }
        return result;
    }
}
