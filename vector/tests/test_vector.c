#include <stdlib.h>
#include <assert.h>
#include "vector.h"

int main(void){
    vector* vec = vector_init(16);
    assert(vector_get_capacity(vec) == 16);

    for(size_t i = 0; i < 10; i++){
        int* num = calloc(1, sizeof(int));
        if(num == NULL){
            return EXIT_FAILURE;
        }
        *num = i + 10;
        vector_add(vec, num);
    }

    assert(vector_get_size(vec) == 10);
    vector_deinit(vec);
}