# you can use print for debugging purposes, e.g.
# print "this is a debug message\n";

sub solution {
    my (@A)=@_;
    # write your code in Perl 5.14
    my $left = $A[0];
    my $right = 0;
    for (my $i = 1; $i < scalar @A; $i++){
        $right += $A[$i];
    }
    my $min = abs($right - $left);
    if((scalar @A) == 2){
        return $min;
    }
    for (my $i = 1; $i < (scalar @A)-1; $i++){
        $left += $A[$i];
        $right -= $A[$i];
        my $newmin = $left - $right;
        if($min > abs($newmin)){
            $min = abs($newmin);
        }
    }
    return $min;
}