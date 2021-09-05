Assignment name  : count_alpha
Expected files   : count_alpha.c
Allowed functions: write, printf
--------------------------------------------------------------------------------

Écrire un programme count_alpha qui prend une chaîne et affiche le nombre d'occurences
de ses caractères alphabétiques. Les autres caractères ne sont pas comptés. L'ordre est l'ordre d'apparition dans la chaîne.
L'affichage doit être terminé par un newline.

Le format est dans les exemples.

Si le nombre d'arguments n'est pas 1, afficher juste un newline.

Exemples :
$> ./count_alpha abbcc
1a, 2b, 2c
$> ./count_alpha "abbcc"
1a, 2b, 2c
$> ./count_alpha "abbcc" "dddeef" | cat -e
$
$> ./count_alpha "My Hyze 47y 7." | cat -e
1m, 3y, 1h, 1z, 1e$
$> ./count_alpha "" | cat -e
$