char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (strchr(accept, *s) != NULL) {
            return s; // Return pointer to the first occurrence in accept
        }
        s++;
    }

    return NULL; // No match found
}
