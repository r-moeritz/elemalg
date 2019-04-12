module Preface
    ( minFree,
      takeN
    ) where

import Data.List

minFree xs = bsearch xs 0 (length xs - 1)

takeN n = ks n [1] ([2], [3], [5])

bsearch xs l u | xs == [] = l
               | length as == m-l+1 = bsearch bs (m+1) u
               | otherwise = bsearch as l m
    where
      m = (l + u) `div` 2
      (as, bs) = partition (<= m) xs

ks 1 xs _ = xs
ks n xs (q2, q3, q5) = ks (n-1) (xs++[x]) update
    where
      x = minimum $ map head [q2, q3, q5]
      update | x == head q2 = ((tail q2)++[x*2], q3++[x*3], q5++[x*5])
             | x == head q3 = (q2, (tail q3)++[x*3], q5++[x*5])
             | otherwise = (q2, q3, (tail q5)++[x*5])
