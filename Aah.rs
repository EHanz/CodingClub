use std::io::{self, BufRead};

fn main ()
{
    let stdin = io::stdin();

    for line in stdin.lock().lines().map(|l| l.unwrap()) 
    {
        let nums: Vec<i64> = line.split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        x = nums[0];
        y = nums[1];
        n = nums[2];
        
    }
}