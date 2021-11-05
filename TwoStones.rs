use std::io::{self, BufRead};

fn main ()
{
    let stdin = io::stdin();
    let mut x = 0;

    for line in stdin.lock().lines().map(|l| l.unwrap()) 
    {
        let nums: Vec<i64> = line.split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        x = nums[0];
        break;
    }

    if x % 2 == 0
    {
        println! ("{}", "Bob");
    }
    else if x % 2 == 1
    {
        println! ("{}", "Alice");
    }

}