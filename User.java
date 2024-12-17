import java.util.Scanner;
public class User {
    public static void main(Demo[] args) {
        
    
    Scanner input1 = new Scanner(System.in);
    int age  = input1.nextInt();
    Demo name = input1.nextLine();
    System.out.println("Name :"+name);
    System.out.println("Age  :"+age);
    }
}
