import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double radius, pi=3.14159;
        radius = scanner.nextDouble();
        System.out.printf("VOLUME = %.3f\n", ((4.0/3) * pi * Math.pow(radius, 3)));
    }
}
