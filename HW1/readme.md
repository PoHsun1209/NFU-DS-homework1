# HW 1 自然數之和
## 題目說明
以遞迴實作計算N階層的函式，已知階層計算公式如下

$N! = N + (N-1)! = N + (N-1) + \dots + 2 + 1$

## 1. 解題說明
實作參見檔案sum.cpp，其遞迴函式
```cpp
int sigma(int n){
    if(n<0) throw "n < 0";
    else if(n<=1) return n;
    return n+sigma(n-1);
}
```
此函式遞迴終止條件為當n為0或1，若欲求得$3!$，則呼叫sigma(3)，進入函式後，首先第一層 n = 3 > 1 所以 return n + sigma( n - 1 )，即 3 + sigma( 2 )，接著第二層計算 sigma( 2 )，n = 2 > 1，所以 return 2 + sigma( 1 )，接下來到第三層時，n = 1 <= 1，符合終止條件 ( n <= 1 )，因此回傳 n，即 1。

$ sigma(3) = 3 + sigma(2) = 3+2 + sigma(1) = 3+2+1 = 6$

## 2. 效能分析

- $ S(P) = 1 * n $, 1個變數、n次遞迴
- $ T(P) = C * n $, 每層迴圈所需C時間、n次遞迴
- f(n) = O(n)

## 3. 測試與驗證
測試參見檔案sum.cpp，其主函式
```cpp
int main(){
    int n=0;
    while(cin>>n){             // 一直輸入
        if(n<=0) break;        // 直到輸入小於等於零
        cout<<sigma(n)<<"\n";  // 依據每次輸入，輸出 n! 
    }
    return 0;
}
```
input
```plain
3
7
11

```
output
```plain
6
28
66

```
