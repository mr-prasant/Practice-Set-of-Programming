import java.util.Scanner;

public class Pattern37 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = n-1; j >= 0; j--) {
                if (j > i) {
                    System.out.print(" ");
                } else {
                    System.out.print(count++ + " ");
                }
            }
            System.out.println();
        }

    }
}