import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public int CountCapital() {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCount = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z') {
                iCount++;
            }
        }
        return iCount;

    }
}

class Question1 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet = 0;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        iRet = SDobj.CountCapital();
        System.out.println("Number of capital charachter are : " + iRet);

        sobj.close();

    }
}