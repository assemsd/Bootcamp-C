int my_isalnum(char a) {
    if((a >= 'a' && a<='z') || (a >= 'A' && a<='Z') || (a >= '0' && a<='z')) {
        return 1;
    }
    else {
        return 0;
    }
}