/*
Nama Program	: Merge Sort
Nama			: Dimas Satria Prakoso
NPM				: 140810170007
Tanggal Buat	: 20 Maret 2019

Praktikum       : Analisis Algoritma
Tugas           : QUIZ 1

.cpp tested with CodeBlocks 16.01
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 20

using namespace std;

void merge_sort(int, int);
void merge_array(int, int, int, int);

int arr_sort[MAX_SIZE]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

int main() {
    int i;
    /*cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    */
    cout << "\nYour Array Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    merge_sort(0, MAX_SIZE - 1);

    cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    getch();

}

void merge_sort(int i, int j) {
    int m;

    if (i < j) {
        m = (i + j) / 2;
        merge_sort(i, m);
        merge_sort(m + 1, j);
        merge_array(i, m, m + 1, j);
    }
}

void merge_array(int a, int b, int c, int d) {
    int t[50];
    int i = a, j = c, k = 0;

    while (i <= b && j <= d) {
        if (arr_sort[i] < arr_sort[j])
            t[k++] = arr_sort[i++];
        else
            t[k++] = arr_sort[j++];
    }

    while (i <= b)
        t[k++] = arr_sort[i++];

    while (j <= d)
        t[k++] = arr_sort[j++];

    for (i = a, j = 0; i <= d; i++, j++)
        arr_sort[i] = t[j];
}
