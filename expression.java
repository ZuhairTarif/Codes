import java.util.*;
import java.util.Scanner;

public class expression {
	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a,b,c;
		a = input.nextInt();
		b = input.nextInt();
		c = input.nextInt();
		
		int d = a+(b*c);
		int e = a*(b+c);
		int f = a*b*c;
		int g = (a+b)*c;
		int h = a+b+c;
		int ans = Math.max(g,(Math.max(f,(Math.max(e,Math.max(h, d))))));
		System.out.println(ans);
	}
}


