 class Logic
 {
    void countEvenOddRange(int num)
    {
      int iCnt=0,ieven=0,iodd=0;
      for(iCnt=1;iCnt<=num;iCnt++)
      {
        if(iCnt%2==0)
        {
           ieven++;
        }
        else
        {
            iodd++;
        }
      }
      System.out.println("Count of even no is:"+ieven);
      System.out.println("Count of odd no is:"+iodd);
       
    }
 }
 class program21_2
 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.countEvenOddRange(50);
    }
}

