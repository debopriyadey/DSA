import java.util.*;

public class MatrixMultiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row and col of matrix a:");
        int row1 = sc.nextInt();
        int col1 = sc.nextInt();
        int a[][] = new int[row1][col1];
        System.out.println("Enter row and col of matrix b:");
        int row2 = sc.nextInt();
        int col2 = sc.nextInt();
        int b[][] = new int[row2][col2];
        if (row2 != col1) {
            System.out.println("\nMultiplication Not Possible");
        } else {
            System.out.println("Enter values for matrix a");
            for (int i = 0; i < row1; i++){
                for (int j = 0; j < col1; j++){
                    a[i][j] = sc.nextInt();
                }
            }
            System.out.println("Enter values for matrix b");
            for (int i = 0; i < row2; i++){
                for (int j = 0; j < col2; j++){
                    b[i][j] = sc.nextInt();
                }
            }
            int c[][] = new int[row1][col2];
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < col2; j++) {
                    for (int k = 0; k < row2; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }
            }
            for (int i = 0; i < row1; i++){
                for (int j = 0; j < col1; j++){
                    System.out.print(c[i][j]+" ");
                }
                System.out.println();
            }
        }
    }
}
