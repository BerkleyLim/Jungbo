/**
 * question4
 * 2022년 10월 기출문제
 */
#include<stdio.h>

int chkover(int w, int h, int j, int i) {
    if (i >= 0 && i < w && j >= 0 && j < h) return 1;
    return 0;
}

int main() {
    int field[4][4] = { {0,1,0,1}, {0,0,0,1}, {1,1,1,0},{0,1,1,1}};
    int mines[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0},{0,0,0,0}};
    int w = 4, h = 4;
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            if (field[y][x] == 0) continue;
            for (int j = y - 1; j <= y + 1; j++) {
                for (int i = x - 1; i <= x + 1; i++) {
                    if (chkover(w,h,j,i) == 1)
                        mines[j][i] += 1;
                }
            }
        }
    }

    /**
     * 결과 값
     */
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            printf("%d ", mines[y][x]);
        }
        printf("\n");
    }
}



/**
 * question3
 * 2023년 4월 기출 문제
 */
//#include<stdio.h>
//void swap(int *a, int idx1, int idx2) {
//    int t = a[idx1];
//    a[idx1] = a[idx2];
//    a[idx2] = t;
//}
//
//void Usort(int *a, int len) {
//    for (int i = 0; i < len-1; i++)
//        for (int j = 0; j <len - 1 -i; j++)
//            if(a[j] > a[j+1])
//                swap(a, j ,j+1);
//}
//
//int main() {
//    int a[] = {85, 75, 50, 100, 95};
//    int nx = 5;
//    Usort(a, nx);
//
//    for (int i = 0; i < nx; i++) {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
//}

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
