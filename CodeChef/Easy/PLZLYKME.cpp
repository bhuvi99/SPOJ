#include <cstdio>
 
int main() {
    long long T, L, D, S, C;
    scanf("%lld", &T);
    while (T--) {
        scanf("%lld%lld%lld%lld", &L, &D, &S, &C);
        long long tmp, i;
        for (i = 2, tmp = S; i <= D; i++) {
            tmp = tmp + tmp * C;
            if (tmp >= L)
                break;
        }
        puts(tmp>=L?"ALIVE AND KICKING":"DEAD AND ROTTING");
    }
    return 0;
}
 
