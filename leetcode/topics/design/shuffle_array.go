package design

// import "math/rand"

// type Solution struct {
// 	nums []int
// }

// func Constructor(nums []int) Solution {
// 	return Solution{nums: nums}
// }

// /** Resets the array to its original configuration and return it. */
// func (this *Solution) Reset() []int {
// 	return this.nums
// }

// /** Returns a random shuffling of the array. */
// func (this *Solution) Shuffle() []int {
// 	shuffled := make([]int, len(this.nums))
// 	copy(shuffled, this.nums)
// 	for i := 0; i < len(shuffled); i++ {
// 		ranIdx := rand.Intn(len(shuffled))
// 		shuffled[i], shuffled[ranIdx] = shuffled[ranIdx], shuffled[i]
// 	}
// 	return shuffled
// }

// /**
//  * Your Solution object will be instantiated and called as such:
//  * obj := Constructor(nums);
//  * param_1 := obj.Reset();
//  * param_2 := obj.Shuffle();
//  */
