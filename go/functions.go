package main

import (
	"fmt"
	"math/rand"
	"time"
)

func promptNumber(text string) int {
	fmt.Println(text)
	var input int
	fmt.Scanln(&input)
	return input
}

func promptString(text string) string {
	fmt.Println(text)
	var input string
	fmt.Scanln(&input)
	return input
}

func generateSolution() int {
	generator := rand.New(rand.NewSource(time.Now().UnixNano()))
	return generator.Intn(100)+1
}

func playGameWithSolution(solution int) bool {
	fmt.Println("You have 10 tries to guess my number between 1 and 100.\n")

	for i := 0; i < 10; i++ {		
		var guess = promptNumber("What's your guess? ")
		
		if guess < solution {
			fmt.Println("My number is bigger.")
		} else if guess > solution {
			fmt.Println("My number is smaller.")
		} else {
			fmt.Println("That's it. You guessed it.")
			return true
		}
	}

	return false
}

func promptRematch() bool {
	return promptString("Do you want to play another round?") == "yes"
}

func main() {
	running := true
	for running {
		if !playGameWithSolution(generateSolution()) {
			fmt.Println("Ohh you didn't guess it. :(")
		}
		running = promptRematch()
	}
}