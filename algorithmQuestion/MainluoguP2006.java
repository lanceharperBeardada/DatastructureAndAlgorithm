import java.util.*;
public class MainluoguP2006{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int k=input.nextInt();
        int m=input.nextInt();
        int n=input.nextInt();
        int count=0;
        for(int i=1;i<=m;i++)
        {
            int a=input.nextInt();
            int b=input.nextInt();
        
            if(a==0)
            {
                System.out.print(Integer.toString(i)+" ");
                count=1;
            }
            else{
                int c=k/a;
                if(c*b>=n) {
                    System.out.print(Integer.toString(i) + " ");
                    count=1;
                }
           
            }
        }   
        if (count == 0) {
            System.out.println("-1");
        }
        input.close();
    }
}