 class Logic
 {
    void printDigits(int num)
    {
       int iDigit=0;
       while (num!=0) 
       {
           iDigit=num%10;
           System.out.println(iDigit);
           num=num/10;
       }
    }
 }
 class program19_4 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.printDigits(9876);
    }
}
