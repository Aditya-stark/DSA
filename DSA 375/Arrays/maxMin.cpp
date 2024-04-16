#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N ){
    int max = 0, min = A[0];

    for (int i = 0; i < N; i++)
    {
        if(A[i] > max){
            max = A[i];
        }
        else if (A[i] < min)
        {
            min = A[i];
        }
        
    }

    cout << "min = " << min <<"\n"<<"max = "<<max<<endl;

    return min + max;

}

int main(){
    int n = 6;
    int arr[] = {1,2,4,8,1,-5};

    findSum(arr, n); 




    return 0;
}



