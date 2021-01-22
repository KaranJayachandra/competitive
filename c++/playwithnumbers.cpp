#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int arraySize, queries;
    scanf("%d %d", &arraySize, &queries);
    
    long long *numbers = new long long[arraySize + 1];
    long long *solution = new long long[queries];
    
    numbers[0] = 0;
    for (int i = 1; i < arraySize + 1; i++) {
        int input;
        scanf("%d", &input);
        numbers[i] = numbers[i - 1] + input; 
    }

    for (int i = 0; i < queries; i++) {
        int start, end, sum = 0;
        scanf("%d %d", &start, &end);
        start--;
        solution[i] = (numbers[end] - numbers[start])/(end - start);
    }

    for (int i = 0; i < queries; i++) printf("%lld\n", solution[i]);
}