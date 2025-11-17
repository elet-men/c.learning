#define MAXINT pow(2, 31)

int reverse(int x){
    long res = 0;

    // 循环取末位
    while(x!=0) {
        res *= 10;
        res += x % 10;
        x /= 10;
    }

    // 判断数据是否合法
    if(res >= MAXINT || res < -MAXINT) return 0;
    return res;
}
#include <math.h>
#include <stdio.h>
int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int result = reverse(x);
    printf("Reversed: %d\n", result);
    return 0;
}