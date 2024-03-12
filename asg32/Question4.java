import java.util.*;

class StringDemo {
    public String str = null;

    public StringDemo(String str) {
        this.str = str;
    }

    public boolean ChkVowel() {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        boolean bFlag = false;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] == 'a' || Arr[iCnt] == 'e' || Arr[iCnt] == 'i' || Arr[iCnt] == 'o' || Arr[iCnt] == 'u'
                    || Arr[iCnt] == 'A' || Arr[iCnt] == 'E' || Arr[iCnt] == 'I' || Arr[iCnt] == 'O'
                    || Arr[iCnt] == 'U') {
                bFlag = true;
                break;
            }
        }
        return bFlag;

    }
}

class Question4 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        boolean bRet = false;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        StringDemo SDobj = new StringDemo(str);

        bRet = SDobj.ChkVowel();
        if (bRet == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

        sobj.close();

    }
}