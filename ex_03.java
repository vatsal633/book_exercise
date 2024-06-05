class Super{
    public int a;
    public int b;

    void mean(int x,int y){
        a = x;
        b = y;

        int result = (a+b)/2;
        System.out.println(result);
    }
}

class ex_03{
    public static void main(String args[]){
        Super s = new Super();
        s.mean(10,20);
    }
}
