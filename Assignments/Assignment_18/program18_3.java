class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
              if (iCnt%2!=0 )
               {
                  System.out.println(iCnt);
              }   
        }
    }
}


class program18_3 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.printOddNumbers(20);
    }
}

