#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

void printRange(int start, int end, bool (*func)(int)) {
    for(int i = start; i <= end; i++){
        if(func(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int findNth(int n, bool (*func)(int)) {
    int count = 0;

    for(int i = 1; i <= 1000000; i++){  // bigger range
        if(func(i)){
            count++;
            if(count == n){
                return i;
            }
        }
    }

    return -1;
}

bool isPrime(int divi){
    
    if(divi == 2 || divi == 3)  return true;
    if(divi%2 == 0 || divi%3 == 0){
        return false;
    }

    for(long long i=5;i*i<=divi;i+=6){
        if(divi%i == 0 || divi % (i+2) == 0){
            return false;
        }
    }
    return true;
}

bool isPrime2(long long divi){
    // for(int i=2;i*i<=divi;i++){
    //     if(divi%i == 0){
    //         return false;
    //     }
    // }
    // return true;

    //more optimized
    if(divi == 2 || divi == 3)  return true;
    if(divi%2 == 0 || divi%3 == 0){
        return false;
    }

    for(long long i=5;i*i<=divi;i+=6){
        if(divi%i == 0 || divi % (i+2) == 0){
            return false;
        }
    }
    return true;
}

int count(int n){
    int cnt = 0;
    while(n--){
        n = n/10;
        cnt++;
    }

    return cnt;
}

int rev(int ans){
    int r = 0;
    while(ans>0){
        int rem = ans%10;
        r = (r*10) + rem;
        ans /= 10;
    }
    return r;
}

long long power(long long base , long long exp){
    long long p = 1;
    while(exp--){
        p *= base;
    }
    return p;
}

int adjacentSwap(int n){
    int ans = 0;
    int cnt = count(n);

    if(cnt%2 == 0){
        while(n > 0){
            ans = (ans*100) + (n%100);
            n /= 100;
        }
        return rev(ans);
    }
    else{
        int lastD = n%10;
        n /= 10;
        while(n > 0){
            ans = (ans*100) + (n%100);
            n /= 100;
        }
        
        int r =  rev(ans);
        ans = (r*10) + lastD;
        return ans;
    }
    return -1;
  
}

long long sumOfDivisors(int n) {
    long long sum = 0;
    
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    return sum;
}

int powerInc(int n){
    int sum = 0;

    // int first = n/(power(10 , (count(n) - 1)));
    int rem = n%10;
    // sum += power(rem,first);
    // n /= 10;
    while(n>9){
        int exp = n % 10;
        n /= 10;

        int base = n % 10;
        sum += power(base, exp);
    }

    sum += power(rem , n);

    return sum;

}

int naturalSum(int n){
    int sum = 0;
    for(int i=0;i<n+1;i++){
        sum += i;
    }
    return  sum;
}

double factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (n * factorial(n-1));
}

void primeFactors(int n){
    int divi = 2;
    while(n>1){
        while(n % divi == 0){
            cout << divi << " " ;
            n = n/divi;
        }
        divi++;
        if(!isPrime(divi)){
            divi++;
        }
    }
}

bool isHappy(int n) {
    int ans = 0;

    while(n > 4){
        ans = 0;

        while(n>0){
            int rem = n % 10;
            ans += rem * rem;
            n = n/10;
        }
        n = ans;
    }
    if(n == 1)  
        return true;
            
    return false;
}

int gcd(int a ,int b){
    while(b != 0){
        int rem = a % b;  
        a = b; 
        b = rem;
    }
    return a;
}
    
int lcm(int a, int b) {
   int g = gcd(a, b); 
   int ans = (a / g) * b; 
        
    return ans;
}

bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    int temp = x;
    long long ans = 0;
    while(temp>0){
        int rem = temp%10;
        ans = (ans * 10) + rem;
        temp = temp/10;
    }
    if(ans == x){
       return true ;
    }

    return false;
}

bool perfectSqrt(int n){
    for(int i=0;i*i<=n;i++){
        if(i*i == n){
            return true;
        }
    }
    return false;
}

bool armstrongNumber(int n) {
    int sum = 0;
    int temp = n;
    
    int totalNums = count(n);
        
    temp = n;
    while(temp > 0){
        int rem = temp%10;
        sum += (pow(rem , totalNums));
        temp = temp/10;
    }
        
    if(sum == n){
        return true;
    }
    return false;
    
}

bool strongNum(int n){
    int temp = n;
    int sum = 0;
    while(temp>0){
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(n == sum){
        return true;
    }
    return false;
}

bool checkPerfectNumber(int num) {
    int sum = 1;

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            sum += i;

            if(i != num / i){
                sum += num / i;
            }
        }
    }

    return num != 1 && sum == num;
}

bool HarshadNum(int x) {
    int sum = 0;
    int temp = x;

    while(temp > 0){
        int rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    if(x%sum == 0)
        return true;

    return false;
}

bool abundantNo(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum > n){
        return true;
    }
    return false;
}

bool isAutomorphic(int n) {
    int sqr = n * n;

    while(n > 0){
        if(n % 10 != sqr % 10){
            return false;
        }
        n /= 10;
        sqr /= 10;
    }     
    return true;     
}

bool magicNum(int n){
    while(n > 4){
        int sum = 0;
        while(n > 0){
            int rem = n%10;
            sum += rem*rem;
            n /= 10;
        }
        n = sum;
    }
    if(n == 1){
        return true;
    }
    return false;
}

bool friendlyPair(int a , int b){

    long long ai = sumOfDivisors(a) / a;
    long long ai2 = sumOfDivisors(b) / b;

    if(ai == ai2)   return true;
    return false;
}

bool isNeon(int n) {
    int sqr = n * n;
    int sum = 0;
    
    while(sqr > 0){
        sum += sqr % 10;
        sqr /= 10;
    }
    
    return sum == n;
}

bool isSpy(int n) {
    int sum = 0;
    int mul = 1;
    
    while(n > 0){
        int rem = n % 10;
        sum += rem;
        mul *= rem;
        n /= 10;
    }
    
    return sum == mul;
}

bool isSunny(int n) {
    int x = n + 1;
    int root = sqrt(x);

    return root * root == x;
}

bool isDisarium(int N) {
    int sum = 0;    
    int count = log10(N) + 1;
    int temp = N;
    
    while(temp > 0){
        int rem = temp % 10;
        sum += pow(rem, count);
        count--;
        temp = temp/10;
    }
    
    if(N == sum){
        return true;
    }
    return false;
}

bool isPronic(int n) {
    for(int i=0;i*(i + 1) <= n;i++){
        if(i * (i + 1) == n){
            return true;
        }
    }
    return false;
}

bool isTrimorphic(int n) {
    long long cube = 1LL * n * n * n;
    
    int temp = n;
    
    while(temp > 0){
        if(temp % 10 != cube % 10){
            return false;
        }
        temp /= 10;
        cube /= 10;
    }
    
    return true;
}

bool isEvil(int n) {
    int count = 0;
    
    while(n > 0){
        if(n%2 == 1){
            count++;
        }
        n /= 2;
    }
    
    return count % 2 == 0;
}


int genericRoot(int n) {
    while (n >= 10) {   
        int sum = 0;
        
        while (n > 0) {
            sum += n % 10;  
            n = n / 10;
        }
        n = sum;   
    }
    return n;
}

void countZeroOne(int n) {
    int zeroCount = 0, oneCount = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 0)
            zeroCount++;
        else if (digit == 1)
            oneCount++;

        n = n / 10;
    }

    cout << "Nums of 0 " << zeroCount << endl;
    cout << "Nums of 1 " << oneCount << endl;
}

