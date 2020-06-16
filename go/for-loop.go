package main

import (
	"fmt"
	"os"
	"math/rand"
	"time"
)

func main() {

	generator := rand.New(rand.NewSource(time.Now().UnixNano()))
	solution := generator.Intn(100)+1

	fmt.Println("You have 10 tries to guess my number between 1 and 100.\n")

	for i := 1; i <= 10; i++ {
		fmt.Println(fmt.Sprintf("[%d/10] What's your guess?", i))
		var guess int
		fmt.Scanln(&guess)
		
		if guess < solution {
			fmt.Println("My number is bigger.")
		} else if guess > solution {
			fmt.Println("My number is smaller.")
		} else {
			fmt.Println("That's it. You guessed it.");
			os.Exit(0)
		}
	}

	fmt.Println("Ohh you didn't guess it. :(");
	os.Exit(1)
}