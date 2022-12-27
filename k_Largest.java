
// import java.util.Collection;
import java.util.Scanner;
import java.util.Vector;

public class k_Largest {
    Scanner sc = new Scanner(System.in);

    public void getMethod() {
        int i, n, k;
        System.out.println("Enter value of N : ");
        n = sc.nextInt();
        int[] a = new int[n];
        System.out.println("Enter Element of array : ");
        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter value of k for largest ");
        k = sc.nextInt();
        Vector<Integer> v = new Vector<>();
        for (i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("K largest Element  ");
        for (i = n; i > k; i--) {
            v.add(a[i]);
        }
        System.out.println(k + " Largest Element : " + v);
    }

    public static void main(String[] args) {
        k_Largest object = new k_Largest();
        object.getMethod();
    }
}
