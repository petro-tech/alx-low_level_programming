char *_memcpy(char *dest, char *src, unsigned int n) {
    if (dest == NULL || src == NULL) {
        return NULL; // Return NULL for invalid input
    }

    for (unsigned int i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
