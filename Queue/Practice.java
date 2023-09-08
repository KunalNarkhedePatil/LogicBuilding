class CircularQueue
{
    public int Arr[];
    public int iFront;
    public int iRare;
    public int iSize;

    CircularQueue(int iSize)
    {
        iFront=-1;
        iRare=-1;
        this.iSize=iSize;
        Arr=new int[iSize];
    }
    public boolean isEmpty()
    {
        if(iFront==-1 && iRare==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public boolean isFull()
    {
        if(iFront==0 && iRare==iSize-1 || iRare+1%iSize==iFront)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public void enQueue(int iNo)
    {
        if(isFull())
        {
            System.out.println("Queue is empty");
            return;
        }
        if(iFront==iRare)
        {
            iFront=-1;
            iRare=-1;
        }
        else
        {
            
        }
    }
    public void deQueue()
    {

    }


}
class Practice 
{
    public static void main(String agebs[])
    {

    }
}