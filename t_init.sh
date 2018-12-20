#!/bin/bash
echo "# test123" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/gouridas112233/test123.git
git push -u origin master
