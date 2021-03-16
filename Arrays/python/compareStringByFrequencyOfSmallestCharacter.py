"""

Problem Statement:
Let the function f(s) be the frequency of the lexicographically smallest character in a non-empty string s. For example, if s = "dcce" then f(s) = 2 because the lexicographically smallest character is 'c', which has a frequency of 2.
You are given an array of strings words and another array of query strings queries. For each query queries[i], count the number of words in words such that f(queries[i]) < f(W) for each W in words.
Return an integer array answer, where each answer[i] is the answer to the ith query.

Example 1:
Input: queries = ["cbd"], words = ["zaaaz"]
Output: [1]

"""

from collections import Counter
def numSmallerByFrequency(queries, words):
        fre_queries = fre(queries)
        fre_words = sorted(fre(words))[::-1]
        
        res = []
        for q in fre_queries:
            count = 0
            for w in fre_words:
                if w <= q:
                    break
                else:
                    count += 1
            res.append(count)
        return res                        
            
def fre(arrs):
        sorted_arrs = [sorted(arr) for arr in arrs]
        fre = []
        for arr in sorted_arrs:
            fre.append(list(Counter(arr).items())[0][1]) 
        return fre

input_queries = input('Enter elements of a queries separated by space: ')
print("\n")
queries_list = input_queries.split()

input_words = input('Enter elements of a words separated by space: ')
print("\n")
words_list = input_words.split()

# print(queries_list)
# print(words_list)
ans = numSmallerByFrequency(queries_list,words_list)

print("Output: ",ans)


