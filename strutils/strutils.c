#include "strutils.h"

/**
 * @brief Gets single line from src without newline ('\n') or zero ('\0') character .
 * @param src
 * @param dst
 * @param max_len
 * @retval -1 if either of pointers is NULL.
 * @retval Characters read into dst.
*/
size_t str_get_line(const char* restrict src, char* restrict dst, const size_t max_len){
    if(src == NULL || dst == NULL){
        return -1;
    }
    size_t i;
    for(i = 0; i < max_len; i++){
        if(src[i] == '\n'){
            i++;
            break;
        }else if(src[i] == '\0'){
            return i == 0 ? 0 : i;
        }
        dst[i] = src[i];
    }
    return i;
}
