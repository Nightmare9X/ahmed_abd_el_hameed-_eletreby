# include <iostream>
using namespace std;
int main(){
//Q1    
// init the main elements i will use
int numbers[10];
int sum = 0;
double product = 1;
int size = sizeof(numbers)/sizeof(numbers[0]);
//for loop to enter the numbers,calc the sum and product
for (int i=0; i<size; i++)
{
cout << "enter the number: ";
cin >> numbers[i];
sum+=numbers[i];
product*=numbers[i];
}
// sum and product print
cout << sum << endl;
cout << product << endl;
//for loop for inorder elements
for (int i=0; i<size; i++)
{
    cout <<numbers[i] <<" ";
}
cout << endl;
//for loop for reversed elements
for (int i=size-1;i>=0;i--)
{
    cout <<numbers[i] <<" ";
}
cout << endl;
cout<<"-------------------------------------------------------------------------------------\n";
//Q2
//initing the items used
int arr2[3][3];
//nested for loops to take elements for user
cout <<"enter 9 numbers\n";
for (int i = 0; i < 3; i++)
{
for (int j = 0;j < 3; j++)
{
    cin >>arr2[i][j];
}
}
//nested for loop to print the matrix
for (int i = 0;i < 3; i++)
{
 for (int j = 0; j < 3; j++)
 {
    cout << arr2[i][j] <<" ";
 }
 cout << endl;
}
// nested for loop for sum and product of each raw
for (int i = 0; i < 3; i++)
{
   int RowSum = 0;
   int RowProduct = 1;
   for ( int j = 0; j < 3; j++)
   {
    RowSum += arr2[i][j];
    RowProduct *= arr2[i][j];
   }
   cout << "row" << i+1 << " sum: " << RowSum << endl;
   cout << "row" << i+1 << " product: " << RowProduct << endl;
}
return 0;
}