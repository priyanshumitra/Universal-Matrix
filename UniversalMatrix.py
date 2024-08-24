def input_matrix(rows, cols, matrix_num):
    matrix = []
    print(f"\nEnter Your's Elements in The {matrix_num} Matrix:-")
    for i in range(rows):
        row = []
        for j in range(cols):
            element = int(input(f"Enter the Element in Mat[{i}][{j}]: "))
            row.append(element)
        matrix.append(row)
    return matrix

def print_matrix(matrix, title):
    print(f"\nHere is Your {title} Matrix:-\n")
    for row in matrix:
        print("\t".join(map(str, row)))
    print("\n")

def add_matrices(matrix1, matrix2):
    return [[matrix1[i][j] + matrix2[i][j] for j in range(len(matrix1[0]))] for i in range(len(matrix1))]

def subtract_matrices(matrix1, matrix2):
    return [[matrix1[i][j] - matrix2[i][j] for j in range(len(matrix1[0]))] for i in range(len(matrix1))]

def multiply_matrices(matrix1, matrix2):
    result = [[0 for _ in range(len(matrix2[0]))] for _ in range(len(matrix1))]
    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    return result

def transpose_matrix(matrix):
    return [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]

def upper_triangular(matrix):
    return [[matrix[i][j] if i <= j else 0 for j in range(len(matrix[0]))] for i in range(len(matrix))]

def lower_triangular(matrix):
    return [[matrix[i][j] if i >= j else 0 for j in range(len(matrix[0]))] for i in range(len(matrix))]

def diagonal_elements(matrix):
    left_to_right = [matrix[i][i] for i in range(len(matrix))]
    right_to_left = [matrix[i][len(matrix) - i - 1] for i in range(len(matrix))]
    return left_to_right, right_to_left

def tri_diagonal(matrix):
    return [[matrix[i][j] if i == j or i == j - 1 or i == j + 1 else 0 for j in range(len(matrix[0]))] for i in range(len(matrix))]

def null_matrix(rows, cols):
    return [[0 for _ in range(cols)] for _ in range(rows)]

def main():
    print("\n----------------------------------------------Welcome in the Universal of 2D Matrix--------------------------------------------------\n")

    rows = int(input("Enter the Row: "))
    cols = int(input("Enter the Column: "))

    matrix1 = input_matrix(rows, cols, '1st')
    matrix2 = input_matrix(rows, cols, '2nd')

    print_matrix(matrix1, '1st')
    print_matrix(matrix2, '2nd')

    print("Please Choose Your Matrix Operation From there: \n")
    print("1.Addition Matrix: A\n2.Subtraction Matrix: S\n3.Multiplication Matrix: M\n4.Transpose Matrix: T\n5.Upper Triangular Matrix: U")
    print("6.Lower Triangular Matrix: L\n7.Diagonal Matrix: X\n8.Tri-Diagonal Matrix: O\n9.Null Matrix: N\n")

    operation = input("Enter The Matrix Code: ").upper()

    if operation == 'A':
        result = add_matrices(matrix1, matrix2)
        print_matrix(result, 'Addition')

    elif operation == 'S':
        result = subtract_matrices(matrix1, matrix2)
        print_matrix(result, 'Subtraction')

    elif operation == 'M':
        result = multiply_matrices(matrix1, matrix2)
        print_matrix(result, 'Multiplication')

    elif operation == 'T':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            result = transpose_matrix(matrix1)
            print_matrix(result, 'Transpose of the 1st')
        elif choice == '2':
            result = transpose_matrix(matrix2)
            print_matrix(result, 'Transpose of the 2nd')
        elif choice == '3':
            result1 = transpose_matrix(matrix1)
            result2 = transpose_matrix(matrix2)
            print_matrix(result1, 'Transpose of the 1st')
            print_matrix(result2, 'Transpose of the 2nd')
        else:
            print("Invalid choice. Please Try Again.")

    elif operation == 'U':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            result = upper_triangular(matrix1)
            print_matrix(result, '1st Upper Triangular')
        elif choice == '2':
            result = upper_triangular(matrix2)
            print_matrix(result, '2nd Upper Triangular')
        elif choice == '3':
            result1 = upper_triangular(matrix1)
            result2 = upper_triangular(matrix2)
            print_matrix(result1, '1st Upper Triangular')
            print_matrix(result2, '2nd Upper Triangular')
        else:
            print("Invalid choice. Please Try Again.")

    elif operation == 'L':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            result = lower_triangular(matrix1)
            print_matrix(result, '1st Lower Triangular')
        elif choice == '2':
            result = lower_triangular(matrix2)
            print_matrix(result, '2nd Lower Triangular')
        elif choice == '3':
            result1 = lower_triangular(matrix1)
            result2 = lower_triangular(matrix2)
            print_matrix(result1, '1st Lower Triangular')
            print_matrix(result2, '2nd Lower Triangular')
        else:
            print("Invalid choice. Please Try Again.")

    elif operation == 'X':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            left_to_right, right_to_left = diagonal_elements(matrix1)
            print(f"\nLeft to Right Diagonal Elements of 1st Matrix:\n{left_to_right}")
            print(f"\nRight to Left Diagonal Elements of 1st Matrix:\n{right_to_left}")
        elif choice == '2':
            left_to_right, right_to_left = diagonal_elements(matrix2)
            print(f"\nLeft to Right Diagonal Elements of 2nd Matrix:\n{left_to_right}")
            print(f"\nRight to Left Diagonal Elements of 2nd Matrix:\n{right_to_left}")
        elif choice == '3':
            left_to_right1, right_to_left1 = diagonal_elements(matrix1)
            left_to_right2, right_to_left2 = diagonal_elements(matrix2)
            print(f"\nLeft to Right Diagonal Elements of 1st Matrix:\n{left_to_right1}")
            print(f"\nRight to Left Diagonal Elements of 1st Matrix:\n{right_to_left1}")
            print(f"\nLeft to Right Diagonal Elements of 2nd Matrix:\n{left_to_right2}")
            print(f"\nRight to Left Diagonal Elements of 2nd Matrix:\n{right_to_left2}")
        else:
            print("Invalid choice. Please Try Again.")

    elif operation == 'O':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            result = tri_diagonal(matrix1)
            print_matrix(result, '1st Tri-Diagonal')
        elif choice == '2':
            result = tri_diagonal(matrix2)
            print_matrix(result, '2nd Tri-Diagonal')
        elif choice == '3':
            result1 = tri_diagonal(matrix1)
            result2 = tri_diagonal(matrix2)
            print_matrix(result1, '1st Tri-Diagonal')
            print_matrix(result2, '2nd Tri-Diagonal')
        else:
            print("Invalid choice. Please Try Again.")

    elif operation == 'N':
        print("If you want to Print Only 1st Matrix Then Type (1)\nIf you want to Print Only 2nd Matrix Then Type (2)\nIf you want to Print Both Matrices Then Type (3)")
        choice = input("\nEnter Your Choice: ")
        if choice == '1':
            result = null_matrix(rows, cols)
            print_matrix(result, '1st Null')
        elif choice == '2':
            result = null_matrix(rows, cols)
            print_matrix(result, '2nd Null')
        elif choice == '3':
            result1 = null_matrix(rows, cols)
            result2 = null_matrix(rows, cols)
            print_matrix(result1, '1st Null')
            print_matrix(result2, '2nd Null')
        else:
            print("Invalid choice. Please Try Again.")

    else:
        print("Invalid Matrix Code. Please Try Again.")

if __name__ == "__main__":
    main()
