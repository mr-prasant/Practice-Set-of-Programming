import java.util.Scanner;

public class Pattern44 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        for (int i = n; i > 0; i--) {
            int count = 1;
            for (int j = n; j > 0; j--) {
                if (i < j) {
                    System.out.print(" ");
                } else {
                    System.out.print(count++ + " ");
                }
            }
            System.out.println();
        }

    }
}