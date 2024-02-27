char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // Return pointer to the first occurrence of c
        }
        s++;
    }

    if (c == '\0') {
        return s; // Return pointer to the null terminator for c == '\0'
    }

