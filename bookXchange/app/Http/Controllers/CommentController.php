<?php

namespace App\Http\Controllers;

use App\Models\Comment;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;

class CommentController extends Controller
{
    

public function store(Request $request,$bookid)
{
    if(Auth::check()){
        $comment = new Comment;
        $comment->user_id = Auth::user()->id;
        $comment->book_id = $bookid;
        $comment->comment = $request->input('comment');
        $comment->save();
    
        return redirect()->back()->with('success', 'Comment added!');
    }
    return redirect()->route("login");
}

}
