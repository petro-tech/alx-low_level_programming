char *_memset(char *s, char b, unsigned int n) {
    if (s == NULL) {
        return NULL; // Return NULL for invalid input
    }

    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }

    return s;
