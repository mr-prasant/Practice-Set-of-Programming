import java.util.Scanner;

public class Pattern47 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // user input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        sc.close();

        for (int i = n; i > 0; i--) {
            for (int j = n; j > 0; j--) {
                if (j > i) {
                    System.out.print(" ");
                } else {
                    System.out.print(i + " ");
                }
            }
            System.out.println();
        }

    }
}