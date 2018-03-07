#include <iostream>

using namespace std;

int main()
{
    int t[10], a;
        for (int i=0; i<10; i++){
        t[i]=i;
    }
    a=1;
    while (a>0){
        cout<<t[a]<<endl;
        a++;
    }
    return 0;
}
