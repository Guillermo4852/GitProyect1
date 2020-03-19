# GitPoryect1
/*Sumary; chapter 2*/
/*First code to program; we need enter the project folder\n
            for use git first use command
$ git init //this create a new subdirectory called .git
to start checking versions of existing files enter:
$ git status //to analize the folder and their stuffs
$ git add LICENSE //enter to give permissions
$ git commit -m 'initial project version' // this is to confirmed and the name of the proyect
$ git clone https://github.com/libgit2/libgit2 //to clone a archive git and receives a copy of almost all the data that the server has.create a directory called libgit2, initialize a directory
$ git status // the command indicates which branch you are on and informs you that it has not changed with respect to the same branch on the server.
$ git add *example // is being tracked and ready to be confirmed and is a command that serves several purposes - you use it to start crawling new files, prepare files, and do other things like flagging conflicting files in combination; also to confirm again any changes that the last time you ran git add.
$ git config --global core.editor //to select a prefer editor
$ cat .gitignore // to create a folder where all what is there will be ignore or "$ git diff" to be more specifict
$ git commit // enter this to confirm the file(when you stay in VIM you need pres [esc] and then write: :wq + enter
$ git commit -m "fileexample" // another option to confirm the file
$ git commit -a -m // to skip the step *git add
$ git rm // it prepare delete the folder
$ git mv file_from file_to // to rename a file in git
$ git log // use to look back to see what modifications have been made. as well as author and date
$ git log --stat /*see some statistics of each confirmation;prints after each confirmation a list of modified files, indicating how many have been modified and how many lines have been added and removed*/
$ git log --pretty=oneline //modify the output format.The oneline option prints each confirmation on a single line
$ git log --pretty=format: "ex" "ex" ex" //allows you to specify your own format
$ git log --pretty=format:"%h %s" --graph //add a small ASCII chart showing your branch and junction history
/*About the time with $ git log -<n> you determine what time ago want to see or $ git log --since= <n.Weeks> also you can filtering by author
 with "--author" and also search between key words in confirmed messages or both with "--all-match"
$ git log -S //receives a string and only shows the commits that changed the code by adding or removing the string
$ git commit --amend //to redo the confirmation, you can reconfirm
$ git reset HEAD <file> // to undo the preparation of the file; You can see that the changes have been reversed.
$ git remote // It will show the names of each of the remotes you have specified
$ git remote -v //shows the URLs that Git has associated with the name and that will be used when reading and writing
$ git remote add [nombre] [url] //add a new remote and associate it with a name that you can easily reference
$ git fetch [remote-name] // it will go to the remote project and it will bring all the data that you do not have yet of said remote
$ git fetch origin //it brings all the new work that has been sent to that server since you cloned it
$ git pull // automatically extract and merge the remote branch with your current branch
$ git push [nombre-remoto] [nombre-rama] // If you want to send your master branch to your origin server
$ git push origin master //It will send all the commits you have made to the server
$ git remote show [nombre-remoto] //view more information about a particular remote
$ git remote show // indicate which branch you will automatically send information to every time you run git push
$ git remote rename // change the name of a remote reference you can run
$ git remote rm // changed server or do not want to continue using
$ git tag // Listar las etiquetas disponibles en Git es sencillo
$ git show // view tag information along with tagged commit
$ git config --global alias.(alias) (command) //to change the command to a alias to be more easy the way to enter
$ git last //to see the last modificated




  /*Summary: Capter 2*/
$ git branch <name> // to create a new pointer pointing to the same confirmation where you are currently
$ git log --oneline --decorate //You can see that the branches "master" and "example" are next to the confirmation
$ git checkout <file_example> // This moves the HEAD pointer to the branch to a file
$ vim test.rb //NEED with the below command
$ git commit -a -m 'made a change' // to make another change confirmation
$ git log --oneline --decorate --graph --all // It will show the history of your confirmations, indicating where the pointers of your branches are and how your history has diverged
$ git checkout -b (example) // to do in a same action a git branch and checkout
$ git merge // carry out the appropriate tests, make sure that the solution is correct, and incorporate the changes into the master branch to put them into production
$ git merge master //you can merge the master branch onto the branch
$ git mergetool // It will start the corresponding visualization tool and will allow you to resolve conflicts with it.
$ git branch // you get a list of the branches present in your project
$ git branch -v // to see the latest change confirmation for each branch
$ git branch --merged // view the branches that have been merged with the active branch
$ git branch --no-merged // show all branches containing jobs without merging
$ git fetch origin //To sync
$ git.ourcompany.com // To retrieve any data present there that you don't have, and update your local database by moving your branch
$ git fetch //update your remote references
$ git remote add // include it as a new remote reference to your current project
$ git fetch teamone // to retrieve all the content of the remote teamone that you did not have.
$ git push (remoto) (rama) // you can take it to the remote in the same way that you took your first branch.
$ git merge origin/serverfix //integrate (merge) this into your current branch of work,
$ git checkout -b [rama] [nombreremoto]/[rama] // prepare other monitoring branches if you want to have some that follow other remote branches or not follow the master branch
// -u o --set-upstream-to of command git branch assign it to a remote branch you just brought to you, or you want to change the branch you are tracking
$ git branch -vv // see the tracking branches you have assigned
$ git fetch --all // To have the changes in front and back updated, you must fetch them from each server before executing the command
$ git rebase // capture all committed changes in one branch and reapply them to another.
$ git rebase --onto master server client // to catch changes from client that are not on server and reapply them on your main branch using the option
$ git rebase [rama-base] [rama-puntual] // activates the point branch and applies it to the base branch
$ git push --force // overwrite the registry on the server
$ git config --global pull.rebase true // you can assign the setting value pull.rebase.
