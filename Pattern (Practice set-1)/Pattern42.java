import java.util.Scanner;

public class Pattern42 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                if (j > i) {
                    System.out.print(" ");
                } else {
                    System.out.print((char) (97 + (count++)%26) + " ");
                }
            }
            System.out.println();
        }
        
    }
}