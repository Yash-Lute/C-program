 class Logic
 {
    void countFactors(int num)
    {
      int iCnt=0,ifrequency=0;
      for(iCnt=1;iCnt<=num;iCnt++)
      {
            if (num%iCnt==0) 
            {
               ifrequency++;
            }
      }
      System.out.println(ifrequency);
       
    }
 }
 class program21_4
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.countFactors(20);
    }
}

