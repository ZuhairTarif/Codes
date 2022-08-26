import java.util.Scanner;
public class DivProb {
	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a,b;
		int c = input.nextInt();
		for(int i = 0;i<c;i++)
		{
			a = input.nextInt();
			b = input.nextInt();
			if(a%b==0)
			{
				System.out.println("0");
			}
			else 
			{
				System.out.println(b-a%b);
			}
		}
		
	}
}


