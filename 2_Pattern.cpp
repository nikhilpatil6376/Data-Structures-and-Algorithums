#include <iostream>
using namespace std;

int main(){
    //Simple Pyramid Pattern
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // A 
    // B B
    // C C C
    // D D D D
    // E E E E E
    // int n=5;
    // for(int i=0; i<n; i++){
    // int ch = 65;
    //     for(int j=0; j<=i; j++){
    //         cout<<(char)(ch+i)<<" ";
    //     }
    //     cout<<endl;
    // }


    // A 
    // B C
    // D E F
    // G H I J
    // K L M N O
    // int n=5;
    // int ch = 65;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<(char)(ch)<<" ";
    //         ch += 1;
    //     }
    //     cout<<endl;
    // }

    //Inverted Pyramid Pattern
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
    // int n=5;
    // for(int i=n; i>0;i--){
    //     for(int j=1; j<=i; j++){
    //          cout<<"* ";
    //     }
    //     cout<<endl;
    // } 

    //Flipped Simple Pyramid Pattern
    //         * 
    //       * *
    //     * * * 
    //   * * * * 
    // * * * * * 
    // int n=5;
    // for(int i=n; i>0;i--){
    //     for(int j=0; j<=n; j++){
    //          if(j<i){
    //             cout<<"  ";
    //          }else{
    //             cout<<"* ";
    //          }
    //     }
    //     cout<<endl;
    // }

    //Flipped Inverted Pyramid Pattern
    // * * * * * 
    //   * * * * 
    //     * * * 
    //       * * 
    //         * 
    // int n=5;
    // for(int i=0; i<n;i++){
    //     for(int j=0; j<n; j++){
    //          if(j<i){
    //             cout<<"  ";
    //          }else{
    //             cout<<"* ";
    //          }
    //     }
    //     cout<<endl;
    //  }

    //Triangle Pattern
    //     *     
    //    * *    
    //   * * *   
    //  * * * *  
    // * * * * * 
    // int n = 5;
    // for (int i = n; i > 0; i--) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << ( j< i ? " " : "* ");
    //     }
    //     cout << endl;
    // }

    
    //Inverted Triangle Pattern
    // * * * * * 
    //  * * * *
    //   * * *
    //    * *
    //     *
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout<<(j >= i ? "* " : " ");
    //     }
    //     cout<<endl;
    // }

    //Diamond Shaped Pattern
    //     * 
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    int n = 5;
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            cout << ( j< i ? " " : "* ");
        }
        cout << endl;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<(j >= i ? "* " : " ");
        }
        cout<<endl;
    }

    return 0;
}