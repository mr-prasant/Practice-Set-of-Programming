import java.util.Scanner;

public class Pattern28 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                if (i < j) {
                    System.out.print("  ");
                } else {
                    System.out.print((char)(97+count++) + " ");
                }
            }
            System.out.println();
        }
    }
}