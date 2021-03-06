# C++ 經典程序
c++程式博大精深，這邊列舉學習c++可能碰到的經典程式供參考學習
## 數學
|功能|可參考題目| 程式|
| --- | --- | --- |
|利用class及重載運算子，實作有理數的加減乘除|[zerojudge- b538: 分數運算-2](https://zerojudge.tw/ShowProblem?problemid=b538)|[rational](https://github.com/FermatPredictor/classicalC_code/blob/master/rational.cpp)|
|計算第n個費式數|[LeetCode 70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)|[fibonacci](https://github.com/FermatPredictor/classicalC_code/blob/master/fibonacci.cpp)|
|二進制~36進制互相轉換|[zerojudge- c665: 進制轉換](https://zerojudge.tw/ShowProblem?problemid=c665)|[進制轉換](https://github.com/FermatPredictor/classicalC_code/blob/master/%E9%80%B2%E5%88%B6%E8%BD%89%E6%8F%9B.cpp)|
|解二元一次方程式|[zerojudge- a410: 解方程](https://zerojudge.tw/ShowProblem?problemid=a410)|[二元一次方程式](https://github.com/FermatPredictor/classicalC_code/blob/master/%E4%BA%8C%E5%85%83%E4%B8%80%E6%AC%A1%E6%96%B9%E7%A8%8B%E5%BC%8F.cpp)|
|解一元二次方程式|[zerojudge- a006: 一元二次方程式](https://zerojudge.tw/ShowProblem?problemid=a006)|[一元二次方程式](https://github.com/FermatPredictor/classicalC_code/blob/master/%E4%B8%80%E6%AC%A1%E4%BA%8C%E6%AC%A1%E6%96%B9%E7%A8%8B%E5%BC%8F.cpp)|
|判斷質數(基礎版)|[zerojudge- b513: 判斷質數-商競103](https://zerojudge.tw/ShowProblem?problemid=b513)|[isPrime](https://github.com/FermatPredictor/classicalC_code/blob/master/isPrime.cpp)|
|判斷質數(建表快速版，可解到int級別)|[zerojudge- a007: 判斷質數](https://zerojudge.tw/ShowProblem?problemid=a007)|[isPrime_table](https://github.com/FermatPredictor/classicalC_code/blob/master/isPrime_table.cpp)|
|質因數分解(基礎版)|[zerojudge- a010: 因數分解](https://zerojudge.tw/ShowProblem?problemid=a010)|[primeFactorization](https://github.com/FermatPredictor/classicalC_code/blob/master/primeFactorization.cpp)|
|質因數分解(建表快速版，可解到int級別)|[zerojudge- d121: 00583 - Prime Factors](https://zerojudge.tw/ShowProblem?problemid=d121)|[primeFactor_table](https://github.com/FermatPredictor/classicalC_code/blob/master/primeFactor_table.cpp)|
|求正整數最大的質因數(建表快速版)|[zerojudge- d276: 轉了一圈](https://zerojudge.tw/ShowProblem?problemid=d276)|[maxFactor](https://github.com/FermatPredictor/classicalC_code/blob/master/maxFactor.cpp)|

## 矩陣
|功能|可參考題目| 程式|
| --- | --- | --- |
|計算兩個矩陣相乘|[zerojudge- d481: 矩陣乘法](https://zerojudge.tw/ShowProblem?problemid=d481)|[matrixMul](https://github.com/FermatPredictor/classicalC_code/blob/master/matrixMul.cpp)|
|矩陣旋轉、翻轉|[zerojudge- b965: 第 2 題 矩陣轉換](https://zerojudge.tw/ShowProblem?problemid=b965)|[matrix_rotate_and_filp](https://github.com/FermatPredictor/classicalC_code/blob/master/matrix_rotate_and_filp.cpp)|

## 漂亮的圖形
|功能|可參考題目| 程式|
| --- | --- | --- |
|印出字母菱形||[字母菱形](https://github.com/FermatPredictor/classicalC_code/blob/master/%E5%AD%97%E6%AF%8D%E8%8F%B1%E5%BD%A2.cpp)|

## 排列組合、窮舉
|功能|可參考題目| 程式|
| --- | --- | --- |
| 用DFS將多元一次方程的非負整數解印出 | [zerojudge- b511: 換銅板](https://zerojudge.tw/ShowProblem?problemid=b511)| [多元一次方程的非負整數解](https://github.com/FermatPredictor/classicalC_code/blob/master/%E5%A4%9A%E5%85%83%E4%B8%80%E6%AC%A1%E6%96%B9%E7%A8%8B%E7%9A%84%E9%9D%9E%E8%B2%A0%E6%95%B4%E6%95%B8%E8%A7%A3.cpp) |
|A, B是兩個陣列，彼此為重新排列(有一對一關係)，求A的元素對應到B的相同元素的哪一個index||[one_to_one_correspond](https://github.com/FermatPredictor/classicalC_code/blob/master/one_to_one_correspond.cpp)|
|窮舉Cartesian product的結果||[Cartesian_product](https://github.com/FermatPredictor/classicalC_code/blob/master/Cartesian_product.cpp)|
|窮舉n個相異元素取k個|[zerojudge- d115: 數字包牌](https://zerojudge.tw/ShowProblem?problemid=d115)|[combination](https://github.com/FermatPredictor/classicalC_code/blob/master/combination.cpp)|
|給定一個集合(元素全相異)，窮舉所有可能的子集||[subset_1](https://github.com/FermatPredictor/classicalC_code/blob/master/subset_1.cpp)|
|給定一個multiset(元素可能重複)，窮舉所有可能的子集(不可重複)||[subset_2](https://github.com/FermatPredictor/classicalC_code/blob/master/subset_2.cpp)|
|給定一個正整數，把它所有的可能總和分解列出來||[partition](https://github.com/FermatPredictor/classicalC_code/blob/master/partition.cpp)|


## 經典問題
|功能|可參考題目| 程式|
| --- | --- | --- |
|解河內塔問題，求第nth的移動步|[zerojudge- e790: a1.倉庫整理 (Warehouse)](https://zerojudge.tw/ShowProblem?problemid=e790)|[hanoi](https://github.com/FermatPredictor/classicalC_code/blob/master/hanoi.cpp)|
|將所有相鄰區域標註出來|[LeetCode 200. Number of Islands](https://leetcode.com/problems/number-of-islands/)|[pouringWater](https://github.com/FermatPredictor/classicalC_code/blob/master/pouringWater.cpp)|



