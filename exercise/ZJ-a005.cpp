#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){     // while(t--)
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        printf("%d %d %d %d ", a, b, c, d);
        if(b-a == c-b){
            int diff = b-a;
            printf("%d\n", d+diff);
        }else{
            int r = b/a;
            printf("%d\n", d*r);
        }
    }
}



