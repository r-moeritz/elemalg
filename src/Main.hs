module Main where

import Preface

main :: IO ()
main = do
  let l = minFree [18, 4, 8, 9, 16, 1, 14, 7, 19, 3, 0, 5, 2, 11, 6]
  let n = last (takeN 1500)
  print $ "minFree: " ++ show l
  print $ "number at 1500: " ++ show n
