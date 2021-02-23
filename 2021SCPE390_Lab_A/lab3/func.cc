/*
        Lab1 Team Programming
        Author: Dov Kruger
        For a description of each function, see:
        https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// scalar functions
// 1 Trent Reichenbach
uint64_t sum(int a, int b)
{
	uint64_t sum = 0;
	for(int i = a; i <= b; i++)
	{
		sum += i;
	}
	return sum;
}
// 2
int prod(int a, int b) {}

// 2 Gabriel Garcia

int prod(int a, int b){
  int result = 1;
  for(int i = a; i <= b; i++)
    result *= i;
  return result;
}
// 2 Claudia MacRae
int prod(int a, int b){
  int p =1;
  for(int i = a; i <= b; i++) p*=i;
  return p;
}
// 3 Anthony Paolantonio
int sumsq(int a, int b) {
    int sum = 0;
    if(a <= b) {
        for(int i = a; i <= b; i++){
            sum += (i*i);
        }
    }
    else {
        for(int i = b; i <= a; i++){
            sum += (i*i);
        }
    }
    
    return sum;
}
//3 Justin Ahn
int sumsq(int a, int b) {
    int s;
    for (int i = a; i <= b; i++){
        s += i * i;
    }
    return s;
}

// 4 Jonathan Cho
bool checkPrime(int a){
  bool isPrime = true;
  if(a==0 || a==1){
    isPrime = false;
    return isPrime;
  }
  if(a == 2){
    return isPrime;
  }
  else{
    for (int c = 2; c <= a/2; c++){
      if(a % c == 0){
	isPrime = false;
	return isPrime;
	break;
      }
    }
  }
}

// 4 Matthew Petrin
bool isPrime(int a){
    if(a<=1){
        return false;
    }
    else{
        for(int i=2; i<a; i++){
            if(a%i==0){
                return false;
            }
        }
    }
    return true;
}

// 5 Zachary Kermitz
int countPrimes(int a, int b) {
  int cnt = 0;
  for (int i = a; i <= b; i++){
    if (isPrime(i) == true) 
      cnt++;
  }
  return cnt;
}
// 6
int gcd(int a, int b) {}

// 6 Andrew Shamis
int gcd(int a, int b)
{
  if (b == 0)
    return a;

  else
   return gcd(b, a % b);
}


// 7
int hypot(int a, int b) {}
// 7 Carlitos Rodriguez
int hypot(int a, int b) {
  a = a*a;
  b = b*b;
  int c;
  c = a+b;
  c = sqrt(c);
  return c;
}
// 8 Eashan Kaushik
int diffsq(int a, int b) {
    int sq = a*a - b*b;
    return sq;
}
// 9 Rhys Lee
int mean2(int a, int b) {
    int average;
  average = (a+b)/2;
  return average;
}
// 10 - Murad Arslaner
double mean3(int a, int b, int c) { 
  return (a + b + c) / 3.0;
}
// 11 Nikola Ciric
int min(int a, int b) {
 if (a < b) {
    return a;
  }
  return b;
}
// 12 John McDermott
int max(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}
// 13
bool isEven(int a) {}

// 14 Piotr Zelazny
double perimeter3(int x1, int y1, int x2, int y2, int x3, int y3) {
  double total =0;
  total =((x3-x1)(x3-x1)+(y3-y1)(y3-y1))+((x2-x1)(x2-x1)+(y2-y1)(y2-y1))+((x3-x2)(x3-x2)+(y3-y2)(y3-y2));
  return total;
}

// array functions
// 1 Nikola Ciric
double mean(int x[], int length) {
 double sum = 0.0;
    double average = 0.0;
    for (int i = 0; i <length; i++) {
      sum += x[i];
    }
    average = sum / length;
    return average;
}

// 2 Claudia MacRae
int max(int x[], int length) {
  int max = x[0];
  for(int i = 1; i < length; i++){
    if(x[i] > max) max = x[i];
  }
  return max;
}

// 2 John McDermott
int max(int x[], int length){
  int value = x[0];
  for (int i = 1; i < length; i++){
    if(x[i] > value)
      max = x[i];
   }
  return value;
 }

// 3 Anthony Paolantonio
int min(int x[], int length) {
    int minval = x[0];
    for(int i = 0; i < length; i++) {
        if(minval > x[i]){
            minval = x[i];
        }
    }
    return minval;
}

// 4 Piotr Zelazny
int prod(int x[], int length) {
  int total =1;
  for(int i =0; i < length; i++) {
    total = total * x[i];
  }
  return total;
}

// 4 Matthew Petrin
int prod(int x[], int n){
    int product=1;
    for(int i=0; i<n; i++){
        product *= x[i];
    }
    return product;
}

// 5 Trent Reichenbach
int sum(int x[], int length) {
	int sum = 0;
	for(int i = 0; i < length; i++)
	{
		sum += x[i];
	}
	return sum;
}

// 5 Zachary Kermitz
int sum( int x[], int len){
  int res = 0;
  for (int i = 0; i < len; i++){
    res = res + x[i];
  }
  return res;
}
// 6
int demean(double x[], int length) { return 0; }
// 6 Andrew Shamis
double demean(double x[], int length) {
  double total = 0;
  double mean = 0;

  for (int i = 0; i < length; i++) {
    total += x[i];
  }

  mean = total / length;

  for (int i = 0; i < length; i++) {
    x[i] -= mean;
    cout << x[i] << " ";
  }
  return 0;
}


// 6 Gabriel Garcia
int demean(double x[], int length) {
  double mean = 0;
  for(int i=0; i < length; i++)
    mean += x[i];
  
  mean /= length;

  for(int i =0; i < length; i++)
    x[i] -= mean;
  
  return 0;
}

// 7 Justin Ahn
int addToEach(double x[], int length, int delta) {
  for (int i = 0; i < length; i ++){
        x[i] += delta;
    }
    return x;
}

// 7 Carlitos Rodriguez
int addToEach(double x[], int length, int delta){
  int i = 0;
  while(i < length){
    x[i] = x[i]+delta;
    cout << x[i] << ", ";
    i++;
  }
  return 0;
}

// 8 Eashan Kaushik 
int countEvens(int x[], int length) {
    int even_count = 0;
    for (int i = 0; i < length; i++) {
        if (x[i] % 2 == 0) {
            even_count++;
        }
    }
    return even_count;
}

// 8 Jonathan Cho
int coutEvens(intx[], int length){
  int evens = 0;
  for(int i = 0; i < length; i++){
    if(x[i] % 2 ==0){
      evens++;
    }
  }
  return evens;
}


// 9 Rhys Lee
int reverse(int x[], int length) {  int temparray[length];
  int count=0;
  for(int i = length-1; i>=0; i--){
    temparray[count]=x[i];
    count = count + 1;
  }
  for(int i = 0; i<length; i++){
    x[i]=temparray[i];
  }
  return 0;}

// 10 - Murad Arslaner
int round(double x[], int length) {
  for (int i = 0; i < length; i++) {
    x[i] = round(x[i]);
  }
  return 0;
}

void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
}

//overloaded function
void print(double a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << ", ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
}

int main() {
  cout << sum(1, 3) << ' ' << sum(1, 100)
       << '\n';  // should work no problem, right?
  cout << sum(1, 1000000)
       << '\n';  // what should this be? Don't assume it's right, check!
	

  cout << prod(2, 5) << '\n';  // 2*3*4*5 = 120
  cout << prod(3, 10) << '\n';
  cout << prod(3, 20) << '\n';  // just note whether you think these are right
  cout << prod(3, 30) << '\n';  // if it overflows, you don't have to fix it
  cout << prod(3, 100) << '\n';
  cout << sumsq(1, 5) << '\n';
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
  cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';
  cout << "diffsq(3,4)=" << diffsq(3, 4) << '\n';
  cout << "mean(1,4)=" << mean2(1, 4) << '\n';
  cout << "mean(1,4,5)=" << mean3(1, 4, 5) << '\n';
  cout << "max(1,5)=" << max(1, 5) << '\n';
  cout << "min(2,5)=" << min(2, 5) << '\n';
  cout << "isEven(5)=" << isEven(5) << '\n';
  cout << "perimeter of tri=" << perimeter3(0, 0, 3, 0, 3, 3) << '\n';

  // array problems
  int arr[] = {1, 4, 3, 2};
  cout << "arr avg=" << mean(arr, 4) << '\n';            // should be 2.5
  cout << "arr max=" << max(arr, 4) << '\n';             // should be 4
  cout << "arr max=" << min(arr, 4) << '\n';             // should be 1
  cout << "arr prod=" << prod(arr, 4) << '\n';           // should be 24
  cout << "arr sum=" << sum(arr, 4) << '\n';             // should be 10
  cout << "count evens=" << countEvens(arr, 4) << '\n';  // should be 10

  int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
  cout << "arr avg=" << mean(arr2, 8) << '\n';
  cout << "arr max=" << max(arr2, 8) << '\n';
  cout << "arr max=" << min(arr2, 8) << '\n';
  cout << "arr prod=" << prod(arr2, 8) << '\n';
  cout << "arr sum=" << sum(arr2, 8) << '\n';

  double arr3[6] = {1, 2, 3, 4, 5, 6};
  demean(arr3, sizeof(arr3) / sizeof(double));
  print(arr3, 6);

  double arr7[] = {2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
  round(arr7, sizeof(arr7) / sizeof(double));
  print(arr7, sizeof(arr7) / sizeof(double));

  cout << "countevens=" << countEvens(arr6, 7) << '\n';
  addToEach(arr6, 7, 3);
  print(arr6, sizeof(arr6) / sizeof(double));

  int r1[] = {1, 2, 3, 4, 5, 6, 7};
  reverse(r1, 7);
  print(r1, 7);

  int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(r2, 8);
  print(r2, 8);
  
}