int sumWithoutPlus(int a, int b) {
    while (b != 0) {
        int carry = (a & b);   
        a = a ^ b;            
        b = carry << 1; 
    }
    return a;
}

bool multipleOf3(int n) {
    if (n < 0) n = -n;
    if (n == 0) return true;
    if (n == 1) return false;

    int odd = 0, even = 0;

    while (n) {
        if (n & 1) odd++;
        n >>= 1;

        if (n & 1) even++;
        n >>= 1;
    }

    return multipleOf3(abs(odd - even));
}

int multiplyBy7(int n) {
    return (n << 3) - n;   // 8n - n = 7n
}

bool isLucky(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7) return false;
        n /= 10;
    }
    return true;
}

void reverseStr(string &s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}


int power1(int a, int b) {
    if (b == 0) return 1;

    int half = power(a, b/2);

    if (b % 2 == 0)
        return half + half; 
    else
        return a + (half + half);
}

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}


vector<int> sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }

    vector<int> res;
    for (int i = 2; i <= n; i++)
        if (prime[i]) res.push_back(i);

    return res;
}

bool isPalindrome2(int n) {
    int rev = 0, temp = n;
    while (temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}


int fact(int n) { 
    if(n<=1)    return 1;
    return n*fact(n-1);
}


vector<vector<int>> pascal(int n) {
    vector<vector<int>> res(n);

    for (int i = 0; i < n; i++) {
        res[i].resize(i+1, 1);
        for (int j = 1; j < i; j++)
            res[i][j] = res[i-1][j-1] + res[i-1][j];
    }
    return res;
}

int largestMultiple(vector<int>& arr) {
    int ans = -1;
    for (int x : arr) {
        if (x % 2 == 0 && x % 3 == 0 && x % 5 == 0)
            ans = max(ans, x);
    }
    return ans;
}

double power(double x, int n) {
    double res = 1;
    for (int i = 0; i < n; i++) res *= x;
    return res;
}



// vector<int> primeFactors(int n) {
//     vector<int> res;
//     while (n % 2 == 0) {
//         res.push_back(2);
//         n /= 2;
//     }
//     for (int i = 3; i*i <= n; i+=2) {
//         while (n % i == 0) {
//             res.push_back(i);
//             n /= i;
//         }
//     }
//     if (n > 2) res.push_back(n);
//     return res;
// }

bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return s*s == x;
}

