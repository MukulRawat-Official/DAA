/*                                BINARY SEARCH  :-  T(n) = O( Log N)
*/

#include <iostream> 
using namespace std;

int binary_search(int arr[], int num, int n)
{
int ub=n,lb=0,mid=0; while( lb <= ub )
{
mid = lb + (ub-lb)/2; if(arr[mid] == num)
return 1; if(arr[mid] < num)
lb = mid + 1; else
ub = mid - 1;
}
return 0;
}

int main()
{
int a[10], num=0, ans=0;
cout<<"Enter the array in sorted form : "; for(int i=0;i<6;i++)
cin>>a[i];

cout<<"Enter the number to be searched : "; cin>>num;
ans = binary_search(a,num,5); if(ans==1)
cout<<num<<" is present in the array"<<endl; if(ans==0)
cout<<num<<" is not present in the array"<<endl;

}
/*OUTPUT:

Enter the array in sorted form : 3 4 6 8 10 12 Enter the number to be searched : 10
10 is present in the array
*/
