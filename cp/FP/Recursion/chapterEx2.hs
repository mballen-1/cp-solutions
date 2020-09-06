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
