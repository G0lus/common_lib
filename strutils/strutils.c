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

/**
 * @brief Erases char from src and copies to dst. Safe to use the same ptr for input and output.
 * Function uses temporary buffer.
 * @warning Last copied data is '\\0'.
 * @warning dst must be of sufficient length to hold the data.
 * @param src starting string
 * @param dst pointer to copy to
 * @param ch char to erase
 * @param max_len maximum length to copy from src
 * @return length of copied string.
*/
size_t str_erase_char(const char* src, char* dst, const char ch, const size_t max_len){
    if(dst == NULL){
        return 0;
    }
    
    char tmp[max_len];
    for(size_t i = 0; i < max_len; i++){
        tmp[i] = 0;
    }

    size_t tmp_cnt = 0;
    for(size_t i = 0; i < max_len && src[i] != '\0'; i++){
        if (src[i] != ch)  // if source is not a char
        {
            tmp[tmp_cnt] = src[i];  // copy the char at source to destination
            tmp_cnt++;        // increment destination pointer
        }
    }
    tmp[tmp_cnt] = '\0';
    for(size_t i = 0; i < tmp_cnt; i++){
        dst[i] = tmp[i];
    }

    return tmp_cnt;
}