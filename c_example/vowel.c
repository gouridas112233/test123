#include <stdio.h>
main() {

    int nv;
    int nc;
    int nw;
    int c;
    int i;

    nv = nc = nw = 0;

    char *message;
    message = "The quick brown fox jumps over the lazy dog";
    printf("Message: %s\n", message);

    nv = nc = nw = 0;
    while(*message++ != '\0') {
        switch (*message) {
           case 'a':
           case 'e':
           case 'i':
           case 'o':
           case 'u':
               nv++;
               break;
           case ' ':
           case '\t':
           case '\n':
               nw++;
               break;
           default:
               nc++;
               break;
        }
    }
    printf("--- No of Vowels: %d, No of Consonent: %d, No of white-space: %d\n", nv,nc,nw);

    char *s;
    char *t;
    char *rs;

    s = "hello world";
    printf("s string: %s\n", s);

    /* len of s */
    nc = 0;
    while(*t++ != '\0') {
        nc++;
    }
    printf("== Length of %s is %d\n", s,nc);
}
