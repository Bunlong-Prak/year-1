@extends('layout.master')
@section('content')
    @if ($book)
        <div class="container">
            <div class="detail">
                <img src="{{ $book->cover_img }}" alt="cover image">
                <div class="info">
                    <h1>Title: <span>{{ $book->title }} </span></h1>
                    <h1>Author: <span>{{ $book->author }}</span></h1>
                    <h1 class="genre">Genre:
                        @if ($book->genres)
                            @foreach ($book->genres as $genre)
                                <span>{{ $genre->genre_name->name }}</span>
                            @endforeach
                        @endif
                    </h1>
                    <h1>Contact: <span>{{ $book->user->phone }}</span></h1>
                    <h1>Location to Pick up: <span>{{ $book->location }}</span></h1>
                    <h2>Book Description: <span>{{ $book->description }}</span></h2>

                </div>
                
            </div>
            <div class="comment">
            {{-- comment --}}
            <form id="comment" action="/book/detail/savecommment/{{$book->id}}" method="POST">
                @csrf
            <input type="hidden" value="{{$book->id}}">
            
            
                <label for="comment">Comment</label>
                <textarea id="comment" name="comment" placeholder="Your comment"></textarea><br>
            
                {{-- <button type="submit">Submit</button> --}}
                <input type="submit" value="Submit">
            </form><br>
        </div>
           <h1>All comments</h1>
            @if (count($book->comments)>0)
            
            @foreach ( $book->comments as $comment)
            <div class="user_comment">
            <div class="user_bold">
            <p>From : <span>{{$comment->user->username}}</span>  <p>
            </div>
         
            <p>message: "<span>{{$comment->comment}}"</span></p>
        </div>
            @endforeach
    
                
            @endif
            {{-- <form action="">
             
                <label for="comment">Comment :<span>{{ $comment->comment }} </label>

            </form> --}}
           
        </div>
    @endif
    <style>
textarea, select {
  width: 100%;
  padding: 12px 20px;
  margin: 8px 0;
  display: inline-block;
  border: 1px solid #ccc;
  border-radius: 4px;
  box-sizing: border-box;
}
.user_comment {
  width: 100%;
  padding: 12px 20px;
  margin: 8px 0;
  display: inline-block;
  border: 1px solid #ccc;
  background-color: #f2f2f2;
  border-radius: 4px;
  box-sizing: border-box;
}

input[type=submit] {
  width: 97%;
  background-color: #4CAF50;
  color: white;
  padding: 14px 20px;
  margin: 8px 0;
  border: none;
  border-radius: 4px;
  cursor: pointer;
  transition: all .2s ease-in-out;
}

input[type=submit]:hover {
  background-color: #45a049;
  transform: scale(1.02); 

}

.comment {
  border-radius: 5px;
  background-color: #f2f2f2;
  padding: 20px;
}
.user_bold p {
    font-weight: 900;
    font-size: 1.2rem;
}

        .detail .genre span:first-child::before {
            content: "";
        }

        .detail .genre span::before {
            content: ", ";
        }

        .detail {
            padding: 2rem 0;
            display: grid;
            grid-template-columns: 1fr 3fr;
            column-gap: 2rem;
            
        }

        .detail img {
            aspect-ratio: 1/1.5;
            width: 100%;
            object-fit: cover;
        }

        .detail h1 {
            margin: 1rem 0;
            font-family: 'Merriweather', sans-serif;
            font-size: 1.3rem;
        }

        .detail h2 {
            margin: 1rem 0;
            font-size: 1.1rem;
            font-family: 'Merriweather', sans-serif;
        }

        .detail h2 span {
            font-weight: normal;
            font-weight: 1.2rem;
            font-family: 'Ysabeau Office', sans-serif;
        }

        .detail h1 span {
            font-weight: normal;
        }
        p{
            margin: 1rem 0;
            font-family: 'Merriweather', sans-serif;
            font-size: 0.9rem;

        }
        p span{
            font-weight: normal;
            /* font-weight: 1.2rem; */
            font-family: 'Ysabeau Office', sans-serif;
        }
    </style>
@endsection
