#!/bin/bash

# Define the list of branch names
branch_names=(
    "j4nthirty1ne"
    "somnangCode"
    "raksa-lab"
    "vichekaSokhem"
    "LeangM-coder"
    "choeunsela"
    "Rorurmdara"
    "Sreykasim"
    "Jinariyana"
    "sothearah"
    "Chakriya-aaa"
    "stefenly"
    "bunvarn06"
    "lix1110"
    "Senghab-Cheng"
    "TongeangThet"
    "pheaktra1402"
    "Ksander168"
    "Hohav502"
    "seavhour"
    "Panharoth06"
    "Rey-Sok"
)

# Loop to create and push branches
for branch in "${branch_names[@]}"
do
    # Create a new branch
    # git branch "$branch"
    
    # Push the branch to the remote repository
    git push origin "$branch"
    
    echo "Created and pushed branch: $branch"
done
