package main

import (
	"fmt"
	"math"
)

func main() {
	var n, k, i, res_1, res_2 int
	fmt.Scanf("%d %d", &n, &k)
	i = max(n / k, 1)
	res_1 = int(math.Abs(float64(n - k * i)))
	i++
	res_2 = int(math.Abs(float64(n - k * i)))
	fmt.Println(min(res_1, res_2))
}
