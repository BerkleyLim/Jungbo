/**
 * question1
 * 2023년 4월 기출문제
 */
#include<stdio.h>

int main() {
    char a[] = "Art";   // a = Art
    char* p = NULL;     // p = Null
    p = a;              // p = Art
    printf("%s\n",a);   // Art
    printf("%c\n", *p); // A
    printf("%c\n", *a); // A
    printf("%s\n", p);  // Art
    for (int i = 0; a[i] != '\0'; i++) { // \0 -> null
        printf("%c", a[i]);
    } // Art
}

//#include <iostream>

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
