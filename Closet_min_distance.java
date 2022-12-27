import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class Closet_min_distance {
    Scanner sc = new Scanner(System.in);

    public int Min_distance(int n, String w1, String w2, ArrayList<String> arr) {
        int i, j = 0, k = 0;
        String str = "";
        int m = arr.size();
        System.out.println(m);
        for (i = n - 1; i >= 0; i--) {
            str = arr.get(i);

            // System.out.print(str + " ");
            if (Objects.equals(str, w2)) {
                j = i;
            }
            if (Objects.equals(str, w1)) {
                k = i;
                break;
            }
        }
        // System.out.println(k+" "+j);
        return (j - k) - 1;
    }

    public void Input_function() {
        ArrayList<String> arr = new ArrayList<>();
        String str;
        int n, i;
        System.out.println("Enter Length of array : ");
        n = sc.nextInt();
        System.out.println("Enter Element of arraylist : ");
        for (i = 0; i <= n; i++) {
            str = sc.nextLine();
            arr.add(str);
        }

        String w1, w2;
        System.out.println("Enter First word ");
        w1 = sc.nextLine();
        System.out.println("Enter Second word ");
        w2 = sc.nextLine();
        int min = Min_distance(n, w1, w2, arr);
        if (min > 0) {
            System.out.println("Minimum Distance between word : " + min);
        } else {
            System.out.println("Word not present in arr  ");
        }
    }

    public static void main(String[] args) {
        Closet_min_distance obj = new Closet_min_distance();
        obj.Input_function();
    }
}
