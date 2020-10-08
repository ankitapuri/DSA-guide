static int lcs(String str1, String str2, int l1, int l2, int dp[][]) {

        if (l1 == 0 || l2 == 0) {
            return 0;
        }

        if (dp[l1 - 1][l2 - 1] != -1) {
            return dp[l1 - 1][l2 - 1];
        }

        if (str1.charAt(l1 - 1) == str2.charAt(l2 - 1)) {
            dp[l1 - 1][l2 - 1] = 1 + lcs(str1, str2, l1 - 1, l2 - 1, dp);
            return dp[l1 - 1][l2 - 1];
        } else {
            dp[l1 - 1][l2 - 1] = Math.max(lcs(str1, str2, l1, l2 - 1, dp), lcs(str1, str2, l1 - 1, l2, dp));
            return dp[l1 - 1][l2 - 1];
        }
    }

    public static void main(String[] args) {
        String str1 = "XAAAABA";
        String str2 = "XAAAAABAAAAAA";

        int dp[][] = new int[str1.length()][str2.length()];
        for (int i = 0; i < str1.length(); i++) {
            for (int j = 0; j < str2.length(); j++) {
                dp[i][j] = -1;
            }
        }
        System.out.println("String 1: " + str1);
        System.out.println("String 2: " + str2);
        System.out.println("Length of Longest Common Subsequence using memoization is : " + lcs(str1, str2, str1.length(), str2.length(), dp));
    }
}
