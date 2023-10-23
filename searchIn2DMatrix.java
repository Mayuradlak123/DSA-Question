import java.util.Scanner;
import java.util.Vector;

class searchIn2DMatrix {
    boolean searchInMatrix(Vector<Vector<Integer>> vector, int row, int col, int x) {
        int i, j;
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {

            }
        }
        return false;
    }

    public static void main(String[] args) {
        searchIn2DMatrix obj = new searchIn2DMatrix();
        Vector<Vector<Integer>> vector = new Vector<Vector<Integer>>();
        Scanner sc = new Scanner(System.in);
        int row, col, i, j, x;

        System.out.println("Enter row of Matrix: ");
        row = sc.nextInt();

        System.out.println("Enter column of Matrix: ");
        col = sc.nextInt();

        System.out.println("Enter element of Matrix: ");
        int[][] arr = new int[row][col];

        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter x for search in Matrix");
        x = sc.nextInt();
        boolean ans = obj.searchInMatrix(vector, row, col, x);
        if (ans) {
            System.out.println("Element found in Matrix");
        } else {
            System.out.println("Not found");
        }
    }
}