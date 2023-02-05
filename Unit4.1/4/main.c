#include <stdio.h>

void behind(int *, int);

int main(void) {
    //! showMemory(start=65520)
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

void behind(int * scores, int numbers){
    int maximum_value = 0, i;

    for ( i =0; i<numbers; i++ ){

        if ( scores[i] >= maximum_value ){

          maximum_value = scores[i];

        }
    }
    for ( i =0; i<numbers; i++ ){

        scores[i] = maximum_value - scores[i] ;

        }
}
