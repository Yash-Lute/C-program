 class Logic
 {
    void checkPerfect(int num)
    {
       int iCnt=0,iSum=0;

       for(iCnt=1;iCnt<=num/2;iCnt++)
       {
           if (num%iCnt==0) 
           {
              iSum=iSum+iCnt;
           }
       }
       if (iSum==num) 
       {
          System.out.println(num+"  is a perfect number");
       }
       else
       {
          System.out.println(num+"  is not a perfect number");
       }
    }
 }
 class program20_3 
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.checkPerfect(6);
    }
}

