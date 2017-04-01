#include <iostream>
#include<math.h>

void massive (int8_t a[], int n);
void max1 (int8_t a[], int n);
void perevorot2 (int8_t a[], int n);
void tablica3 (int8_t a[], int n);
void proverka4 (int8_t a[], int n);
void pechat (int8_t a[], int n);
int8_t binar(int8_t a[],int n);

int main() {
    int n=10;
    int8_t a[n];
    massive(a,n);
    printf("\n");
    char m;
    printf ("введите номер задания:");
    scanf ("%c",&m);
    switch(m) {
        case '1': max1(a,n);break;
        case '2': perevorot2(a,n);pechat(a,n);break;
        case '3': tablica3(a,n);break;
        case '4': proverka4(a,n);
    }
}
void massive (int8_t a[],int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = (rand() % 143) - 50;
        printf ("%10d",a[i]);
    }
}
    void max1 (int8_t a[], int n) {
        int c;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                c = a[j + 1];
                a[j + 1] = a[j];
                a[j] = c;
            }
        }
    printf ("%d",a[n-1]);
    }
void perevorot2 (int8_t a[], int n){
    int8_t c;
    for (int i=0;i<(n/2);i++) {
        c=a[i];
        a[i] = a[n -1- i];
        a[n-1-i]=c;
    }
}
void tablica3 (int8_t a[], int n){
    int8_t b[n];
    for (int i = 0; i < n; i++){
        int k=1;
        b[i]=0;
        for (int j = 0; j < 8; j++) {
            int kk;
            kk=a[i] & k;
            kk=(kk>>j);
            b[i] =b[i]+kk*pow(10,j);
            k=(k<<j);
        }
        printf("%c%c%d%c%c%3d%20o%20X%20d\n", 97,91,i,93,61,a[i],a[i],a[i],b[i]);
    }
    //for (int i = 0; i < n; i++)
      //  printf("%c%c%d%c%c%3d%20o%20X%20d\n", 97,91,i,93,61,a[i],a[i],a[i],b[i]);
}
/*int8_t binar(int8_t a[], int n) {
    int8_t b[n];
    for (int i = 0; i < n; i++){
        int k=1;
        b[i]=0;
        for (int j = 0; j < 8; j++) {
            int kk=a[i] & k;
            kk=(kk>>j);
            b[i] =b[i]+kk*pow(10,j+1);
            k=(k<<j);
        }
    }
    return b;
}*/
void proverka4 (int8_t a[], int n){

}
void pechat (int8_t a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%10d", a[i]);
}