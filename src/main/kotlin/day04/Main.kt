package day04
import java.io.File
import java.io.InputStream
import readFile


fun calculate(numbers: MutableList<Int>){
    var sum = 0
    var firstNumber = 0
    val result = mutableListOf<Int>()
    for (i in numbers.indices) {
        sum += numbers[i]
        result.add(sum)
    }
    for (i in result.indices){
        for (j in result.indices){
            if (result[i] == result[j]){
                firstNumber = result[i]
                println(firstNumber)
                break

            }
        }
    }

}

fun main() {
    val numbers = mutableListOf<Int>()
    val input = File("src/main/kotlin/day04/input1.txt").inputStream()
    input.bufferedReader().useLines { lines ->
        lines.forEach { line ->
            numbers.add(line.toInt())
        }
    }
    calculate(numbers)
}
