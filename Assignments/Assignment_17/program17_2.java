 class Logic
 {
    void checkPalindrome(int num)
    {
        int iDigit=0;
        while (num!=0) {
            iDigit=num%10;
             System.out.print(iDigit);
            num=num/10;
        }
       
    }
 }
 class program17_2 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.checkPalindrome(1213);
    }
}
