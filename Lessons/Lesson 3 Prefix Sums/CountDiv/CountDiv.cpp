//Codility Lesson 3, Program 4, PassingCars
int solution(int A, int B, int K) {
    int lower = A/K;
    int higher = B/K;
    int result = higher-lower;
    if(A%K == 0){++result;}
    return result;
}
