# you can use print for debugging purposes, e.g.
# print "this is a debug message\n";

use 5.010;
use strict;
use warnings;

sub solution {
    my ($X, $Y, $D)=@_;
    # write your code in Perl 5.14
    my $answer = int (($Y - $X)/$D);
    if((($Y - $X) % $D) == 0){
        return $answer;
    }
    return ($answer+1);
}