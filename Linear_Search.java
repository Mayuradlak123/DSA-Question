
import java.util.*;

public class Linear_Search{

    Scanner sc=new Scanner(System.in);

    public void Searching(){
        int n,k,i;

        System.out.println("Enter size of array : ");

        n=sc.nextInt();

        int a[]=new int[n];

        System.out.println("Enter element of array ");

        for(i=0;i<n;i++){

            a[i]=sc.nextInt();
        }
        System.out.println("Enter kth element : ");

        k=sc.nextInt();

        for(i=0;i<n;i++){
            
            if(a[i]==k){
                System.out.println("Element found at index "+i);
                break;
            }
        }
    }
    public static void main(String[] args) {

        Linear_Search lc=new Linear_Search();

        lc.Searching();
    }
}