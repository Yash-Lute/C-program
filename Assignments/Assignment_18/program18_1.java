class Logic
{
    void checkPrime(int num)
    {
        int iCnt=0,iCount=0;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            if (num%iCnt==0) 
            {
              iCount++;    
            }
        }
        if (iCount==2) {
            System.out.println(num+"  is a prime number");
        }
        else
        {
            System.out.println(num+"  is not a prime number");
        }
    }
}
class program18_1 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
    lobj.checkPrime(11);
    }
}
