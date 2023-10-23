package Recursion;

class SumofDigit {

    public int sumNumber(int n) {
        try {
            if (n == 1) {
                return 1;
            }
            return (n % 10) + sumNumber(n / 10);
        } catch (Exception e) {
            System.out.println("Exception at run time " + e);
        }
        return 9;
    }

    public static void main(String[] args) {
        SumofDigit object = new SumofDigit();
        int n;
        System.out.print("Enter value of n: ");
        n = 686;
        // Scanner sc = new Scanner(System.in);
        // n = sc.nextInt();
        System.out.println("Sum of Given Digit: " + object.sumNumber(n));
    }
}
