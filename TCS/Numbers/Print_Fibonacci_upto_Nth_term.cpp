#include<bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  if (n == 0) {
    cout << 0;
  } else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
  } else {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib[i] << " ";
    }
  }
}

// #include<bits/stdc++.h>
// using namespace std;
// int fiibo(int n)
// {
//     if(n<=0) return 0;
//     if(n==1) return 1;
//     return fiibo(n-2)+fiibo(n-1);
// }
// int main()
// {
//   cout<<fiibo(7);
//   return 0;
// }