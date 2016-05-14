//Small execution time test in C for passing paramters to a function

#include <stdio.h>

    typedef struct {
        int a;
        int b[1000];
    } big_structure_t;
    
    int foo( big_structure_t x ) {
        return (&x)->a;
    }

    int bar( big_structure_t* x) {
        return x->a;
    }

    int main() {
        #define CYCLE_COUNT 10000000
        int result = 0;
        
        big_structure_t x = { .a = 1, .b = { 0 } };
    
        #if defined FOO_METHODE
        for(int i=0; i<CYCLE_COUNT; i++) {
            result += foo(x);
        }
        printf("FOO_METHODE\n");
        #elif defined BAR_METHODE
        for(int i=0; i<CYCLE_COUNT; i++) {
            result += bar(&x);
        }
        printf("BAR_METHODE\n");
        #else
        #error Either FOO_METHODE or BAR_METHODE must be defined
        #endif
        
        printf( "result = %d\n", result );

        return 0;
    }

