#include <iostream>
using namespace std;
void print1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void print5(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print6(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // Spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // Stars
    for (int k = 0; k < 2 * i + 1; k++)
    {
      cout << "*";
    }
    // Spaces
    for (int l = 0; l < n - i - 1; l++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // Spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // Stars
    for (int k = 0; k < 2 * n - (2 * i + 1); k++)
    {
      cout << "*";
    }
    // Spaces
    for (int l = 0; l < i; l++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print10(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
    {
      stars = (2 * n - i);
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void print11(int n)
{
  for (int i = 0; i < n; i++)
  {
    int start = 1;
    if (i % 2 == 0)
    {
      start = 1;
    }
    else
    {
      start = 0;
    }
    for (int j = 0; j <= i; j++)
    {
      cout << start << " ";
      start = 1 - start;
    }
    cout << endl;
  }
}
void print12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    // Num
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // Spaces
    for (int k = 1; k <= n - i; k++)
    {
      cout << " ";
    }
    // Spaces
    for (int l = 1; l <= n - i; l++)
    {
      cout << " ";
    }
    // Num
    for (int m = i; m >= 1; m--)
    {
      cout << m;
    }
    cout << endl;
  }
}
void print13(int n)
{
  int num = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
void print14(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A';
    for (int j = 0; j <= i; j++)
    {
      cout << ch;
      ch++;
    }
    ch = 'A';
    cout << endl;
  }
}
void print15(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A';
    for (int j = 0; j < n - i; j++)
    {
      cout << ch;
      ch++;
    }
    ch = 'A';
    cout << endl;
  }
}
void print16(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << ch;
    }
    ch++;
    cout << endl;
  }
}
void print17(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    // Spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // Alphabets
    for (int k = 0; k < 2 * i + 1; k++)
    {
      cout << ch << " ";
      if (k < (2 * i + 1) / 2)
      {
        ch++;
      }
      else
      {
        ch--;
      }
    }
    // Spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    ch = 'A';
    cout << endl;
  }
}
void print18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A' + n - 1 - i; ch <= 'A' + n - 1; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print19(int n)
{
  int inIs = 0;
  for (int i = 0; i < n; i++)
  {
    // Stars
    for (int j = 1; j <= n - i; j++)
    {
      cout << "*";
    }
    // Spaces
    for (int k = 0; k < inIs; k++)
    {
      cout << " ";
    }
    // Stars
    for (int l = 1; l <= n - i; l++)
    {
      cout << "*";
    }
    inIs += 2;
    cout << endl;
  }
  int inIitial = 2 * n - 2;
  for (int i = 1; i <= n; i++)
  {
    // Stars
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    // Spaces
    for (int k = 0; k < inIitial; k++)
    {
      cout << " ";
    }
    // Stars
    for (int l = 1; l <= i; l++)
    {
      cout << "*";
    }
    inIitial -= 2;
    cout << endl;
  }
}
void print20(int n)
{
  int inis = 2 * n - 2;
  for (int i = 0; i < n; i++)
  {
    // Stars
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    // Spaces
    for (int k = 0; k < inis; k++)
    {
      cout << "  ";
    }
    // Stars
    for (int l = 0; l <= i; l++)
    {
      cout << "* ";
    }
    inis -= 2;
    cout<<endl;
  }
  inis=2;
  for(int i=0;i<n-1;i++){
    // Stars
    for(int j=0;j<n-1-i;j++){
      cout<<"* ";
    }
    // Spaces
    for(int k=0;k<inis;k++){
      cout<<"  ";
    }
    // Stars
    for(int l=0;l<n-1-i;l++){
      cout<<"* ";
    }
    inis+=2;
    cout<<endl;
  }
}
void print21(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0||i==n-1||j==0||j==n-1){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
void print22(int n){
  for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
      int top = i;
      int bottom = (2*n-2)-i;
      int right = (2*n-2)-j;
      int left = j;

      cout<<n-(min(min(top,bottom),min(left,right)));
    }
    cout<<endl;
  }
}
int main()
{
  int testCases;
  cin >> testCases;
  for (int i = 0; i < testCases; i++)
  {
    int input;
    cin >> input;
    print22(input);
  }
}