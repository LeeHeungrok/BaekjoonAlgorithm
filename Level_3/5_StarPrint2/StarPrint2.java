import java.util.Scanner;

class StarPrint2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int star;
        star = scan.nextInt();

        for(int starNumber = 0; starNumber < star; starNumber ++){
            for(int printNumber = star - 1; printNumber >= 0; printNumber -- ){
                if(printNumber <= starNumber){
                    System.out.print("*");
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scan.close();
    }
}