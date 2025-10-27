 class Logic
 {
    void displayFactors(int num)
    {
      int iCnt=0;
      for(iCnt=1;iCnt<=num;iCnt++)
      {
            if (num%iCnt==0) 
            {
                System.out.println(iCnt);
            }
      }
      
       
    }
 }
 class program21_3
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.displayFactors(12);
    }
}

