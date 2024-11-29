Windows Command Prompt Commands

dir
Lists files and directories in the current directory (like ls in Unix).
Example: dir /w (lists files in wide format)

cd
Changes the current directory.
Example: cd C:\Users (navigates to the Users directory)

cls
Clears the command prompt screen.
Example: cls (clears all displayed text)

mkdir or md
Creates a new directory.
Example: mkdir my_folder (creates a directory named my_folder)

rmdir
Removes an empty directory.
Example: rmdir my_folder (removes the my_folder directory)

del
Deletes one or more files.
Example: del file.txt (deletes file.txt), del *.txt (deletes all .txt files)

move
Moves or renames files or directories.
Example: move old_name.txt new_name.txt (renames the file)

copy
Copies files to a specified location.
Example: copy file.txt D:\Backup (copies file.txt to Backup directory)

echo
Displays messages or outputs text to a file.
Example: echo Hello World (prints "Hello World"), echo Hello > file.txt (writes "Hello" to file.txt)

type
Displays the content of a text file.
Example: type file.txt (shows the content of file.txt)

ipconfig
Displays network configuration details.
Example: ipconfig (shows IP address, subnet mask, and gateway)

ping
Tests connectivity to another network device or website.
Example: ping google.com (checks if google.com is reachable)

tasklist
Displays a list of currently running processes.
Example: tasklist (shows all running processes)

taskkill
Terminates a running process.
Example: taskkill /IM notepad.exe /F (forcefully kills Notepad)

chdir
Displays or changes the current directory (alternative to cd).
Example: chdir D:\Projects (navigates to the Projects directory)

attrib
Changes file or directory attributes (read-only, hidden, etc.).
Example: attrib +r file.txt (makes file.txt read-only)

help
Displays available commands and their descriptions.
Example: help (lists all available commands)

find
Searches for text in a file.
Example: find "keyword" file.txt (searches for "keyword" in file.txt)

fc
Compares two files and shows the differences.
Example: fc file1.txt file2.txt (compares file1.txt and file2.txt)

exit
Closes the Command Prompt.
Example: exit (closes the current session)

Git Commands

git init
Initializes a new Git repository.
Example: git init (creates a repository in the current directory)

git clone
Clones a remote repository.
Example: git clone https://github.com/user/repo.git

git status
Displays the status of the working directory and staging area.
Example: git status

git add
Adds changes to the staging area.
Example: git add file.txt, git add . (stages all changes)

git commit
Commits changes to the repository.
Example: git commit -m "Initial commit"

git log
Displays the commit history.
Example: git log (shows all commits)

git branch
Lists, creates, or deletes branches.
Example: git branch (lists branches), git branch feature (creates a new branch)

git checkout
Switches between branches or commits.
Example: git checkout feature (switches to the feature branch)

git merge
Merges changes from one branch into another.
Example: git merge feature (merges the feature branch into the current branch)

git push
Pushes changes to a remote repository.
Example: git push origin main

git pull
Fetches and merges changes from a remote repository.
Example: git pull origin main

git diff
Shows the differences between changes.
Example: git diff (shows unstaged changes)

git reset
Resets the staging area or working directory.
Example: git reset file.txt (unstages file.txt)

git rm
Removes files from the working directory and staging area.
Example: git rm file.txt

git stash
Temporarily saves changes without committing.
Example: git stash (saves changes), git stash apply (restores them)

git remote
Manages remote repositories.
Example: git remote add origin https://github.com/user/repo.git

git fetch
Downloads changes from a remote repository.
Example: git fetch origin

git tag
Adds tags to commits.
Example: git tag v1.0

git rebase
Reapplies commits on top of another branch.
Example: git rebase main

git config
Configures Git settings like username and email.
Example: git config --global user.name "John Doe"