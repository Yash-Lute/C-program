 class Logic
 {
    void sumofDigits(int num)
    {
        int iDigit=0,iSum=0;
        while (num!=0) {
            iDigit=num%10;
        iSum=iSum+iDigit;
        num=num/10;
        }
        System.out.println(iSum);
    }
 }
 class program17_1 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.sumofDigits(1234);
    }
}
