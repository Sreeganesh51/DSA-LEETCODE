char* makeGood(char* s) {
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (top > 0 && abs(s[i] - s[top-1]) == 32) {
            top--; 
        } else {
            s[top] = s[i];
            top++; 
        }
    }
    s[top] = '\0';
    return s; 
}

