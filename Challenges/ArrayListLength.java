package com.example.restservice;

public class ArrayListLength {
    public int solution(int[] A) {
        // Implement your solution here
        int size = 0;
        int index = 0;
        while (index >= 0) {
            index = A[index];
            size++;
        }
        return size;
    }
}
