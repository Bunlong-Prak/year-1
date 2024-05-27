@extends('layout.master')
@section('content')
    <div class="fill">
        <form>
            <div class="bg">
                <h1>Contact Us</h1>
                <div style="padding: 3rem;">
                    <p>If you have any questions or concern don't be hesitate to contact us!!</p>
                    <a href="" class="nav-link"> <i class="fa fa-phone"></i> Tel: 012 345 678 </a>
                    <p><br>Or you can contact us through social media: </p>
                    <a href="" class="nav-link"> <i class="fa-brands fa-instagram"></i> Instagram</a>
                    <a href="" class="nav-link"><i class="fa-brands fa-facebook"></i> Facebook</a>
                    <a href="" class="nav-link"><i class="fa-brands fa-twitter"></i> Twitter</a>
                </div>
            </div>
        </form>
    </div>
    <style>
        .fill h1 {
            padding: 0.15rem;
            text-align: center;
            font-weight: normal;
            margin: auto;
        }

        .fill {
            padding: 3rem 0;
            display: grid;
            place-items: center;
            background: rgb(241, 241, 241);
            font-family: 'Ysabeau Office', sans-serif;
        }

        .fill .bg {
            background: white;
            border-bottom: 1px solid rgb(182, 182, 182);
            border-top: 1px solid rgb(182, 182, 182);
            box-shadow: 0 0 1rem grey;
        }
    </style>
@endsection
