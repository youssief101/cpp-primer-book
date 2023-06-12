// function that takes an integer and returns the factorial n!
int fact(int i) {
    int result{1};
    while (i > 0)
        result *= i--;
    return result;
}