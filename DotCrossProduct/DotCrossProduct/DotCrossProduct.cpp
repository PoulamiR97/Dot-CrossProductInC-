#include <iostream>

using namespace std;

constexpr int n = 3;

using namespace std;

/* 
---------------------------------------------------------------
A = a1  i + a2  j + a3  k and B = b1  i + b2  j + b3  k

Dot product = a1 * b1 + a2 * b2 + a3 * b3
---------------------------------------------------------------
*/

// Function to find Dot product
int dotProduct( int arr_A [], int arr_B[] )
{

    int dotprod = 0;

    for (int i = 0; i < n; i++)
        dotprod += arr_A[i] * arr_B[i];

    return dotprod;
}

/*
-------------------------------------------------------------------------------------------------------------
A = a1  i + a2  j + a3  k and B = b1  i + b2  j + b3  k

Cross product =  cross product = (a2 * b3 – a3 * b2)i + (a3 * b1 – a1 * b3)j + (a1 * b2 – a2 * b1)k
-------------------------------------------------------------------------------------------------------------
*/

// Function to find Cross product
void crossProduct(int arr_A[], int arr_B[], int arr_crossProd[])

{

    arr_crossProd[0] = arr_A[1] * arr_B[2] - arr_A[2] * arr_B[1];
    arr_crossProd[1] = arr_A[2] * arr_B[0] - arr_A[0] * arr_B[2];
    arr_crossProd[2] = arr_A[0] * arr_B[1] - arr_A[1] * arr_B[0];

    //for (int i = 0; i < n; i++)
    cout << arr_crossProd[0] << "i + " << arr_crossProd[1] << "j + " << arr_crossProd[2] << "k " ;
}


int main()
{

    int array_A[] = { 1, 2, -3 };
    int array_B[] = { 4, -5, 2 };
    int crossP[n];

    cout << "\n Dot product: \n";
    cout << dotProduct(array_A, array_B) << endl;

    cout << "\n Cross product: \n";
    crossProduct(array_A, array_B, crossP);
    cout << endl;

    return 0;
}
