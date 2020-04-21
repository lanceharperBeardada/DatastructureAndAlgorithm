import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        int a; 
        Scanner input=new Scanner(System.in);
        a = input.nextInt();
        int [] b=new int [a];
     
      
        for(int i=0;i<a;i++)
        {
            b[i]=input.nextInt();
        }
        int [] num_abs=new int [a-1];
        for(int i=0;i<a-1;i++)
        {
            num_abs[i]=Math.abs(b[i+1]-b[i]);
        }
        Arrays.sort(num_abs);
        boolean count=true;
        for(int i=0;i<a-1;i++)
        {
            if(num_abs[i]!=i+1)
                count=false;
        }
        if(count==true)
            System.out.println("Jolly");
        else
            System.out.println("Not jolly");
        input.close();

        
    }
}