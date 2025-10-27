  class Logic
 {
    void reverseNumber(int num)
    { 
        int iDigit=0;
        while (num!=0) {
            iDigit=num%10;
        System.out.print(iDigit);
        num =num/10;
        }
       
    }
 }
 class program16_4 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.reverseNumber(1234);
        
    }
}
