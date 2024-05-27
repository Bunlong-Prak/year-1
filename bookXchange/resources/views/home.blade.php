@extends('layout.master')
@section('content')
    <div class="container">

        <h1 class="new">New Arrival</h1>
        {{-- <form action="/" method="GET"> --}}
            <div class="grid">
                <section class="genre">
                    {{-- <div class="checkbox_genre">
                        <input id="s1-14" type="checkbox" class="switch">
                        <label for="s1-14">Switch</label> --}}
                      
                    <div>
                        <h2>Genre</h2>
                        <div class="checkbox_genre">
                            @if (count($genres) > 0)
                                @foreach ($genres as $genre)
                                    <form action="/" method="get"> 
                                        <label for="{{ $genre->id }}" onclick="submitGenre('{{'genre'. $genre->id}}')">
                                            <input type="checkbox" id="{{ $genre->id }}" name="genre" class="switch"
                                                value="{{ $genre->id }}" {{ $genresQuery == $genre->id ? "checked" : "" }}>
                                            {{ $genre->name }}
                                        </label>
                                        <input type="submit" id="genre{{$genre->id}}" style="display: none;"  value="submit">
                                    </form>
                                @endforeach
                            @endif
                        </div>
                    </div>
                </section>
                <section class="books">
                <div class="sort_search">
                    <form class="search" action="/" method="GET">
                        <span class="search_icon"></span>
                        <input type="text" placeholder="Search Titles" name="searchQuery" class="search_input">
                        <button type="submit" class="search_button">
                            Search
                        </button>

                       
                    </form>
                <div class="sort_pop">
                    <form action="/" method="get">
                        
                        <input type="hidden" name="sortDesc" value={{$sortDesc ? '0' : '1'}}>
                        <button type="submit" class= "sort_button">{{ $sortDesc ? 'Sort Ascending' : 'Sort Descending' }}</button>
                    </form>
                </div>
                    {{-- <button type=" submit" class="sort_button" onclick="sort()">Sort Decending</button> --}}
                </div>
                    <ul>
                        {{-- second argu pass props to book layout --}}
                        @include('layout.book', ['books' => $books])
                    </ul>
                </section>
            </div>
        {{-- </form> --}}

        <script>
            function submitGenre(genre_id) {
                const btn = document.getElementById(genre_id);
                btn.click()
            } 
        </script>
    </div>
    <style>
        .sort_button {
        appearance: button;
        backface-visibility: hidden;
        background-color: #405cf5;
        border-radius: 6px;
        border-width: 0;
        box-shadow: rgba(50, 50, 93, .1) 0 0 0 1px inset,rgba(50, 50, 93, .1) 0 2px 5px 0,rgba(0, 0, 0, .07) 0 1px 1px 0;
        box-sizing: border-box;
        color: #fff;
        cursor: pointer;
        font-family: -apple-system,system-ui,"Segoe UI",Roboto,"Helvetica Neue",Ubuntu,sans-serif;
        font-size: 100%;
        height: 44px;
        line-height: 1.15;
        /* margin: 12px 0 0; */
        margin: -2px;
        margin-left: 15px;
        outline: none;
        overflow: hidden;
    
        position: relative;
        text-align: center;
        text-transform: none;
        transform: translateZ(0);
        transition: all .2s,box-shadow .08s ease-in;
        user-select: none;
        -webkit-user-select: none;
        touch-action: manipulation;
        width: 100%;
        }

        /* .sort_button:disabled {
        cursor: default;
        } */

        /* .sort_button:focus {
        box-shadow: rgba(50, 50, 93, .1) 0 0 0 1px inset, rgba(50, 50, 93, .2) 0 6px 15px 0, rgba(0, 0, 0, .1) 0 2px 2px 0, rgba(50, 151, 211, .3) 0 0 0 4px;
        } */
        .sort_search{
            display: flex;
            justify-content: flex-start;
        }
        .sort_pop :hover {
            /* -ms-transform: scale(1); 
            -webkit-transform: scale(1); Safari 3-8 */
            transform: scale(1.2);
        }
        .genre {
            display: flex;
            flex-direction: column;
            row-gap: 3rem;
            padding: 0 1rem;
        }

        .genre div {
            display: flex;
            flex-direction: column;
        }

        /* .genre label {
            margin: 0.5rem 0;
            font-family: 'Ysabeau Office', sans-serif;
            font-size: 1.2rem;
        } */

        .genre form {
            margin: 0.5rem 0;
            font-family: 'Ysabeau Office', sans-serif;
            font-size: 1.2rem;
        }

        .genre h2 {
            font-family: 'Merriweather', sans-serif;
            font-weight: normal;
            margin-bottom: .25rem;
        }

        .grid {
            display: grid;
            grid-template-columns: 1fr 3fr;
            column-gap: 1rem;
        }

        .search {
            position: relative;
            display: flex;
            align-items: center;
            width: max-content;
            height: 40px;
        }

        .search img {
            position: relative;
            width: 24px;
           
            transform: translateX(-2rem);
        }

        .books {
            padding-left: 1rem;
            border-left: 1px solid rgb(163, 162, 162);
            padding-bottom: 2rem;
        }

        .books ul {
            margin-top: 1.5rem;
            column-gap: 1.5rem;
            row-gap: 1rem;
            display: grid;
            grid-template-columns: repeat(3, 1fr);
        }

        .new {
            margin: 0;
            margin-bottom: 1rem;
            font-family: 'Merriweather', sans-serif;
            padding: 2rem 0;
            text-align: center;
            border-bottom: 1px solid rgb(163, 162, 162);
        }


        /* New */
        .search_icon {
            position: absolute;
            left: 10px;
            width: 20px;
            height: 20px;
            background: url("data:image/svg+xml,%3Csvg viewBox='0 0 256.001 256.001' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='m232.477 215.516-40.678-40.678a96.108 96.108 0 1 0-16.972 16.97l40.679 40.678a12 12 0 1 0 16.97-16.97ZM43.997 116a72 72 0 1 1 72 72 72.081 72.081 0 0 1-72-72Z' fill='grey'/%3E%3C/svg%3E") left content-box no-repeat;
        }

        .search_input {
            cursor: pointer;
            font: normal 1rem Calibri;
            color: #505050;
            width: 320px;
            height: 20px;
            padding: 10px 100px 10px 40px;
            border-radius: 4px;
            border: solid 2px #29b0f7;
        }

        .search_button {
            position: absolute;
            right: 1px;
            width: 90px;
            height: 40px;
            background-color: #e4e4e4;
            border: none;
            border-radius: 0 4px 4px 0;
        }

        .card {
            position: relative;
            display: flex;
            justify-content: center;
            align-items: flex-start;
            max-width: 100%;
            height: 425px;
            background: white;
            border-radius: 20px;
            transition: 0s;
            box-shadow: 0 35px 80px rgba(0, 0, 0, 0.15);
        }

        .card:hover {
            height: 450px;
        }

        .card .img-box {
            position: absolute;
            top: 20px;
            z-index: 1;
            width: calc(100% - 50px);
            height: max-content;
            background: #333;
            border-radius: 12px;
            overflow: hidden;
            transition: 0.5s;
        }

        .card:hover .img-box {
            top: -100px;
            scale: 0.75;
            box-shadow: 0 15px 45px rgba(0, 0, 0, 0.2);
        }

        .book_info {
            position: absolute;
            bottom: 10px;
            display: flex;
            flex-direction: column;
            width: 100%;
            height: 35px;
            text-align: center;
            overflow: hidden;
            transition: 0.5s;
        }

        .book_title {
            font: bold 30px Calibri;
            text-align: center;
            overflow: hidden;
            transition: 0.5s;
            flex: 0 0 auto;
        }

        .book_wrapper {
            opacity: 0;
            transition: 1s;
        }

        .card:hover .book_wrapper {
            opacity: 1;
        }

        .book_detail {
            display: -webkit-box;
            -webkit-line-clamp: 5;
            -webkit-box-orient: vertical;
            overflow: hidden;
            font: normal 15px Calibri;
            text-align: center;
            overflow: hidden;
            transition: 0.5s;
            margin: 15px;
        }

        .card:hover .book_info {
            height: max-content;
        }
        @supports (-webkit-appearance: none) or (-moz-appearance: none) {
      .checkbox_genre input[type=checkbox] {
        --active: #275EFE;
        --active-inner: #fff;
        --focus: 2px rgba(39, 94, 254, .3);
        --border: #BBC1E1;
        --border-hover: #275EFE;
        --background: #fff;
        --disabled: #F6F8FF;
        --disabled-inner: #E1E6F9;
        -webkit-appearance: none;
        -moz-appearance: none;
        height: 21px;
        outline: none;
        display: inline-block;
        vertical-align: top;
        position: relative;
        margin: 0;
        cursor: pointer;
        border: 1px solid var(--bc, var(--border));
        background: var(--b, var(--background));
        transition: background 0.3s, border-color 0.3s, box-shadow 0.2s;
      }
      .checkbox_genre input[type=checkbox]:after {
        content: "";
        display: block;
        left: 0;
        top: 0;
        position: absolute;
        transition: transform var(--d-t, 0.3s) var(--d-t-e, ease), opacity var(--d-o, 0.2s);
      }
      .checkbox_genre input[type=checkbox]:checked {
        --b: var(--active);
        --bc: var(--active);
        --d-o: .3s;
        --d-t: .6s;
        --d-t-e: cubic-bezier(.2, .85, .32, 1.2);
      }
      .checkbox_genre input[type=checkbox]:disabled {
        --b: var(--disabled);
        cursor: not-allowed;
        opacity: 0.9;
      }
      .checkbox_genre input[type=checkbox]:disabled:checked {
        --b: var(--disabled-inner);
        --bc: var(--border);
      }
      .checkbox_genre input[type=checkbox]:disabled + label {
        cursor: not-allowed;
      }
      .checkbox_genre input[type=checkbox]:hover:not(:checked):not(:disabled) {
        --bc: var(--border-hover);
      }
      .checkbox_genre input[type=checkbox]:focus {
        box-shadow: 0 0 0 var(--focus);
      }
      .checkbox_genre input[type=checkbox]:not(.switch) {
        width: 21px;
      }
      .checkbox_genre input[type=checkbox]:not(.switch):after {
        opacity: var(--o, 0);
      }
      .checkbox_genre input[type=checkbox]:not(.switch):checked {
        --o: 1;
      }
      .checkbox_genre input[type=checkbox] + label {
        display: inline-block;
        vertical-align: middle;
        cursor: pointer;
        margin-left: 4px;
      }
  
      .checkbox_genre input[type=checkbox]:not(.switch) {
        border-radius: 7px;
      }
      .checkbox_genre input[type=checkbox]:not(.switch):after {
        width: 5px;
        height: 9px;
        border: 2px solid var(--active-inner);
        border-top: 0;
        border-left: 0;
        left: 7px;
        top: 4px;
        transform: rotate(var(--r, 20deg));
      }
      .checkbox_genre input[type=checkbox]:not(.switch):checked {
        --r: 43deg;
      }
      .checkbox_genre input[type=checkbox].switch {
        width: 38px;
        border-radius: 11px;
      }
      .checkbox_genre input[type=checkbox].switch:after {
        left: 2px;
        top: 2px;
        border-radius: 50%;
        width: 17px;
        height: 17px;
        background: var(--ab, var(--border));
        transform: translateX(var(--x, 0));
      }
      .checkbox_genre input[type=checkbox].switch:checked {
        --ab: var(--active-inner);
        --x: 17px;
      }
      .checkbox_genre input[type=checkbox].switch:disabled:not(:checked):after {
        opacity: 0.6;
      }
    }
  
    .checkbox_genre * {
      box-sizing: inherit;
    }
    .checkbox_genre *:before,
    .checkbox_genre *:after {
      box-sizing: inherit;
    }
    </style>
@endsection


  
  
  