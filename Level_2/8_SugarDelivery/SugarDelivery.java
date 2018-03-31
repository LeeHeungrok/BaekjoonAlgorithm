import java.util.Scanner;

class SugarDelivery{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        final int THREE_KG = 3;
        final int FIVE_KG = 5;
        int input;
        int[] suger, count;

        input = scan.nextInt();
        suger = new int[2];
        count = new int[2];
        for(int i = 0; i < 2; i ++){
            suger[i] = input;
            count[i] = 0;
        }
        
        count[0] += suger[0] / FIVE_KG;
        suger[0] = suger[0] % FIVE_KG;
        count[0] += suger[0] / THREE_KG;
        suger[0] = suger[0] % THREE_KG;
        System.out.println(suger[0]);
        System.out.println(count[0]);

        count[1] += suger[1] / THREE_KG;
        suger[1] = suger[1] % THREE_KG;
        System.out.println(suger[1]);
        count[1] += suger[1] / FIVE_KG;
        suger[1] = suger[1] % FIVE_KG;
        System.out.println(suger[1]);
        System.out.println(count[1]);

        for(int i = 0; i < 2; i ++){
            if(suger[i] != 0){
                suger[i] = 999;
            }
        }

        if(suger[0] > suger[1]){
            System.out.println(count[1]);
        }
        else if(suger[0] < suger[1]) {
            System.out.println(count[0]);
        }
        else {
            System.out.println(-1);
        }
        
        scan.close();
    }
}