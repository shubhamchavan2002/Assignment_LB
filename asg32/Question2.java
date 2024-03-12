import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public int CountSmall() {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCount = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z') {
                iCount++;
            }
        }
        return iCount;

    }
}

class Question2 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet = 0;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        iRet = SDobj.CountSmall();
        System.out.println("Number of small charachter are : " + iRet);

        sobj.close();

    }
}