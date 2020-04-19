#include <stdio.h>
#include <math.h>

bool isPrime(int n){
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int value;
    while(scanf("%d", &value)){
        printf("%s\n", (isPrime(value) ? "質數": "非質數")); 
    }
    return 0;
}
