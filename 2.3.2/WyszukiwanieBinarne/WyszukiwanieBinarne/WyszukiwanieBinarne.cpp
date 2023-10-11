#include <iostream>
using namespace std;

int funkcja2(int l, int p, int sr, int szukana);
int main()
{
    int szukana = 0;
    cout << "Podaj liczbe ktora chcesz znalezc ";
    cin >> szukana;
    int l = 0;
    int p = 15;
    int sr = (l + p / 2);
    cout << funkcja2(l, p,sr,szukana);
}
int funkcja2(int l, int p, int sr, int szukana) {
    int tablica[15] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
    while (l <= p) {
        if (tablica[sr] == szukana) {
            return sr;
        }
        if (tablica[sr] > szukana) {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }
    return -1;
}