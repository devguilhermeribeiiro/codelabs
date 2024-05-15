class Person
  attr_accessor :age, :name

  def initialize(name, age)
    @name = name
    @age = age
  end

  def introduce
    "My name is #{@name} end i'm #{@age} olds."
  end
end
