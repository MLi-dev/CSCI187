import java.io.*;
import java.util.Scanner;

public class SingletonTaxDriver {
    public static void main(String[] args) throws IOException {
        Scanner stdin = new Scanner(System.in);
        System.out.print("Enter the location (boston/chicago/stlouis): ");
        String location= stdin.nextLine();
        SingletonTaxFactory salesTaxFactory = SingletonTaxFactory.getInstance(location);
        System.out.print("Enter the dollar amount: ");
        double amount = stdin.nextDouble();
        SalesTax cityTax = salesTaxFactory.getTax(location);
        System.out.printf("Bill amount for %s of  $%6.2f is: ", location, amount);
        cityTax.getRate();
        cityTax.calculateTax(amount);
    }
}
