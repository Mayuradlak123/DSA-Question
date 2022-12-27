class LargeSum {

    public void Sum() {
        Long a, b;
        String s = "24", s2 = "34";
        a = Long.parseLong(s);
        b = Long.parseLong(s2);
        System.out.println("sum of Given String is : " + (a + b));
        Long n = a + b;
        String ans = String.valueOf(n);
        System.out.println("Answer in String Form " + ans);
    }

    public static void main(String[] args) {
        LargeSum object = new LargeSum();
        object.Sum();
    }
}