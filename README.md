# Iterator Pattern
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
