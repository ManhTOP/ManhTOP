//#include <iostream>
//using namespace std;
//int fibonaci(int n){
  //  if(n == 1 || n == 0){
    //    return n;
    //}return fibonaci(n-1) + fibonaci(n-2);
//}
//int main() {
  //  int n;
    //cout << "Nhap n: "; cin >> n;
    //cout << "Day fibonaci cua " << n << " la " << fibonaci(n) << endl;

//    return 0;
//}
#include <iostream>

using namespace std;

long int inRaSo(int n)
{
    long int b = 1;
    long int a = 0;
    long int c;
    if(n < 2){
        return b;
    }
    for (int i = 1; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 0)
        {
            cout << "Nhap lai n > 0\n";
        }
    }while (n < 0);
    cout << inRaSo(n) << "\n";
}