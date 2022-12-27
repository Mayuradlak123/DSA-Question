import java.util.Scanner;

// The task is Given by Accenture is 
// You take a string and convert into integer
// And return of module of 11 
//String length must be less than 1000
public class AccentureQ3 {
    Scanner sc = new Scanner(System.in);
    int n;
    String s;

    public void Input() {
        if (s.length() > 1000) {

            System.out.println("Enter An String : ");

            s = sc.nextLine();

            n = Integer.parseInt(s);

            System.out.println("Let me Check : " + (n * n));
        }
    }

    public void Result() {
        System.out.println(n % 11);
    }

    public static void main(String[] args) {

        AccentureQ3 object = new AccentureQ3();

        object.Input();

    }
}