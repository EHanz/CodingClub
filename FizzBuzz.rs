use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();

    let mut x = 0;
    let mut y = 0;
    let mut n = 0;

    for line in stdin.lock().lines().map(|l| l.unwrap()) 
    {
        let nums: Vec<i64> = line.split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        x = nums[0];
        y = nums[1];
        n = nums[2];
        break;
    }

    for i in 1..n+1
    {
        if i % x == 0 &&  i % y == 0
        {
            println! ("{}", "FizzBuzz");
        }
        else if i % x == 0
        {
            println! ("{}", "Fizz");
        }
        else if i % y == 0
        {
            println! ("{}", "Buzz");
        }
        else 
        {
            println! ("{}", i);
        }
    }
}