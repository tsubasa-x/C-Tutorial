#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(b*b - 4*a*c < 0){
        printf("No real root\n");
    }else if(b*b - 4*a*c == 0){
        printf("Two same roots x=%d\n", (-b/(2*a)));
    }else{
        printf("Two different roots x1=%d , x2=%d\n", (int)(-b+sqrt(b*b-4*a*c))/(2*a), (int)(-b-sqrt(b*b-4*a*c))/(2*a));
    }
}
