import java.util.Scanner;

public class Pattern24 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        for (int i = n-1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    System.out.print("  ");
                } else {
                    System.out.print((char) (97+j-i) + " ");
                }
            }
            System.out.println();
        }

    }
}