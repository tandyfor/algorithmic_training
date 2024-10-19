package main

import (
	"fmt"
	"math"
)

func main() {
	var x1, x2 int
	var y1, y2 int
	var result float64

	fmt.Scanf("%d %d", &x1, &y1)
	fmt.Scanf("%d %d", &x2, &y2)

	result = math.Abs(float64((x2 - x1))) + math.Abs(float64((y2 - y1)))
	fmt.Println(int(result))
}