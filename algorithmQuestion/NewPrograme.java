import java.util.*;
public class NewPrograme
{
    public static void main(String[] args)
    {

        Scanner input =new Scanner(System.in);
        String strnum=input.nextLine();
        String reve=new StringBuffer(strnum).reverse().toString();
        int num=Integer.parseInt(strnum);
        if(num>=0)
        {
          int n=Integer.parseInt(reve);
          System.out.print(n);  
        }
        else
        {
            String reve2;
            reve2=reve.substring(0,strnum.length()-1);
            int num2=Integer.parseInt(reve2);
            System.out.print("-");
            System.out.print(num2);
            
        }
        input.close();
    }
}