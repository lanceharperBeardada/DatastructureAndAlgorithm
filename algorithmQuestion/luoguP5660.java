import java.util.*;
public class Main{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        char [] line=new char[8];
        String a=input.nextLine();
        line=a.toCharArray();
        char i='1';int cout=0;
        for(int b=0;b<8;b++)
        {
            if(line[b]==i)cout++;
        }
        System.out.println(Integer.toString(cout));
        input.close();
    }
}