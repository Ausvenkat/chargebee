import java.util.*;
public class Main
{
	public static void main(String[] args) {
		  Scanner s=new Scanner(System.in);
        String a=s.next(),b="",c="",d="";
        int i,j;
        for(i=0;i<a.length();i++)
        {
        for(j=i;j<a.length();j++)
        {
        b+=a.charAt(j);
        for(int k=j;k>=i;k--)
        {
        c+=a.charAt(k);
        }
        if(b.equals(c)&&c.length()>d.length())
        {
        d=c;
        }
        c="";
        }
        b="";
        }
        System.out.println(d);

	}
}
