import java.util.Scanner;

public class UniversalMatrix {

    private static final int MAX_SIZE = 60;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] arr = new int[MAX_SIZE][MAX_SIZE];
        int[][] arr2 = new int[MAX_SIZE][MAX_SIZE];
        int[][] arr3 = new int[MAX_SIZE][MAX_SIZE];
        int a, b;
        char mat;

        System.out.println("\n----------------------------------------------Welcome to the Universal Matrix Operations--------------------------------------------------\t");
        System.out.print("Enter the number of Rows: ");
        a = scanner.nextInt();
        System.out.print("Enter the number of Columns: ");
        b = scanner.nextInt();

        System.out.println("\nEnter the elements for the 1st Matrix:");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print("Enter element at Mat[" + i + "][" + j + "]: ");
                arr[i][j] = scanner.nextInt();
            }
        }

        System.out.println("\nEnter the elements for the 2nd Matrix:");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print("Enter element at Mat[" + i + "][" + j + "]: ");
                arr2[i][j] = scanner.nextInt();
            }
        }

        System.out.println("\nHere is your 1st Matrix:");
        printMatrix(arr, a, b);

        System.out.println("\nHere is your 2nd Matrix:");
        printMatrix(arr2, a, b);

        System.out.println("\nPlease choose your matrix operation:");
        System.out.println("1. Addition Matrix: A");
        System.out.println("2. Subtraction Matrix: S");
        System.out.println("3. Multiplication Matrix: M");
        System.out.println("4. Division Matrix: D");
        System.out.println("5. Transpose Matrix: T");
        System.out.println("6. Upper Triangular Matrix: U");
        System.out.println("7. Lower Triangular Matrix: L");
        System.out.println("8. Diagonal Matrix: X");
        System.out.println("9. Tri-Diagonal Matrix: O");
        System.out.println("10. Null Matrix: N");
        System.out.print("Enter the Matrix Code: ");
        mat = scanner.next().charAt(0);

        switch (mat) {
            case 'A': // Addition
                System.out.println("\nAddition of Matrix:");
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        arr3[i][j] = arr[i][j] + arr2[i][j];
                    }
                }
                printMatrix(arr3, a, b);
                break;

            case 'S': // Subtraction
                System.out.println("\nSubtraction of Matrix:");
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        arr3[i][j] = arr[i][j] - arr2[i][j];
                    }
                }
                printMatrix(arr3, a, b);
                break;

            case 'M': // Multiplication
                System.out.println("\nMultiplication of Matrix:");
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        arr3[i][j] = 0;
                        for (int k = 0; k < b; k++) {
                            arr3[i][j] += arr[i][k] * arr2[k][j];
                        }
                    }
                }
                printMatrix(arr3, a, b);
                break;

            case 'D': // Division
                System.out.println("\nDivision of Matrix:");
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        arr3[i][j] = arr[i][j] / arr2[i][j];
                    }
                }
                printMatrix(arr3, a, b);
                break;

            case 'T': // Transpose
                System.out.println("\nTranspose of Matrix:");
                System.out.println("1. Transpose of 1st Matrix");
                System.out.println("2. Transpose of 2nd Matrix");
                System.out.println("3. Transpose of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int transposeChoice = scanner.nextInt();

                switch (transposeChoice) {
                    case 1:
                        System.out.println("\nTranspose of 1st Matrix:");
                        printTranspose(arr, a, b);
                        break;
                    case 2:
                        System.out.println("\nTranspose of 2nd Matrix:");
                        printTranspose(arr2, a, b);
                        break;
                    case 3:
                        System.out.println("\nTranspose of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printTranspose(arr, a, b);
                        System.out.println("2nd Matrix:");
                        printTranspose(arr2, a, b);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            case 'U': // Upper Triangular
                System.out.println("\nUpper Triangular Matrix:");
                System.out.println("1. Upper Triangular of 1st Matrix");
                System.out.println("2. Upper Triangular of 2nd Matrix");
                System.out.println("3. Upper Triangular of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int upperChoice = scanner.nextInt();

                switch (upperChoice) {
                    case 1:
                        System.out.println("\nUpper Triangular of 1st Matrix:");
                        printUpperTriangular(arr, a, b);
                        break;
                    case 2:
                        System.out.println("\nUpper Triangular of 2nd Matrix:");
                        printUpperTriangular(arr2, a, b);
                        break;
                    case 3:
                        System.out.println("\nUpper Triangular of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printUpperTriangular(arr, a, b);
                        System.out.println("2nd Matrix:");
                        printUpperTriangular(arr2, a, b);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            case 'L': // Lower Triangular
                System.out.println("\nLower Triangular Matrix:");
                System.out.println("1. Lower Triangular of 1st Matrix");
                System.out.println("2. Lower Triangular of 2nd Matrix");
                System.out.println("3. Lower Triangular of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int lowerChoice = scanner.nextInt();

                switch (lowerChoice) {
                    case 1:
                        System.out.println("\nLower Triangular of 1st Matrix:");
                        printLowerTriangular(arr, a, b);
                        break;
                    case 2:
                        System.out.println("\nLower Triangular of 2nd Matrix:");
                        printLowerTriangular(arr2, a, b);
                        break;
                    case 3:
                        System.out.println("\nLower Triangular of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printLowerTriangular(arr, a, b);
                        System.out.println("2nd Matrix:");
                        printLowerTriangular(arr2, a, b);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            case 'X': // Diagonals
                System.out.println("\nDiagonal Matrix:");
                System.out.println("1. Diagonal of 1st Matrix");
                System.out.println("2. Diagonal of 2nd Matrix");
                System.out.println("3. Diagonal of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int diagonalChoice = scanner.nextInt();

                switch (diagonalChoice) {
                    case 1:
                        System.out.println("\nDiagonal of 1st Matrix:");
                        printDiagonals(arr, a);
                        break;
                    case 2:
                        System.out.println("\nDiagonal of 2nd Matrix:");
                        printDiagonals(arr2, a);
                        break;
                    case 3:
                        System.out.println("\nDiagonal of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printDiagonals(arr, a);
                        System.out.println("2nd Matrix:");
                        printDiagonals(arr2, a);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            case 'O': // Tri-Diagonal
                System.out.println("\nTri-Diagonal Matrix:");
                System.out.println("1. Tri-Diagonal of 1st Matrix");
                System.out.println("2. Tri-Diagonal of 2nd Matrix");
                System.out.println("3. Tri-Diagonal of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int triDiagonalChoice = scanner.nextInt();

                switch (triDiagonalChoice) {
                    case 1:
                        System.out.println("\nTri-Diagonal of 1st Matrix:");
                        printTriDiagonal(arr, a, b);
                        break;
                    case 2:
                        System.out.println("\nTri-Diagonal of 2nd Matrix:");
                        printTriDiagonal(arr2, a, b);
                        break;
                    case 3:
                        System.out.println("\nTri-Diagonal of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printTriDiagonal(arr, a, b);
                        System.out.println("2nd Matrix:");
                        printTriDiagonal(arr2, a, b);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            case 'N': // Null Matrix
                System.out.println("\nNull Matrix:");
                System.out.println("1. Null of 1st Matrix");
                System.out.println("2. Null of 2nd Matrix");
                System.out.println("3. Null of Both Matrices");
                System.out.print("Enter Your Choice: ");
                int nullChoice = scanner.nextInt();

                switch (nullChoice) {
                    case 1:
                        System.out.println("\nNull of 1st Matrix:");
                        printNullMatrix(arr, a, b);
                        break;
                    case 2:
                        System.out.println("\nNull of 2nd Matrix:");
                        printNullMatrix(arr2, a, b);
                        break;
                    case 3:
                        System.out.println("\nNull of Both Matrices:");
                        System.out.println("1st Matrix:");
                        printNullMatrix(arr, a, b);
                        System.out.println("2nd Matrix:");
                        printNullMatrix(arr2, a, b);
                        break;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                        break;
                }
                break;

            default:
                System.out.println("Invalid matrix code. Please try again.");
                break;
        }
    }

    private static void printMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }

    private static void printTranspose(int[][] matrix, int rows, int cols) {
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }

    private static void printUpperTriangular(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i <= j) {
                    System.out.print(matrix[i][j] + "\t");
                } else {
                    System.out.print("0\t");
                }
            }
            System.out.println();
        }
    }

    private static void printLowerTriangular(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i >= j) {
                    System.out.print(matrix[i][j] + "\t");
                } else {
                    System.out.print("0\t");
                }
            }
            System.out.println();
        }
    }

    private static void printDiagonals(int[][] matrix, int size) {
        System.out.println("Main Diagonal:");
        for (int i = 0; i < size; i++) {
            System.out.print(matrix[i][i] + "\t");
        }
        System.out.println();

        System.out.println("Secondary Diagonal:");
        for (int i = 0; i < size; i++) {
            System.out.print(matrix[i][size - i - 1] + "\t");
        }
        System.out.println();
    }

    private static void printTriDiagonal(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i == j || i == j + 1 || i == j - 1) {
                    System.out.print(matrix[i][j] + "\t");
                } else {
                    System.out.print("0\t");
                }
            }
            System.out.println();
        }
    }

    private static void printNullMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    System.out.print(matrix[i][j] + "\t");
                } else {
                    System.out.print("0\t");
                }
            }
            System.out.println();
        }
    }
}
