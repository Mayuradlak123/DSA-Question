//import java.io.*;
import java.util.*;

public class Minimum_Difference{

    Scanner sc=new Scanner (System.in);

    public void TakeInput(){
        int n,i,j,Min=0;
        System.out.println("Enter size of array ");
        n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter lement of array ");
        for(i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                Min=Math.min(a[i]-a[j],Min);
            }
        }
        System.out.println(Min);
    }
    public static void main(String[] args) {
        Minimum_Difference md=new Minimum_Difference();
        md.TakeInput();
    }

}