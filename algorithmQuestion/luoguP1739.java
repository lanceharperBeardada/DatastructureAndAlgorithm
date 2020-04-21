import java.util.*;
public class Main{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        String a;
        a=input.nextLine();
        char [] b=a.toCharArray();
        int num0=0;
        for(char i:b)
        {  
            if(i=='(')
                num0++;
            if(i==')')
                num0--;
            if(i=='@'||num0<0)
                break;
        }
        if(num0==0)
            System.out.println("YES");
        else
            System.out.println("NO");
        input.close();
        
    }
}