
int isEmptyString(const char *str) {
    // Check if the first character is the null terminator
    if (str == NULL || str[0] == '\0') {
        return 1; // The string is empty
    }
    return 0; // The string is not empty
}
int add(const char* input){
  if (isEmptyString(input)) {
        return 0; // The string is empty
    }
return -1;
}
