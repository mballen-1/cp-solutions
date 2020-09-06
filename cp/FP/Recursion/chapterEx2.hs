sumN ::  (Eq a, Num a) => a -> a
sumN n = fn n 0 where
        fn :: (Eq n, Num n) => n -> n -> n
        fn n sm
            | (n == 0) = sm
            | otherwise = fn (n-1) (sm + n)

mult :: (Integral a) => a -> a -> a
mult x y = fn x y 0 0 where
        fn :: (Integral b) => b -> b -> b -> b -> b
        fn fs sc times acc
            | (times == sc) = acc
            | otherwise = fn fs sc (times + 1) (acc + fs)

data DividedResult x = Result x | DividedByZero deriving Show

dividedBy :: Integral a => a -> a -> (DividedResult (a,a))
dividedBy _ 0 = DividedByZero
dividedBy num denom = Result (go num denom 0)
    where go n d count
            | n < d = (count, n)
            | otherwise = go (n - d) d (count + 1)
