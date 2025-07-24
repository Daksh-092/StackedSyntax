#include  <stdio.h>

int main (){
    int a = 4 , b = 53 , c = 1100 , d = 11;

    if (a > b && a > c && a > d){
        printf ("the greatest of all is %d", a);
    } 
    if (b > a && b > c && b > d){
        printf ("the greatest of all is %d", b);
    } 
    if (c > a && c > b && c > d){
        printf ("the greatest of all is %d", c);
    } 
    if (d > a && d > c && d > c){
        printf ("the greatest of all is %d", d);
    } 


    return 0;
}