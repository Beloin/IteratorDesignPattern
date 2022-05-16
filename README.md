# Iterator Pattern

Padrão iterator implementado com Usuário e vídeos. O usuário pode ter um Container de vídeos onde 
poderá armazenar seus vídeos. E UM iterador pode ser criado para diversas ocasiões. Foram criados 3 iteradores:
ViewCountIterator, CommentCountIterator, TimestampIterator, cada um deles representando um iterador ordenado por 
visualizações, comentários e timestamp de criação respectivamente. 

Iterator

User:
 - videos: VideoContainer

VideoContainer:
 - videoArray[]
 - createVideoIterator;

Video:
 - Title
 - views
 - timestamp
 - comments

Uma plataforma que contém vídeo para múltiplos usuários e que esses vídeos 
podem ser percorridos de três formas:
 - Data de criação
 - Views
 - Comments

Fazer interface padrão de iterator e criar três iteradores padrões para 
usar no vídeo.
