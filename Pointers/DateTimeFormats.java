
// class program{
    
//     // int a = 10; // instance var
//     // static int num = 15; // static var

//     // void sum(){
//     //     int num1 = 10, num2 = 20;
//     //     int sum = num1+num2;
//     //     System.out.println(+sum); 
//     // }

//     // program(int a, int b){
//     //     int c = a+b;
//     //     System.out.println(+c);
//     // }
    
//     public static void main(String[]args){

//         // int a = 10, b = 50, c, d, e, f;
//         // c = a+b;
//         // d = b-a;
//         // e = a*b;
//         // f = b/a;
//         // System.out.println("c="+c);
//         // System.out.println("d="+d);
//         // System.out.println("e="+e);
//         // System.out.println("f="+f);

//         // System.out.println("Hello World");

//         // float circle = ((22/7) * (a*a));
//         // System.out.println("Area of circle is: "+circle);

//         // int sum = 0;
//         // for(int i = 1; i < 6; i++){
//         //     sum = sum + i;
//         // }

//         // System.out.println("Sum of 5 number is: "+sum);

//         // program A = new program(10, 20);
//         // A.sum(); 

        
    
//     }

    
// }


import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTimeFormats {
    public static void main(String[] args) {
        LocalDateTime currentDateTime = LocalDateTime.now();

        // Default format
        System.out.println("Default format: " + currentDateTime);

        // Custom formats
        DateTimeFormatter formatter1 = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        System.out.println("Format 1: " + currentDateTime.format(formatter1));

        DateTimeFormatter formatter2 = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm");
        System.out.println("Format 2: " + currentDateTime.format(formatter2));

        DateTimeFormatter formatter3 = DateTimeFormatter.ofPattern("MMMM dd, yyyy HH:mm:ss");
        System.out.println("Format 3: " + currentDateTime.format(formatter3));

        DateTimeFormatter formatter4 = DateTimeFormatter.ofPattern("E, MMM dd yyyy HH:mm:ss");
        System.out.println("Format 4: " + currentDateTime.format(formatter4));

        DateTimeFormatter formatter5 = DateTimeFormatter.ofPattern("EEEE, MMMM dd, yyyy HH:mm:ss a");
        System.out.println("Format 5: " + currentDateTime.format(formatter5));

        DateTimeFormatter formatter6 = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");
        System.out.println("Format 6: " + currentDateTime.format(formatter6));
    }
}