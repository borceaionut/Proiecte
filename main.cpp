#include <iostream>

using namespace std;



void romb(){
   int j;
   int i;
   int n = 11;

    for(i = n; i >= 1; i--){
        for(j = 0; j < i; j++){
            cout <<" ";
    }
    for( j = 11; j > i; j--){
         cout << "*";
    }
    for( j = 0; j <= n - i ;j++){
        cout << "*";
    }

    cout << endl;
}
    for(i = 0; i < 12; i++){
        for(j = 0; j < i; j++){
            cout <<" ";
    }
    for( j = 11; j > i; j--){
         cout << "*";
    }
    for( j = 0; j <= n - i;j++){
        cout << "*";
    }
    cout << endl;
}
cout << endl;

}


int main()
{
romb();
    return 0;
}
