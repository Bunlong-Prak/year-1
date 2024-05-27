<div class="black-bar">
    <a href="">CAMBODIA</a>
    @if (Auth::check())
    <a href="{{ route('profile.index')}}">{{Auth::User()->username}}</a>
        <a href="../../logout">Logout</a>
    @else
        <a href="../../signUp">Register</a>
        <a href="../../login">Login</a>
    @endif
</div>
<nav class="container">
    <div class="logo">
        <div class="wrapper">
            <img class="" src="../../images/logo.png" alt="">
        </div>
       <a href="/"><h1 class="titleFont">bookXchange</h1></a> 
        
       <a href="/"><p style="margin-left:20px;font-weight:bold;font-size:20px">ブックエクスチェンジ</p></a>

       
    </div>
  
    <div class="left">
        <a href="../../about">About Us</a>
        <a href="../../upload">Upload Book</a>
    </div>
</nav>
<div class="home">
    <a href="../../">Home</a>
</div>
<style>
/* blinking white animtion tmr jam tver */
    /* .titleFont {
        animation: blink-animation 2s steps(5, start) infinite;
        -webkit-animation: blink-animation 2s steps(5, start) infinite;
      }
      @keyframes blink-animation {
        to {
          visibility: hidden;
        }
      }
      @-webkit-keyframes blink-animation {
        to {
          visibility: hidden;
        }
      } */

    .home {
        display: flex;
        justify-content: center;
        background: rgb(228, 228, 228);
        padding: 1rem 0;
        column-gap: 8rem;
    }
    .black-bar {
        display: flex;
        justify-content: center;
        background: black;
        padding: 1rem 0;
        column-gap: 8rem;
    }
    .black-bar a {
        color: white;
    }
    .titleFont {
        transition: all 0.3s;
    }
    .titleFont:hover {
        transform: translateX(10px);
    }
    nav {
        padding: 1rem 0;
        display: flex;
        justify-content: space-between;
        align-items: center;
    }
    .wrapper {
        width: 60px;
        aspect-ratio: 1/1;
        padding: 1rem;
        background: rgb(235, 233, 233);
        border-radius: 50%;
    }
    nav img {
        display: block;
        width: 60px;
        transform: translateY(-.3rem);
    }
    .logo {
        display: flex;
        align-items: center;
    }
    nav h1 {
        font-family: 'Merriweather', sans-serif;
        font-size: 2.5rem;
        margin-left: .5rem;
    }
    a {
        padding: 0 1rem;
        font-size: 1.2rem;
        font-family: 'Ysabeau Office', sans-serif;
        color: black;
        transition: 0.15s ease-in-out;
    }
    a:hover {
        color: orangered;
        /* transform: scale(1.1);  */
    }
</style>
