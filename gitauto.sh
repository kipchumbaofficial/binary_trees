# Automating git add, commit & push
# Staging changes to be commited
#

git add .

# Reading commit message

echo "Enter the commit message"
read commitMessage

# Commiting chages to be pushed

git commit -m "$commitMessage"

# Push the changes

git push
