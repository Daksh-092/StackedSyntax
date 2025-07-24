#include  <stdio.h>

int main (){
    char ch = 'R';
    printf ("The character is %c\n", ch);
    printf ("The value of character is %d\n", ch);
    
    // 97,122
    if (ch >= 97 && ch <= 122){
        printf ("This character is a lowercase\n");
    }

    else {
        printf ("The is not a lowercase\n");
    }

    return 0;
}