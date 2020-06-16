package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	running := true

	for running {
		generator := rand.New(rand.NewSource(time.Now().UnixNano()))
		solution := generator.Intn(100)+1
		correct := false

		fmt.Println("You have 10 tries to guess my number between 1 and 100.\n")

		for i := 0; i < 10; i++ {
			fmt.Println("What's your guess? ")

			var guess int
			fmt.Scanln(&guess)
			
			if guess < solution {
				fmt.Println("My number is bigger.")
			} else if guess > solution {
				fmt.Println("My number is smaller.")
			} else {
				correct = true
				fmt.Println("That's it. You guessed it.")
				break
			}
		}

		if !correct {
			fmt.Println("Ohh you didn't guess it. :(")
		}

		fmt.Println("Do you want to play another round?")
		var continueGame string
		fmt.Scanln(&continueGame)

		running = continueGame == "yes"
	}
}