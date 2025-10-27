class Logic
{
    void calculateSum(int n)
    {
        int iSum=0,iCnt=0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            iSum=iSum+iCnt;
        }
        System.out.println(iSum);
    }
}
class program16_1
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.calculateSum(10);
    }
}