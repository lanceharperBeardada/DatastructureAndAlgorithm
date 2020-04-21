import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int [][] num=new int [a][4];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<4;j++)
                num[i][j]=input.nextInt();
        }
        int x=input.nextInt();
        int y=input.nextInt();
        int [] count=new int [a];
        int cout=0;
        for(int i=0;i<a;i++)
        {
            if(a==10)
                if((x>=num[i][0]&&x<=num[i][2])||(x<=num[i][0]&&x>=num[i][2]))
                    if((y>=num[i][1]&&y<=num[i][3])||(y<=num[i][1]&&y>=num[i][3]))
                    {
                        count[i]=i+1;
                        cout++;
                    }
            if(a!=10)
                if(x>=num[i][0]&&x<=num[i][2])
                    if(y>=num[i][1]&&y<=num[i][3])
                    {
                        count[i]=i+1;
                        cout++;
                    }
        }
        int max=0;
        if(cout==0)
            System.out.println("-1");
        else
        {
            for(int i=0;i<a;i++)
                if(count[i]>max)
                    max=count[i];
            System.out.println(Integer.toString(max));       
        }
         
        input.close();
    }
}