import java.util.*;
public class MailuoguP1851{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        while(true)
        {
            int a=funJ(n);
            int b=funJ(a);
            if(b==n&&a!=n)
            {
                System.out.println(n+" "+a);
                input.close();
                break;
            }

            n++;
        }
      
    }
    public static int funJ(int n) {
        int i = 1;
        int sum = 0;
        while (i < n) {
            if (n % i == 0)
                sum += i;
            i++;
        }
        return sum;
    }
}
