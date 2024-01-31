import java.util.Scanner;

public class Pattern04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print((char) (65 + (j%26)) + " ");
            }
            System.out.println();
        }

    }
}