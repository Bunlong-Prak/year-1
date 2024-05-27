<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\User;
use App\Models\Books;
use App\Models\Genres;
use App\Models\BookGenres;

use GuzzleHttp\Client;
use Illuminate\Support\Facades\Auth;


class ProfileController extends Controller
{

    public function uploadToImgur($image)
    {
        $client_id = env('IMGUR_CLIENT_ID');

        // https://stackoverflow.com/questions/63060351/how-to-upload-images-to-imgur-using-laravel
        // upload image to imgur api to my account
        $client = new Client;
        $response = $client->request('POST', 'https://api.imgur.com/3/image', [
            'headers' => [
                'authorization' => 'Client-ID ' . $client_id,
                // if we want to store the image to our account
                // 'authorization' => 'Bearer '. env('IMGUR_ACCESS_TOKEN'),
                'content-type' => 'application/x-www-form-urlencoded',
            ],
            'form_params' => [
                'image' => base64_encode(file_get_contents($image)),
            ],
        ]);

        // get link
        return json_decode($response->getBody()->getContents())->data->link;
    }

    /**
     * Display a listing of the resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        $user = Auth::User();
        $books = Books::where('user_id', $user->id)->get();

        return view('profile.index', compact('books'));
    }

    /**
     * Show the form for creating a new resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function create()
    {
        //
    }

    /**
     * Store a newly created resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @return \Illuminate\Http\Response
     */
    public function store(Request $request)
    {
        //
    }

    /**
     * Display the specified resource.
     *
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function show($id)
    {
        //
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function edit($id)
    {
        $user = Auth::User();
        $book = Books::with("genres")->where('user_id', $user->id)->findOrfail($id);
        // return response()->json($book);
        $genres = Genres::all();
        return view('profile.edit', compact('book','genres'),
    );
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */



//     public function update(Request $request, $id)
// {
//     dd($request);
//     $user = Auth::user();
//     $book = Books::where('user_id', $user->id)->findOrFail($id);

//     $request->validate([
//         'title' => 'required',
//         'author' => 'required',
//         'description' => 'required'
//     ]);

//     $genreIds = $request->input('genres', []);

//     $currentGenreIds = $book->genres->pluck('id')->toArray();

//     $genresToAttach = array_diff($genreIds, $currentGenreIds);

//     $genresToDetach = array_diff($currentGenreIds, $genreIds);

//     foreach ($genresToAttach as $genreId) {
//         $book->genres()->attach($genreId);
//     }

//     foreach ($genresToDetach as $genreId) {
//         $book->genres()->detach($genreId);
//     }

//     // Update the book's other fields
//     $book->update($request->except('genres'));

//     return redirect()->route('profile.index')->with('success', 'Book updated successfully');
// }

    public function update(Request $request, $book_id){

        $update_data = 
        [
        'title' => $request->input('title'),
        'author' => $request->input('author'),
        'description' => $request->input('description'),
        'location' => $request->input('location')
        ];
        
        if($request->has("cover_img")){
            $update_data["cover_img"] = $this->uploadToImgur($request->file('cover_img'));
        }
       
        $save_update = Books::where([["id",$book_id],["user_id", Auth::user()->id]])->update($update_data);
        if($save_update){
            if($request->has("genres")){
                $delete_book_genres = BookGenres::where("book_id",$book_id)->delete();

                if(count($request->input("genres")) >0){
                    foreach ($request->input('genres') as $genre_id) {
                        $saveGenres = BookGenres::create([
                            'book_id' => $book_id,
                            'genre_id' => $genre_id
                        ]);
                    }
                }
            }
        }
        return redirect("/profile");
    }

    /**
     * Remove the specified resource from storage.
     *
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function destroy($id)
    {
        $user = Auth::User();
        $book = Books::where('user_id', $user->id)->findOrfail($id);

        $book->delete();
    
        return redirect()->route('profile.index')
                        ->with('success','Book deleted successfully');
    }
}
