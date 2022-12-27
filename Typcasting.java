 import java.util.Scanner; 
 class AccentureQ3{
    Scanner sc=new Scanner(System.in);
    int n;
    String s;
    public void Input(){
        String to ,subject,massage;
        JavaMailSend mail = new JavaMailSend()

        System.out.println("Enter An String : ");

        s=sc.nextLine();

        n=Integer.parseInt(s);

        System.out.println("Let me Check : "+(n*n));
    }
}
class Typcasting{
    public static void main(String[] args) {
        
        
        AccentureQ3 object =new AccentureQ3();

        object.Input();

    }

}
