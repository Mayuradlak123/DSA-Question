import java.util.*;

public class Decimal_To_Binary {

Scanner sc=new Scanner(System.in);    

public int i,Decimal;

public int a[]=new int [0];

public void TakeDecimal(){

System.out.println("Enter  an Decimal Number : ");

Decimal =sc.nextInt();
}
public void Print_Binary() {

        for(i=1;i<=Decimal;i++){

             System.out.println(Decimal/2);
        }
}
public static void main(String[] args) {

    Decimal_To_Binary db=new Decimal_To_Binary();

    db.TakeDecimal();

    db.Print_Binary();
}
}
