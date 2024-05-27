package paragonUtils;

public class Week4MealCardBunlongPrak {
    private int balance;
    public int point;

    public Week4MealCardBunlongPrak() {
        setBalance(100);
        System.out.println("Your meal card has been created!");
    }

    public Week4MealCardBunlongPrak(int balance) {
        setBalance(balance);
        System.out.println("Your meal card has been created!");
    }

    public void Topup(int point) {
        balance += point;
    }

    public void spend(int point) {
        if (point <= balance) {
            balance -= point;
        } else {
            System.out.println("Insufficient balance!");
        }
    }

    public int getBalance() {
        return balance;
    }

    public void setBalance(int newBalance) {
        balance = newBalance;
    }
}