package main

import "fmt"

func main() {
	var n int
	var temp uint64
	var a uint64 = 0
	var b uint64 = 1
	fmt.Scan(&n)
	for i := 1; i < n; i++ {
		temp = a + b
		a = b
		b = temp
	}
	fmt.Println(b)
}