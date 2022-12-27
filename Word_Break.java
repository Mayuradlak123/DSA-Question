import java.util.ArrayList;
import java.util.Scanner;

public class Word_Break {
    int n, i;
    String A;
    ArrayList<String> arr = new ArrayList<>();

    Scanner sc = new Scanner(System.in);

    public void Taken() {

        System.out.println("Enter size of array: ");

        n = sc.nextInt();

        System.out.println("Enter String Element : ");

        for (i = 0; i < n; i++) {
            String p = sc.nextLine();
            arr.add(p);
        }
        System.out.println("Enter Value of A: ");

        A = sc.nextLine();

    }

    public int Output(String A, ArrayList<String> B) {

        {
            // code here
            int n = A.length();
            boolean dp[] = new boolean[n];
            for (int i = n - 1; i >= 0; i--) {
                dp[i] = B.contains(A.substring(i, n));
                for (int j = i + 1; j <= n - 1; j++) {
                    dp[i] = dp[i] || (B.contains(A.substring(i, j)) == true && dp[j] == true);
                }
            }
            if (dp[0] == true) {
                return 1;
            }
            return 0;
        }
    }

    public static void main(String[] args) {
        Word_Break wb = new Word_Break();
        wb.Taken();
        // System.out.println(wb.Output(A, arr));
    }
}