// #include <iostream>
// using namespace std;
//
// class Car {
// public:
//     int price;
//     string color;
// };
//
// // ptr stores the address of a Car object.
// void addData(Car *ptr) {
//     // -> accesses members through a pointer.
//     ptr->color = "Blue";
//     ptr->price = 20;
// }
//
// // num is a reference (another name) for the original variable.
// void addTen(int &num) {
//     num += 10;
// }
//
// int main() {
//     /*
//         ============================
//         POINTER / REFERENCE EXAMPLES
//         ============================
//     */
//
//     // int x = 10;
//     // addTen(x);
//     // cout << x << endl;
//
//     // x is changed because num refers directly to x.
//
//     // Car bmw;
//
//     // &bmw gets the address of the Car object.
//     // ptr receives that address.
//     // The Car object itself is still on the STACK.
//
//     // addData(&bmw);
//     // cout << bmw.color << endl << bmw.price;
//
//
//     /*
//         ============================
//         NORMAL 2D ARRAY
//         ============================
//
//         Fixed size: 3 rows × 4 columns.
//         A local array like this is normally on the STACK.
//     */
//
//     int normalMatrix[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };
//
//     // Print the matrix.
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++)
//             cout << normalMatrix[i][j] << " ";
//
//         cout << endl;
//     }
//
//
//     /*
//         ============================
//         DYNAMIC 2D ARRAY
//         ============================
//
//         The size is decided at runtime,
//         so we use dynamic memory with new.
//
//         Memory created with new is on the HEAP.
//     */
//
//     int row, col;
//
//     cout << "Enter Number of Rows: ";
//     cin >> row;
//
//     cout << "Enter Number of Columns: ";
//     cin >> col;
//
//     // Create an array of row pointers on the HEAP.
//     int **dynamicMatrix = new int *[row];
//
//     // Create an integer array for each row.
//     for (int i = 0; i < row; i++)
//         dynamicMatrix[i] = new int[col];
//
//     // Fill the matrix.
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//             cin >> dynamicMatrix[i][j];
//     }
//
//     // Print the matrix.
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//             cout << dynamicMatrix[i][j] << " ";
//
//         cout << endl;
//     }
//
//
//     /*
//         ============================
//         MATRIX PROBLEMS
//         ============================
//
//         We will practice three common
//         operations on a 2D array:
//
//         1. Find the sum of all elements.
//         2. Find the row with the largest sum.
//         3. Add two matrices together.
//     */
//
//     // Create another dynamic matrix.
//     int **matrix = new int *[row];
//
//     for (int i = 0; i < row; i++)
//         matrix[i] = new int[col];
//
//     /*
//         ----------------------------
//         1. SUM OF THE MATRIX
//         ----------------------------
//
//         Visit every element and add it
//         to the total sum.
//     */
//
//     int matrixSum = 0;
//
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cin >> matrix[i][j];
//             matrixSum += matrix[i][j];
//         }
//     }
//
//     cout << "Matrix Sum: " << matrixSum << endl;
//
//
//     /*
//         ----------------------------
//         2. ROW WITH THE LARGEST SUM
//         ----------------------------
//
//         Calculate the sum of each row,
//         then keep track of the largest one.
//     */
//
//     int maxRowSum = 0;
//     int maxRow = 0;
//
//     for (int i = 0; i < row; i++) {
//         int rowSum = 0;
//
//         for (int j = 0; j < col; j++)
//             rowSum += matrix[i][j];
//
//         if (rowSum > maxRowSum) {
//             maxRowSum = rowSum;
//             maxRow = i;
//         }
//     }
//
//     cout << "Maximum Row: " << maxRow << endl;
//     cout << "Maximum Row Sum: " << maxRowSum << endl;
//
//
//     /*
//         ----------------------------
//         3. SUM OF TWO MATRICES
//         ----------------------------
//
//         Both matrices must have the same
//         number of rows and columns.
//
//         Add elements at the same position:
//         result[i][j] = A[i][j] + B[i][j]
//     */
//
//     int **sumMatrix = new int *[row];
//
//     for (int i = 0; i < row; i++)
//         sumMatrix[i] = new int[col];
//
//     // Add corresponding elements.
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//             sumMatrix[i][j] = matrix[i][j] + dynamicMatrix[i][j];
//     }
//
//     // Print the resulting matrix.
//     cout << "Sum Matrix:" << endl;
//
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//             cout << sumMatrix[i][j] << " ";
//
//         cout << endl;
//     }
//
//
//     /*
//         ============================
//         FREE THE HEAP MEMORY
//         ============================
//
//         Every new/new[] should eventually
//         have a matching delete/delete[].
//     */
//
//     // Delete the rows of each matrix.
//     for (int i = 0; i < row; i++) {
//         delete[] dynamicMatrix[i];
//         delete[] matrix[i];
//         delete[] sumMatrix[i];
//     }
//
//     // Then delete the arrays of pointers.
//     delete[] dynamicMatrix;
//     delete[] matrix;
//     delete[] sumMatrix;
//
//     /*
//         Remember:
//
//         new    -> delete
//         new[]  -> delete[]
//     */
//
//     return 0;
// }
