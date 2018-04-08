import java.util.Scanner;

class StarPrint1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int star;

        star = scan.nextInt();

        for(int starNumber = 0; starNumber < star; starNumber ++){
            for(int printNumber = 0; printNumber <= starNumber; printNumber ++){
                System.out.print("*");
            }
            System.out.println();
        }
        
        scan.close();
    }
}