#include <iostream>
using namespace std;

class Car
{
public:
    int price;
    string color;
};

// ptr stores the address of a Car object.
void addData(Car *ptr)
{
    // -> accesses members through a pointer.
    ptr->color = "Blue";
    ptr->price = 20;
}

// num is a reference (another name) for the original variable.
void addTen(int &num)
{
    num += 10;
}

int main()
{
    /*
        ============================
        POINTER / REFERENCE EXAMPLES
        ============================
    */

    // int x = 10;
    // addTen(x);
    // cout << x << endl;

    // x is changed because num refers directly to x.

    // Car bmw;

    // &bmw gets the address of the Car object.
    // ptr receives that address.
    // The Car object itself is still on the STACK.

    // addData(&bmw);
    // cout << bmw.color << endl << bmw.price;

    /*
        ============================
        NORMAL 2D ARRAY
        ============================

        Fixed size: 3 rows × 4 columns.
        A local array like this is normally on the STACK.
    */

    int normalMatrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // Print the matrix.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << normalMatrix[i][j] << " ";

        cout << endl;
    }

    /*
        ============================
        DYNAMIC 2D ARRAY
        ============================

        The size is decided at runtime,
        so we use dynamic memory with new.

        Memory created with new is on the HEAP.
    */

    int row, col;

    cout << "Enter Number of Rows: ";
    cin >> row;

    cout << "Enter Number of Columns: ";
    cin >> col;

    // Create an array of row pointers on the HEAP.
    int **dynamicMatrix = new int *[row];

    // Create an integer array for each row.
    for (int i = 0; i < row; i++)
        dynamicMatrix[i] = new int[col];

    // Fill the matrix.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> dynamicMatrix[i][j];
    }

    // Print the matrix.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << dynamicMatrix[i][j] << " ";

        cout << endl;
    }

    /*
        ============================
        FREE THE HEAP MEMORY
        ============================

        Every new/new[] should eventually
        have a matching delete/delete[].
    */

    // Delete each row first.
    for (int i = 0; i < row; i++)
        delete[] dynamicMatrix[i];

    // Then delete the array of pointers.
    delete[] dynamicMatrix;

    /*
        Remember:

        new    -> delete
        new[]  -> delete[]
    */

    return 0;
}