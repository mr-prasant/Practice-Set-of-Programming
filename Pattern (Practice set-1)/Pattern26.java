import java.util.Scanner;

public class Pattern26 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                if (i < j) {
                    System.out.print("  ");
                } else {
                    System.out.print(i+1 + " ");
                }
            }
            System.out.println();
        }

    }
}