require 'net/http'
require 'json'

class FoodishApp
  def call(env)
    # URL da API Foodish
    url = URI("https://foodish-api.herokuapp.com/api/")

    # Fazendo a requisição HTTP GET
    response = Net::HTTP.get(url)

    # Parse do JSON recebido
    data = JSON.parse(response)

    # Gerando o conteúdo HTML com a imagem
    html = <<-HTML
    <!DOCTYPE html>
    <html>
    <head>
      <title>Foodish Website</title>
      <style>
        body {
          text-align: center;
          font-family: Arial, sans-serif;
          background-color: #f0f0f0;
        }
        img {
          max-width: 80%;
          height: auto;
          margin-top: 50px;
        }
      </style>
    </head>
    <body>
      <h1>Imagem Aleatória de Comida</h1>
      <img src="#{data['image']}" alt="Comida">
    </body>
    </html>
    HTML

    # Retornando a resposta HTTP
    [200, { "Content-Type" => "text/html" }, [html]]
  end
end

run FoodishApp.new

