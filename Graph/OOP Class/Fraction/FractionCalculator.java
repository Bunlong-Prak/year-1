public class FractionCalculator {
    public static void main(String[] args) {
        Fraction f = new Fraction(num: 65, denom: 45);
        System.out.println(f);

        Fraction fc = new Fraction(f);
        System.out.println(fc);
        // f.setNumerator(5)
        fraction simplified = fc.simplify();
        System
        System.out.println(
                f.getNumerator()
        );
    }
}