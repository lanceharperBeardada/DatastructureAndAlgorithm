import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int sum=0;
        for(int i=1;i<=a;i++)
        {
            if((fun2(i-1)<a)&&(fun2(i)>=a))
            {
                sum=(a-fun2(i-1))*i;
                for(int j=1;j<=i-1;j++)
                    sum+=fun1(j);
                break;
            }
        }
        System.out.println(Integer.toString(sum));
        input.close();
    }
    public static int fun1(int n)
    {
        return n*n;
    }
    public static int fun2(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        return sum;
    }
}