package assignments;

import paragonUtils.Week4MealCardBunlongPrak;

import java.util.Scanner;

public class Week4MainBunlongPrak {
    public static void main(String[] args) {
        System.out.println("Welcome to BunlongPrak's Meal Card Program!");
        System.out.println("This program allows you to created a meal card for once.");
        System.out.println("Later, you can top up or buy food as many times as you want.");
        System.out.println("Please input the initialize balance (input 0 to keep default):");

        Scanner scanner = new Scanner(System.in);
        int initBalance = scanner.nextInt();
        Week4MealCardBunlongPrak mealCard;

        if(initBalance != 0) {
            mealCard = new Week4MealCardBunlongPrak(initBalance);
        }
        else {
            mealCard = new Week4MealCardBunlongPrak();
        }

        boolean running = true;
        while (running) {
            System.out.println("The current balance of your meal card is: " + mealCard.getBalance() + "\n");
            System.out.print("""
                    Please select the following options:
                    1. Top up
                    2. Buy food
                    0. Exit
                    Please input your option:""");
            int option = scanner.nextInt();
            switch (option) {
                case 1 -> {
                    System.out.print("Please input the point to top up: ");
                    int points = scanner.nextInt();
                    mealCard.Topup(points);
                }
                case 2 -> {
                    System.out.print("Please input the point of the food: ");
                    int points = scanner.nextInt();
                    mealCard.spend(points);
                }
                case 0 ->  {
                    System.out.print("Thank you for using the program!");
                }
                default -> System.out.println("Error input! The program will start again!");
            }

        }

    }
}