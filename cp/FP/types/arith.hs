module Arith3Broken where
main :: IO ()
main = do
    print "3"
    putStrLn "10"
    print (negate (-1))
    print ((+) 0 blah)
blah = negate 1