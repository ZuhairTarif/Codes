import java.util.Scanner;
public class CandiesAnd2Sis {
	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int t;
		double n;
		int ans;
		t = input.nextInt();
		for(int i= 0;i<t;i++)
		{
			ans=0;
			n = input.nextDouble();
			ans = (int) (Math.ceil((n/2))-1);
			System.out.println(ans);
			
			
		}
		
	}
}


