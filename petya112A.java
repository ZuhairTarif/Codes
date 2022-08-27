import java.util.Scanner;
public class petya112A {
	public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        String s = sc.next(); //first string
        s = s.toLowerCase();
        String s1 = sc.next(); //second string
        s1 = s1.toLowerCase();
        //comparing the string lexographically
        int result = s.compareTo(s1);
 
        if (result < 0) {
            System.out.println("-1");
        } else if (result > 0) {
            System.out.println("1");
        } else{
            System.out.println("0");
        }
 
    }
}
