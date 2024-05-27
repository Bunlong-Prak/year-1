import java.util.Scanner;
    
    class Week2LoanCalculatorBunlongPrak {

    //Data members
        private Week2LoanBunlongPrak loan;

    //Main method
    public static void main(String[] arg) {
        Week2LoanCalculatorBunlongPrak calculator = new Week2LoanCalculatorBunlongPrak();
        calculator.start();
    }

    //Constructor
    public Week2LoanCalculatorBunlongPrak() {
         this.loan = new Week2LoanBunlongPrak();
    }

    // Top-level method that calls other private methods
    public void start() {
        describeProgram(); //tell what the program does
        getInput(); //get three input values
       
        displayOutput(); //display the results
    }

    // Computes the monthly and total loan payments
    

    // Provides a brief explanation of the program to the user
    private void describeProgram() {
        System.out.println
        ("This program computes the monthly and total");
        System.out.println
        ("payments for a given loan amount, annual ");
        System.out.println
        ("interest rate, and loan period (# of years).");
        System.out.println("\n");
    }

    // Displays the input values and monthly and total payments
    private void displayOutput() {
       //echo print the input values here
        System.out.println("Loan Amount: $" + loan.getAmount());
        System.out.println("Annual Interest Rate:"
        + loan.getRate() + "%");

        System.out.println("Loan Period (years): " + loan.getPeriod());
        System.out.println("Monthly payment is $ " +

        loan.getMonthlyPayment());

        System.out.println(" TOTAL payment is $ " +

        loan.getTotalPayment());

}

    //gets three input values-loan amount, interest rate, and
    // loan period - using an InputBox object
    private void getInput(){
        double loanAmount, annualInterestRate;
        int loanPeriod;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Loan Amount (Dollars+Cents):");
        loanAmount = scanner.nextDouble();
        System.out.print("Annual Interest Rate (e.g., 9.5):");
        annualInterestRate = scanner.nextDouble();
        System.out.print("Loan Period - # of years:");
        loanPeriod = scanner.nextInt();
        //create a new loan with the input values
        loan = new Week2LoanBunlongPrak(loanAmount, annualInterestRate,loanPeriod);
        //TEMP
        System.out.println("Loan Amount: $" + loan.getAmount());
        System.out.println("Annual Interest Rate:"
        + loan.getRate() + "%");

        System.out.println("Loan Period (years):" + loan.getPeriod());
        //TEMP
}
}