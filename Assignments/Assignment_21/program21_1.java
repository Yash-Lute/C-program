 class Logic
 {
    void productOfDigit(int num)
    {
       int iDigit=0,iAns=1;
      
       while (num!=0) 
       {
           iDigit=num%10;
           iAns=iAns*iDigit;
           num=num/10;
       }
       System.out.println(iAns);

       
    }
 }
 class program21_1
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.productOfDigit(234);
    }
}

