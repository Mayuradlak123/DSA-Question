import java.util.Scanner;

class HackerrankQ1 {
    Scanner sc = new Scanner(System.in);
    int n, i;
    int count = 0, countp = 0, countn = 0;

    int arr[] = new int[1000];

    public void Input() {
        n = sc.nextInt();
        for (i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public void Method() {
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                count++;
            } else if (arr[i] > 0) {
                countp++;
            } else {
                countn++;
            }
        }
        // System.out.println("Alright : "+d);

    }

    public void OP() {
        System.out.println((float) countp / n);
        System.out.println((float) count / n);
        System.out.println((float) countn / n);

    }

    public static void main(String[] args) {
        HackerrankQ1 hq = new HackerrankQ1();
        hq.Input();
        hq.Method();
        hq.OP();
    }
}
