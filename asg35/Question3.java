import java.util.*;

class Number {
    public int Brr[];
    public int iNo;

    public Number(int Brr[], int iNo) {
        this.Brr = Brr;
        this.iNo = iNo;
    }

    public int LastOcc() {
        int iCnt = 0;
        int iPos = -1;
        int iStore = 1;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if (Brr[iCnt] == iNo) {
                iPos = iStore;
            }
            iStore++;
        }
        return iPos;
    }
}

class Question3 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iCheck = 0;
        int iRet = 0;
        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the number that you want to check: ");
        iCheck = sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the elements : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        Number ADobj = new Number(Arr, iCheck);
        iRet = ADobj.LastOcc();
        System.out.println("Last Occuercence : " + iRet);

        sobj.close();

    }
}