bool isFibonacci(int n) {
    return isPerfectSquare(5LL*n*n+4) || isPerfectSquare(5LL*n*n-4);
}

void hanoi(int n, char src, char dest, char c) {
    if (n == 0) return;
    hanoi(n-1, src, c, dest);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    hanoi(n-1, c, dest, src);
}


int largestDigit(int n){
    int maxi = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit > maxi){
            maxi = digit;
        }
        n = n / 10;
    }

    return maxi;
}

int smallestDigit(int n){
    int mini = 9;

    while(n > 0){
        int digit = n % 10;
        if(digit < mini){
            mini = digit;
        }
        n = n / 10;
    }

    return mini;
}

bool isAmicable(int a, int b){
    if(sumOfDivisors(a) == b && sumOfDivisors(b) == a){
        return true;
    }
    return false;
}

int secondLargest(int n){
    int max1 = -1, max2 = -1;

    while(n > 0){
        int digit = n % 10;

        if(digit > max1){
            max2 = max1;
            max1 = digit;
        }
        else if(digit > max2 && digit != max1){
            max2 = digit;
        }

        n = n / 10;
    }

    return max2;
}

int secondSmallest(int n){
    int min1 = 10, min2 = 10;

    while(n > 0){
        int digit = n % 10;

        if(digit < min1){
            min2 = min1;
            min1 = digit;
        }
        else if(digit < min2 && digit != min1){
            min2 = digit;
        }

        n = n / 10;
    }

    return min2;
}

void countOddEven(int n){
    int odd = 0, even = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit % 2 == 0){
            even++;
        } else {
            odd++;
        }

        n = n / 10;
    }

    cout << "Even digits: " << even << endl;
    cout << "Odd digits: " << odd << endl;
}




