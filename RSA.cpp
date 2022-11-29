#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>

using namespace std;

int p, q;
int arr[100000];
void PrimeNumber_maker() {
    arr[1] = -1;
    for (int i = 2; i <= 100000; i++) {
        if (arr[i] == 0) {
            for (int j = 2; i * j <= 100000; j++) {
                arr[i * j] = -1;
            }
        }
    }
    while (1) {
        srand(time(NULL));
        p = (rand() * 9) % 100000;
        if (arr[p] == 0) {
            break;
        }
    }
    while (1) {
        srand(time(NULL));
        q = (rand() * 19) % 100000;
        if (arr[q] == 0) {
            break;
        }
    }
    cout << p << " " << q;

}

void key_maker() {

}

void encryption() {

}

int main()
{

    PrimeNumber_maker();


}
