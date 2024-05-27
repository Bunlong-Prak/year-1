@extends('layout.master')
@section('content')
    <link rel="stylesheet" href="https://unpkg.com/aos@next/dist/aos.css" />
    <div class="about">
        <h1>About Us</h1>
        <div style="padding: 2rem;">
            <p>Welcome to BookXchange!</p>
            <p>
                &emsp;&emsp;&emsp;Book X Change is a revolutionary platform dedicated to connecting book enthusiasts and
                promoting a culture of reading and knowledge sharing.
                Our platform provides a seamless and user-friendly experience for individuals to browse through an extensive
                collection of books and connect with other members.</p>
            <p>
                &emsp;&emsp;&emsp;Mission: Our mission is to create a vibrant community where individuals can easily
                exchange books, discover new literary treasures, and connect with like-minded readers.
                At Book X Change, we understand the joy of immersing oneself in the pages of a captivating book and the
                desire to share that experience with others;and could be to promote literacy, knowledge sharing, and a love
                for books among readers. It might include encouraging reading habits, supporting authors and publishers,
                fostering a sense of community, and providing resources for book enthusiasts.</p>
            <p>
                &emsp;&emsp;&emsp;Goal: The goal of Book X Change could vary depending on your specific vision. Some
                potential goals might include: </p>
            <p>
                &emsp;&emsp;&emsp;Building a large and engaged user base of readers and book lovers. </p>
            <p> &emsp;&emsp;&emsp;Providing a platform for authors to promote their work and connect with readers.</p>
            <p> &emsp;&emsp;&emsp;Offering a wide range of books across various genres and formats. </p>
            <p> &emsp;&emsp;&emsp;Facilitating book discussions, recommendations, and reviews.</p>
        </div>
        <a href="" style="text-decoration: underline; "><i class="fa fa-arrow-down" aria-hidden="true"></i> Meet Our Team
            <i class="fa fa-arrow-down" aria-hidden="true"></i> </a>
    </div>
    <div class="about_us">
        <h1 style="text-align: center;">Meet the Developer Team</h1>
        <div style="padding: 0 15%;">
            <section class="profile">
                <div class="info" style=" padding: 1rem; margin: 1rem; " data-aos="fade-up" data-aos-duration="1000">
                    <a href="https://www.instagram.com/_luuxchh_/"><img src="../../images/lux.jpg"></a>
                    <h2>Kimlux Duch</h2>
                    <h3>Role: Frontend </h3>
                </div>
                <div class="info" style="padding: 1rem; margin: 1rem;" data-aos="fade-up" data-aos-duration="2000">
                   <a href="https://www.instagram.com/_bun_long_/"><img src="../../images/bunlong.jpg"></a> 
                    <h2>Bunlong Prak</h2>
                    <h3>Role: API </h3>
                </div>
                <div class="info" style="padding: 1rem; margin: 1rem;" data-aos="fade-up" data-aos-duration="4000">
                    <a href="https://web.facebook.com/sovann.dara.1466"><img src="../../images/dara.jpg"></a>
                    <h2>Sovandara Phallim</h2>
                    <h3>Role: Backend </h3>
                </div>
            </section>
        </div>
    </div>

    <style>
        .about_us {
            font-family: 'Merriweather', sans-serif;
            padding: 2rem 0;
            background: rgb(241, 241, 241);
        }

        .about_us img:hover {
            transform: scale(1.2);
        }

        .about_us img {
            transition: all 0.3s;
            width: 10rem;
            height: 10rem;
            border-radius: 5vh;
            box-shadow: 10px 5px 5px rgba(0, 0, 0, 0.2);
        }

        .info {
            display: grid;
            place-items: center;


        }

        .profile {
            display: grid;
            grid-template-columns: 33.3% 33.3% 33.3%;
            place-items: center;
        }

        .about {
            padding: 2rem 0;
            background: linear-gradient(rgba(233, 233, 233, .8), rgba(233, 233, 233, .8)), url('../../images/classmate.jpg');
            background-position: center;
            background-size: cover;
            min-height: 60vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
        }

        .about h1 {
            text-align: center;
            font-family: 'Merriweather', sans-serif;
            margin: 0.7rem 0;
        }

        .about p {
            text-align: center;
            font-family: 'Ysabeau Office', sans-serif;
            font-size: 1.1rem;
        }
    </style>
    <script src="https://unpkg.com/aos@next/dist/aos.js"></script>
    <script>
        AOS.init({
            duration: 3000,
            once: true,
        });
    </script>
@endsection
