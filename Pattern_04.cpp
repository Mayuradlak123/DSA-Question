#include<iostream>
using namespace std;

int main(){
    /*
    #include <iostream>
using namespace std;
int main(){
int i,j;
for (i=1; i<=5; i++){
   for (j=i; j<=5; j++){
             cout <<"*"<<endl;
}
}
}
return 0;
}
    */
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            cout <<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
/* Output
12345
2345
345
45
5
 */