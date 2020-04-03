puts "Please input minimum number: "
min = gets.chomp.to_i
puts "Please input maximum number: "
max = gets.chomp.to_i

if min == max || min > max
  abort("Minimum must be LESS THAN maximum!")
end

if min < 0 || max < 0
  abort("Values cannot be negative")
end

puts
puts "Random Number:"
puts rand(min...max)
