class Logic
{
    void checkSign(int num)
    {
        if (num<0) 
        {
            System.out.println("number is negative");
        }
        else if (num>0) 
        {
             System.out.println("number is positive");
        }
        else
        {
            System.out.println("number is zero");
        }
    }
}


class program18_5 {
    public static void main(String[] args) {
        Logic lobj=new Logic();
        lobj.checkSign(-8);
    }
}
