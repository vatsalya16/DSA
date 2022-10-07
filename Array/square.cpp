#include<iostream>
using namespace std ;
//square root using binary search

int binary(int n)
{
  int start = 0;
  int end = n ;
  int mid ;
  int ans = -1 ;

  while(start<=end)
  {
    mid = start + (end-start)/2 ;
    int square = mid*mid;
    if(square == n)
    {
      return mid ;
      break;
    }
     if(square < n)
    {
      ans = mid ;
      start = mid + 1 ;
    }
    else
    {
      end = mid -1 ;
    }


  }

  return ans ;
}

double morePrecision(int n , int precision , int tempsol)
{

  double factor = 1 ;
  double ans = tempsol ;
  for(int i = 0 ; i<precision ; i++)
  {
    factor = factor/10 ;
    //0.1
    //0.01
    //0.001    

    for(double j = ans ;  j*j< n ; j = j+factor)
    {
      ans = j ;
    }

  }
  return ans ;
}

int main()
{
  int n ;
  cin>>n ;

    int tempsol = binary(n) ;
    
    cout<<"Answer is "<< morePrecision(n , 3 , tempsol)<<endl;


  return 0 ;
}
