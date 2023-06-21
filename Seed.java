public class Seed{
    public static void main(String[] args){
        int num1 = 123, num2 = 738;
        num1 = Math.min(num1,num2);
        num2 = Math.max(num1,num2);
        System.out.println(checkSeed(num1, num2));
    }
    public static boolean checkSeed(int num1, int num2){
        int seed = num1;
        while(num1>0){
            seed = seed * (num1%10);
            num1 = num1 / 10;
        }
        if(seed==num2)
            System.out.println(num1+" is a seed of "+num2);
        else
            System.out.println(num1+" is not a seed of "+num2);
    }
 }
