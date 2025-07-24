#include <iostream>

using namespace std;


void piramida(){
 int n = 15;
 int i,j;
 for(i = 1; i < n; i++){
    for(j = 1; j < n - i; j++){
      cout << " ";
    }
    for(j = 1; j < i; j++){
        cout << "*";
    }
     for(j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;

 }


}



int main()
{
    piramida();
    return 0;
}
