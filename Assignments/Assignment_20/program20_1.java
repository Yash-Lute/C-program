 class Logic
 {
    void sumEvenNumbers(int n)
    {
       int iSum=0,iCnt=0;

       for(iCnt=1;iCnt<=n;iCnt++)
       {
        if (iCnt%2==0) 
        {
            iSum=iSum+iCnt;
        }
       }
       System.out.println(iSum);
           

    }
 }
 class program20_1 {
    public static void main(String[] args) 
    {
        Logic lobj=new Logic();
        lobj.sumEvenNumbers(10);
    }
}
