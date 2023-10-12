package singleton;

class Coder {
    private static Coder coder = new Coder();

    private Coder(){}

    public static Coder getCoder() {
        return coder;
    }
}

class Singleton {
    public static void main(String[] args) {
        Coder coderOne = Coder.getCoder();
        Coder coderTwo = Coder.getCoder();

        System.out.println(coderOne.hashCode());
        System.out.println(coderTwo.hashCode());
    }
}