int main(){
    // int n = 12345;
    // cout << adjacentSwap(n) << endl;

    // int n = 56;
    // primeFactors(n);

    // int n = 1234;
    // cout << powerInc(n) << endl;

    // int n = 10;
    // cout << naturalSum(n) << endl;

    // int n = 3;
    // cout << 1.0 / (factorial(n)) << endl;

    // double n = 3;
    // double x = 2;
    // cout << (power(x , n)) / (factorial(n)) << endl;

    //happy number
    // int n =15;
    // int c = 0;
    // for(int i=1;c<n;i++){
    //     if(isHappy(i)){
    //         cout << i << " ";
    //         c++;
    //     }
    // }
    // int c = 0;
    // for(int i=999;c<5;i--){
    //     if(isHappy(i)){
    //         cout << i << " ";
    //         c++;
    //     }
    // }
    // int c = 0;
    // int n = 124;
    // for(int i=100;c<n;i++){
    //     if(isHappy(i) && i < 1000){
    //         c++;
    //     }else{
    //         cout << "Not in Range";
    //         break;
    //     }
    // }
    
    // for(int i=1000000;i<=9999999;i++){
    //     if(isHappy(i)){
    //         int temp = i;
    //         int c = 0;
    //         while(temp>0){
    //             int rem = temp%10;
    //             if(rem%2 == 0 && rem != 0 ){
    //                 c++;
    //             }
    //             temp /= 10;
    //         }
    //         if(c >= 2){
    //            cout << i << endl;
    //            break;
    //         }
    //     }
    // }
    
    // int c = 0;
    // for(int i=0;i<=99999999;i++){
    //     if(isHappy(i) && isPalindrome(i)){
    //         cout << i << " ";
    //         c++;
    //     }
    // }
    // cout << c <<endl;
    
    // cout << gcd(6,18) << endl;
    // cout << lcm(6,18) << endl;

    // cout << isPalindrome(1231) << endl;

    // cout << perfectSqrt(4) << endl;

    // for(int i=9999999;i>0;i--){
    //     if(isPrime(i)){
    //         cout << i << endl;
    //         break;
    //     }
    // }

    //nth prime print
    // long long n = 17;
    // long long c = 0;
    // for(long long i=(power(10,n-1)); i <= (power(10,n)) - 1 ;i++){
    //     if(isPrime(i)){
    //         c++;
    //     }
    //     if(c == n){
    //         cout << i << endl;
    //         break;
    //     }
    // }

    //armstrong 
    // int n = 153;
    // cout << armstrongNumber(n) << endl;

    //strong number
    // int n = 145;
    // cout << strongNum(n) << endl;

    //check perfect Number
    // int n = 6;
    // cout << checkPerfectNumber(n) << endl;

    // int n = 18;
    // cout << HarshadNum(n) << endl; 

    //abundant
    // int n = 12;
    // cout << abundantNo(n) << endl;

    //magic
    // int n = 19;
    // cout << magicNum(n) << endl;

    //friendly pair
    // cout << friendlyPair(6,28) << endl;

    //neon
    // cout << isNeon(9) << endl;

    // //spy 
    // cout << isSpy(123) << endl;

    //haappy 
    // cout << isHappy(7) << endl;

    // //sunny 
    // cout << isSunny(8) << endl;

    // cout << revRecursive(1234) << endl;

    // int start = 1, end = 1000;

    // cout << "Palindrome" << end;
    // printRange(start, end, isPalindrome);

    // cout << "isPrime" << end;
    // printRange(start, end, isPrime);

    // cout << "perfectSqrt" << end;
    // printRange(start, end, perfectSqrt);

    // cout << "armstrong" << end;
    // printRange(start, end, armstrongNumber);

    // cout << "strong" << end;
    // printRange(start, end, strongNum);

    // cout << "perfect num" << end;
    // printRange(start, end, checkPerfectNumber);

    // cout << "harshad" << end;
    // printRange(start, end, HarshadNum);

    // cout << "abundant" << end;
    // printRange(start, end, abundantNo);

    // cout << "automorphic" << end;
    // printRange(start, end, isAutomorphic);

    // cout << "magic" << end;
    // printRange(start, end, magicNum);

    // cout << "neon" << end;
    // printRange(start, end, isNeon);

    // cout << "spy" << end;
    // printRange(start, end, isSpy);

    // cout << "happy" << end;
    // printRange(start, end, isHappy);

    // cout << "sunny" << end;
    // printRange(start, end, isSunny);

    // cout << "disarium" << end;
    // printRange(start, end, isDisarium);

    // cout << "pronic" << end;
    // printRange(start, end, isPronic);

    // cout << "trimorphic" << end;
    // printRange(start, end, isTrimorphic);

    // cout << "evil" << end;
    // printRange(start, end, isEvil);

    //nth of all func
    int n = 10;
    cout << "Nth Palindrome: " << findNth(n, isPalindrome) << endl;
    cout << "Nth Prime: " << findNth(n, isPrime) << endl;
    cout << "Nth Perfect Square: " << findNth(n, perfectSqrt) << endl;
    cout << "Nth Armstrong: " << findNth(n, armstrongNumber) << endl;
    cout << "Nth Strong: " << findNth(n, strongNum) << endl;
    cout << "Nth Perfect Number: " << findNth(n, checkPerfectNumber) << endl;
    cout << "Nth Harshad: " << findNth(n, HarshadNum) << endl;
    cout << "Nth Abundant: " << findNth(n, abundantNo) << endl;
    cout << "Nth Automorphic: " << findNth(n, isAutomorphic) << endl;
    cout << "Nth Magic: " << findNth(n, magicNum) << endl;
    cout << "Nth Neon: " << findNth(n, isNeon) << endl;
    cout << "Nth Spy: " << findNth(n, isSpy) << endl;
    cout << "Nth Happy: " << findNth(n, isHappy) << endl;
    cout << "Nth Sunny: " << findNth(n, isSunny) << endl;
    cout << "Nth Disarium: " << findNth(n, isDisarium) << endl;
    cout << "Nth Pronic: " << findNth(n, isPronic) << endl;
    cout << "Nth Trimorphic: " << findNth(n, isTrimorphic) << endl;
    cout << "Nth Evil: " << findNth(n, isEvil) << endl;
    return 0;
}
