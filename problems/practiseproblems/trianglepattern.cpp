#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of rows: " << "\n";
    cin >> n;

//For straight Triangle.
/*
    int c = n + (n - 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (c / 2) - i; j++){
            cout << " ";
        }

        for(int j = (c / 2) - i; j <= (c / 2) + i; j++){
            cout << "*";
        }

        for(int j = (c / 2) + i; j < c; j++){
            cout << " ";
        }

        cout << "\n";
    }
*/

//For inverted Triangle.
/*
    int c = n + (n - 1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for(int j = i; j < c - i; j++){
            cout << "*";
        }

        for(int j = c - i; j < c; j++){
            cout << " ";
        }

        cout << "\n";
    }
*/

//For Trapezium.
    int c;

    if(n % 2 == 0){
        int a = n / 2;
        c = a + (a - 1);

        for(int i = 0; i < n / 2; i++){
            for(int j = 0; j < (c / 2) - i; j++){
                cout << " ";
            }

            for(int j = (c / 2) - i; j <= (c / 2) + i; j++){
                cout << "*";
            }

            for(int j = (c / 2) + i; j < c; j++){
                cout << " ";
            }

            cout << "\n";
        }
                
        for(int i = 0; i < n / 2; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }

            for(int j = i; j < c - i; j++){
                cout << "*";
            }

            for(int j = c - i; j < c; j++){
                cout << " ";
            }

            cout << "\n";
        }

    }else{
        int a = n / 2;
        a += 1;
        c = a + (a - 1);

        for(int i = 0; i <= n / 2; i++){
            for(int j = 0; j < (c / 2) - i; j++){
                cout << " ";
            }

            for(int j = (c / 2) - i; j <= (c / 2) + i; j++){
                cout << "*";
            }

            for(int j = (c / 2) + i; j < c; j++){
                cout << " ";
            }

            cout << "\n";
        }

        for(int i = 1; i <= n / 2; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }

            for(int j = i; j < c - i; j++){
                cout << "*";
            }

            for(int j = c - i; j < c; j++){
                cout << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}