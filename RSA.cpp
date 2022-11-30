#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <vector>
#define su 500

using namespace std;

long long p, q, n1, n2, e, d;
int arr[su];
string m;
vector<long long> c;

void PrimeNumber_maker() {
    arr[0] = -1;
    arr[1] = -1;
    for (int i = 2; i <= su; i++) {
        if (arr[i] == 0) {
            for (int j = 2; i * j <= su; j++) {
                arr[i * j] = -1;
            }
        }
    }
    srand(time(NULL));
    int i = (rand() * 9) % su;
    for(;i<su;i++){
        if(arr[i]==0){
            p=i;
            break;
        }
    }
    Sleep(1000);
    int j = (rand() * 9) % su;
    for(;j<su;j++){
        if(arr[j]==0){
            q=j;
            break;
        }
    }

    cout << p << " " << q << " " ;

}

void key_maker() {
    n1 = p * q;
    n2= (p-1) * (q-1);

    //e 구하기
    int stop=0;
    for(int i=n2-1;i>1 &&stop==0;i--){
        for(int j=2;j<i&&stop==0;j++){
            if(n2%j==0 && i%j==0){
                break;
            }else{
                e=i;
                stop=1;
                break;
            }
        }
    }

    //d 구하기
    cout << e << " " ;
    while((e*(rand()+1))%su!=1){
        d=(rand()+1)%su;
    }
    cout << d << " " ;
}


void encryption() {
    for(int i=0;i<m.size();i++){
        long long val=(long long)pow((long long)m[i], e)%n1;
        c.push_back(val);
    }
    for(int i=0;i<c.size();i++){
        cout <<c[i] << " ";
    }
}

int main()
{
    cout << "put sentence\n";
    cin >> m;
    PrimeNumber_maker();
    key_maker();
    encryption();


}
