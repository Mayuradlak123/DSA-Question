import java.util.*;
//import java.io.*;
//import java.lang.*;

public class Perfect_Number{
    
    Scanner sc=new Scanner (System.in);

    public  int no,i,sum=0;

    public void TakeNumber(){
       

       System.out.println("Enter an number for check: ");
      
       no=sc.nextInt();        
    }
    public void  IsPerfect(){
        
        for(i=1;i<no;i++){

          if(no%i==0){
              sum=sum+i;
          }
        }
        if(no==sum){
            System.out.println("Perfect Number : ");
        }
        else{
            System.out.println("Not Perfect: ");
        }
        
    }
    public static void main(String[] args) {

     Perfect_Number pn=new Perfect_Number();  

     pn.TakeNumber();

     pn.IsPerfect();
    }
}