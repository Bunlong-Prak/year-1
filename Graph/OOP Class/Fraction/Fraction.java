public class Fraction {
    private int numerator;
    private int denominator;

    public Fraction(){
        this(0, 1);
    }

    public Fraction(int number){
        this(number, 1);
    }

    public Fraction(Fraction fraction){
        this(fraction.getNumerator(), fraction.getDenominator());
    }

    public Fraction(int num, int denom){
        if(denom<0){
            num = - num;
            denom = -denom;
        }
        if(num == 0){
            denom = 1;
        }
        setNumerator(num);
        setDenominator(denom);
    }

    public static int gcd(int m, int n){
        int r = n % m;
        while(r != 0){
            n=m;
            m=r;
            r=n % m;
        }
        return m;
    }

    public static Fraction min(Fraction f1, Fraction f2){
        double f1_dec = f1.decimal();
        double f2_dec = f2.decimal();

        if(f1_dec <= f2_dec){
            return f1;
        } else {
            return f2;
        }
    }

    public Fraction add(Fraction frac){
        int a,b,c,d;

        Fraction sum;

        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();

        sum = new Fraction(a*d + b*c, b*d);

        return sum;
    }

    public Fraction add(int number){
        Fraction frac = new Fraction(number, 1);
        Fraction sum = add(frac);
        return sum;
    }

    public Fraction divide(Fraction frac){
        int a,b,c,d;

        Fraction quotient;

        a= this.getNumerator();
        b= this.getDenominator();
        c= frac.getNumerator();
        d= frac.getDenominator();

        quotient = new Fraction(a*d, b*c);
        return quotient;
    }

    public Fraction divide(int number){
        Fraction fraction = new Fraction(number, 1);
        Fraction quotient = divide(fraction);
        return quotient;
    }


    public boolean equals(Fraction fraction) {
        Fraction f1 = simplify();
        Fraction f2 = fraction.simplify();
        return (f1.getNumerator() == f2.getNumerator() && f1.getDenominator() == f2.getDenominator());
    }

    public Fraction multiply(Fraction frac) {
        int a, b, c, d;
        Fraction product;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        product = new Fraction(a*c, b*d);
        return product;
    }

    public Fraction multiply(int number) {
        Fraction frac = new Fraction(number, 1);
        Fraction product = multiply(frac);
        return product;
    }

    public int getNumerator() {
        return numerator;
    }

    public void setNumerator(int num) {

        this.numerator = num;

    }

    public int getDenominator() {
        return denominator;
    }

    public void setDenominator(int denominator) {
        if (denominator == 0) {
//Fatal error
            System.out.println("Fatal Error");
            System.exit(1);
        }
        this.denominator = denominator;
    }

    public Fraction simplify( ) {
        int num = getNumerator();
        int denom = getDenominator();
        int divisor = 1;
        if (num != 0) {
            divisor = gcd(Math.abs(num), denom);
        }
        return new Fraction(num/divisor, denom/divisor);
    }

    public Fraction subtract(Fraction frac) {
        int a, b, c, d;
        Fraction diff;
        a = this.getNumerator();
        b = this.getDenominator();
        c = frac.getNumerator();
        d = frac.getDenominator();
        diff = new Fraction(a*d - b*c, b*d);
        return diff;
    }

    public Fraction subtract(int number) {
        Fraction frac = new Fraction(number, 1);
        Fraction difference = subtract(frac);
        return difference;
    }

    public String toString( ) {
        return getNumerator() + "/" + getDenominator();
    }

    public double decimal( ) {
//returns the decimal equivalent
        return (double) getNumerator() / getDenominator();
    }
}