import java.util.Scanner;

public class factorialLargeNumber {

    Scanner sc=new Scanner(System.in);

    long  fac=1,n,i;

    public  void Input(){

        System.out.println("Enter number for find factorial: ");

        n=sc.nextLong();

    }
    public long Output(){

        for(i=1;i<=n;i++){

            fac=fac*i;
        }
        return fac;
    }

    public static void main(String[] args) throws RuntimeException {

        factorialLargeNumber ob=new factorialLargeNumber();

        ob.Input();

        System.out.println("Factorial of GIven Number : "+ob.Output());
    }
}
