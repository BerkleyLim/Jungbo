/**
 * question3
 * 2023년 4월 기출 문제
 */
#include<stdio.h>
void swap(int *a, int idx1, int idx2) {
    int t = a[idx1];
    a[idx1] = a[idx2];
    a[idx2] = t;
}

void Usort(int *a, int len) {
    for (int i = 0; i < len-1; i++)
        for (int j = 0; j <len - 1 -i; j++)
            if(a[j] > a[j+1])
                swap(a, j ,j+1);
}

int main() {
    int a[] = {85, 75, 50, 100, 95};
    int nx = 5;
    Usort(a, nx);

    for (int i = 0; i < nx; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

/**
 * question2
 * 2023년 4월 기출문제
 */
//#include<stdio.h>
//
//int main() {
//    char* a = "qwer";
//    char* b = "qwtety";
//
//    for (int i = 0; a[i] != '\0'; i++)
//        for (int j = 0; b[j] != '\0'; j++)
//            if (a[i] == b[j])
//                printf("%c", a[i]);
//}


/**
 * question1
 * 2023년 4월 기출문제
 */
//#include<stdio.h>
//
//int main() {
//    char a[] = "Art";   // a = Art
//    char* p = NULL;     // p = Null
//    p = a;              // p = Art
//    printf("%s\n",a);   // Art
//    printf("%c\n", *p); // A
//    printf("%c\n", *a); // A
//    printf("%s\n", p);  // Art
//    for (int i = 0; a[i] != '\0'; i++) { // \0 -> null
//        printf("%c", a[i]);
//    } // Art
//}

//#include <iostream>

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
