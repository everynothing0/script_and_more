#!/bin/bash

# Vérifie si le nombre d'arguments est correct
if [ "$#" -lt 2 ]; then
  echo "Usage: $0 fichier_texte.txt fichier_c1 fichier_c2 [...]"
  exit 1
fi

# Récupère le fichier texte
fichier_texte="$1"
shift

# Boucle à travers tous les fichiers .c fournis en argument
for fichier_c in "$@"; do
  # Vérifie si le fichier .c existe
  if [ -e "$fichier_c" ]; then
    # Ajoute le contenu du fichier texte au début du fichier .c
    cat "$fichier_texte" "$fichier_c" > "$fichier_c.tmp" && mv "$fichier_c.tmp" "$fichier_c"
    echo "Contenu de $fichier_texte ajouté au début de $fichier_c"
  else
    echo "Le fichier $fichier_c n'existe pas."
  fi
done

echo "Opération terminée."

#donne les permissions grosse pute
