import java.util.Scanner;

public class newYear {
	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {

		int n,k;
		n = input.nextInt();
		k = input.nextInt();
		int arr[];
		arr = new int[n+1];
		arr[0] = 0;
		for(int i = 1; i<=n;i++)
		{
			arr[i] = i;
			arr[i] = arr[i]*5;
			
		}
		int count =0;
		int check = k;
		for(int j = 1; j<=n;j++)
		{
			if(check<=240)
			{
				check+=arr[j];
				if(check>240)
				{
					break;
				}
				count++;
			}
		}
		System.out.println(count);
		
		
		
		
		
}
}



