def eh_par(n)
  n % 2 == 0
end

print "Digite um número: "
numero = gets.chomp.to_i

if eh_par(numero)
  puts "O número é par."
else
  puts "O número é ímpar."
end

puts "Contando até #{numero}:"
(1..numero).each do |i|
  puts i
end
