/*#include<iostream>
using namespace std ;

//program --------------1

void reverse(int arr[] , int n)
{
      int start = 0;
      int end = n-1 ;

      while(start<=end)
      {
        swap(arr[start] ,arr[end] );
        start++ ;
        end--;
      }

  
}

void printe(int arr[] , int n)
{
  for(int i =0 ; i<n ;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{

    int bull[5]= {2 , 4, -6 , 0 ,  1} ;
    int bake[6]= {9, 0 , 6 , -7 , 2 , 12} ;


    reverse(bull , 5);
    reverse(bake , 6);

    printe(bull , 5);
    printe(bake , 6);



  return 0 ;
}*/




//using vector
#include<iostream>
using namespace std ;
#include<vector>

vector<int> reverse(vector<int> v)
{
  int s = 0 ;
  int e = v.size()-1 ;

  while(s<=e)
  {
    swap(v[s] , v[e]) ;
    s++ ;
    e--;
  }

  return v ;
}


void print(vector<int> v)
{
    for(int i = 0 ; i<v.size() ; i++)
    {
      cout<<v[i]<<" " ;

    }

}


int main()
{
    vector<int> v ;

    v.push_back(11) ;
     v.push_back(7) ;
      v.push_back(3) ;
       v.push_back(12) ;
        v.push_back(4) ;

        vector<int> ans = reverse(v) ;

        print(ans) ;




  return 0 ;
}
