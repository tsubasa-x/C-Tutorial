#include <stdio.h>
using namespace std;

int main(){
    int M, D;
    scanf("%d %d", &M, &D);

    int S = (M*2 + D) % 3;
    if(S == 0) printf("´¶³q\n");
    if(S == 1) printf("¦N\n");
    if(S == 2) printf("¤j¦N\n");
}
