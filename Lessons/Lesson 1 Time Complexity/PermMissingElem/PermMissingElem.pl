# you can use print for debugging purposes, e.g.
# print "this is a debug message\n";

sub solution {
    my (@A)=@_;
    # write your code in Perl 5.14
    my @B = sort @A;
    for(my $i = 0; $i < scalar @B; $i++){
        print "i: $i\n";
        print "B: $B[$i]\n";
        if( ($B[$i] - 1) != $i){
            return $B[$i]-1;
        }
    }
    return (scalar @A +1);
}