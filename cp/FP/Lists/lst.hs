safeHead :: [a] -> Maybe [a]
safeHead [] = Nothing
safeHead (x:_) = Just [x]


eftBool :: Bool -> Bool -> [Bool]
eftBool f s
    | f > s = []
    | f /= s = [f, s]
    | otherwise = [f]

eftOrd :: Ordering -> Ordering -> [Ordering]
eftOrd a b 
        | a > b = []
        | (a == b) = a : []
        | otherwise = a : eftOrd (succ a) b


eftChar :: Char -> Char -> [Char]
eftChar f s
    | f > s = []
    | f >= s = [s]
    | otherwise = [f] ++ eftChar (succ f) s

-- that takes a string
-- and returns a list of strings, using spaces to separate the elements
-- of the string into words, as in the following sample:

splitWords :: [Char] -> [[Char]]
splitWords words 
    | (words==[]) = ["x"]
    | otherwise = [(takeWhile (/= ' ') words)] ++ (splitWords $ dropWhile (==' ') [(takeWhile (/= ' ') words)])
