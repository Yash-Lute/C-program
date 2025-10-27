 class Logic
 {
    void findSmallestDigit(int num)
    {
       int iDigit=0;
       int iSmalldigit=9;
       while (num!=0) 
       {
           iDigit=num%10;
           if (iDigit<iSmalldigit) 
           {
            iSmalldigit=iDigit;
           }
           num=num/10;
       }
       System.out.println(iSmalldigit);

       
    }
 }
 class program20_5
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.findSmallestDigit(45872);
    }
}

