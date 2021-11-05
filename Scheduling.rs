use std::io::{self, BufRead};

fn main ()
{
    

    for line in stdin.lock().lines().map(|l| l.unwrap()) 
    {
        let nums: Vec<f64> = line.split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        base = nums[0];
        height = nums[1];
        break;
    }
}