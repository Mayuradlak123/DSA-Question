import java.util.Scanner;

public class Permutation {

    public void strPermutation(int start, int end, String ans, String str) {
        if (start == end) {
            System.out.println(str);
        }
        for (int j = start; j < end; j++) {
            str.replace(str.charAt(start), str.charAt(j));
            strPermutation(start + 1, end, ans, str);
            str.replace(str.charAt(start), str.charAt(j));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter an String : ");
        str = sc.next();
        Permutation object = new Permutation();
        object.strPermutation(0, str.length(), "", str);
    }

}