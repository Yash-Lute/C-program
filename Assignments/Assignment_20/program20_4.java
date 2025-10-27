 class Logic
 {
    void findLargestDigit(int num)
    {
       int iDigit=0,ilargedigit=0;
       while (num!=0) 
       {
           iDigit=num%10;
           if (iDigit>ilargedigit) 
           {
            ilargedigit=iDigit;
           }
           num=num/10;
       }
       System.out.println(ilargedigit);

       
    }
 }
 class program20_4
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.findLargestDigit(83429);
    }
}

