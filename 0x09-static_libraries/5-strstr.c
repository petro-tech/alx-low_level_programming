char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack; // If needle is an empty string, return the entire haystack
    }

    while (*haystack != '\0') {
        char *startHaystack = haystack;
        char *subNeedle = needle;

        // Check for substring match starting from the current position in haystack
        while (*subNeedle != '\0' && *startHaystack == *subNeedle) {
            startHaystack++;
            subNeedle++;
        }

        // If entire substring is found, return the starting position in haystack
        if (*subNeedle == '\0') {
            return haystack;
        }

        haystack++;
    }

    return NULL; // Substring not found 
