// #include <iostream>
// using namespace std;

// int main() {
//     int num[6] = {1, 2 , 3 , 4 , 5 , 6};
//     for (int i = 0; i < 6 ; i++) {
//         cout<<num[i]<<endl;
//     }
//     return 0 ;
// }







// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     for(int i=0; i<5; i++ ){
//         cout<<"Enter the array elements"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=4; i>=0; i--){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }










// #include <iostream>
// using namespace std;

// int main(){
//     float arr[5];
//     for(int i=0; i<5; i++ ){
//         cout<<"Enter the array elements"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }








// #include <iostream>
// using namespace std;

// int main(){
//     char arr[5];
//     for(int i=0; i<5; i++ ){
//         cout<<"Enter the array elements"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }









// #include <iostream>
// using namespace std;

// int main(){
//     double arr[5];
//     for(int i=0; i<5; i++ ){
//         cout<<"Enter the array elements"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int arr[10];
//     for(int i=0; i<10; i++){
//         cout<<"enter the element"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=0; i<10; i++){
//         if(arr[i]%2==0)
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }








//  #include <iostream>
// using namespace std;

// int main(){
//     int arr[10];
//     for(int i=0; i<10; i++){
//         cout<<"enter the element"<<endl;
//         cin>>arr[i];
//     }
//     for(int i=0; i<10; i++){
//         if(arr[i]%2 != 0)
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }








#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
        return false;
    }
    return true;
}

int main(){
    int arr[10];
    cout<<"enter array elements"<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"the prime numbers are: "<<endl;
    for(int i=0; i<10; i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}