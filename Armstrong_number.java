import  java.util.Scanner;
import  java.lang.RuntimeException;

public class Armstrong_number {

    Scanner sc=new Scanner(System.in);

    public int n,num,sum=0,rem=0;

    public void Input() {

        System.out.println("Enter number for check ");
        n = sc.nextInt();
         num=n;
        while (n != 0) {
            
            rem = n % 10;
            sum = sum + (rem * rem * rem);

            n = n / 10;
        }
    }
        public void CheckNumber(){
        /*I'm putting here some Armstrong number Example for
            Example they can help you to understand the question
             1.  153
             2.  407
             3.  370
             4.  371*/
        if(sum==num){
            System.out.println("Armstrong Numbeer");
        }
        else{
            System.out.println("Not Armstrong Number");
        }
       // System.out.println(sum);
    }

    public static void main(String[] args) throws RuntimeException {

        Armstrong_number an=new Armstrong_number();

            an.Input();
            an.CheckNumber();


    }
}
