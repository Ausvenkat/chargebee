*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		String a=s.next();
		int b=s.nextInt();
		for(int i=0;i<a.length();i++)
		{
		System.out.print(a.charAt(i));
        if(b>0)
        {
		System.out.print(",");
		b--;
		}
		}
	}
}
