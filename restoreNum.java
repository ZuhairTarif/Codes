import java.util.*;
import java.util.Scanner;

public class restoreNum {
	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int[4];
		for(int i=0; i<4; i++)  
    {  
  
          array[i]=input.nextInt();  
    }  
	Arrays.sort(array);
	int c = array[3]-array[0];
	int b = array[2]-c;
	int a = array[3]-(b+c);
	System.out.println(a + " " +b +" " +c);
	}
		
}



