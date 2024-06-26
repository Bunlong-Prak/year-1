<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\MainController;
use App\Http\Controllers\ProfileController;
use App\Http\Controllers\CommentController;
use App\Models\Comment;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/
Route::get('/', [MainController::class, 'home']);
Route::get('/about', [MainController::class, 'about']);
Route::get('/signUp', [MainController::class, 'signUp']);
Route::get('/login', [MainController::class, 'login'])->name('login');
Route::get('/logout', [MainController::class, 'logout']);
Route::get('book/detail/{id}', [MainController::class, 'bookDetail']);

//comment post
Route:: post ('book/detail/savecommment/{id}', [CommentController::class,'store']);

Route::resource('profile', ProfileController::class);



// Functionality routes
Route::post('/registerUser', [MainController::class, 'registerUser']);
Route::post('/loginUser', [MainController::class, 'loginUser']);
Route::post('/bookUploadSave', [MainController::class, 'bookUploadSave']);
// End of functionality routes

Route::middleware(['auth'])->group(function () {
    Route::get('/upload', [MainController::class, 'upload']);
});

Route::get('/privacy', function () {
    return view('privacy');
});
Route::get('/termcondition', function () {
    return view('termcondition');
});
Route::get('/contactus', function () {
    return view('contactus');
});

