import java.util.Scanner;

public class ArrayAccess {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try {
            // Get the size of the array
            System.out.print("Enter the number of elements in the array: ");
            int size = Integer.parseInt(scanner.nextLine());
            
            // Initialize the array
            int[] array = new int[size];
            
            // Get the elements of the array
            System.out.println("Enter the elements in the array:");
            for (int i = 0; i < size; i++) {
                array[i] = Integer.parseInt(scanner.nextLine());
            }
            
            // Get the index to access
            System.out.print("Enter the index of the array element you want to access: ");
            int index = Integer.parseInt(scanner.nextLine());
            
            // Access the array element
            System.out.println("The array element at index " + index + " = " + array[index]);
            System.out.println("The array element successfully accessed.");
            
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("java.lang.ArrayIndexOutOfBoundsException");
        } catch (NumberFormatException e) {
            System.out.println("java.lang.NumberFormatException");
        } catch (Exception e) {
            // Catch any other exceptions
            System.out.println("An unexpected error occurred: " + e.getMessage());
        } finally {
            // Close the scanner
            scanner.close();
        }
    }
}

