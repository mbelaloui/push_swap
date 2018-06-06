ARG=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`; valgrind --leak-check=full ./push_swap  $ARG | valgrind --leak-check=full ./checker $ARG
