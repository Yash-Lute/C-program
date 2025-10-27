class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit=0,iSumeven=0,iSumodd=0;
        while (num!=0) 
        {
            iDigit=num%10;
            if (iDigit%2==0) 
            {
                iSumeven=iSumeven+iDigit;
            }
            else
            {
               iSumodd=iSumodd+iDigit;
            }
            num=num/10;
        }
        System.out.println("sum of even digits is:"+iSumeven);
        System.out.println("sum of odd digits is:"+iSumodd);
    }
}


class program18_4 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.sumEvenOddDigits(123456);
    }
}
