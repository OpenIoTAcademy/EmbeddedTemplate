GIT is an advanced versioning tool and provides many advanced features to simplify version management.

*Open IoT Academy* developers are free to use all features of GIT, but *Open IoT Academy* recommends following the below instructions to manage your code and contribute on OPEN IOT ACADEMY. It also simplifies the integration of newbies in GIT.

**1. Get \*OPEN IOT ACADEMY\* Code Base (Repository)**

Use *git clone* command to clone Open IOT Academy repository from remote to your local.

> git clone https://github.com/OpenIoTAcademy/<REPO_NAME>.git`

When you clone a git repository, a **local master** branch is created and tracks **remote master** branch.

Now, go to the directory and start to use the repository.

**2. Create a new branch.**

When you need to modify Open IOT Academy code base, please create a new branch. Open IoT Academy recommends a new branch from the master branch which has the latest modification; please check out the master branch first,

> git checkout master`

And rebase your local master with the remote master to get latest commits from the remote master.

> git pull --rebase origin master`

Now create a new branch from the local master branch. Please use *git checkout* command with -b parameters to create a new branch.

> git checkout -b <NEW_BRANCH_NAME>`

**IMP - Branch Name Convention:** Commits and tickets (GitHub Issues) in the repository should be mapped to trace the commits easily. So, when creating a new branch, please use the following notation.

> `T-<IssueNo>` 

Example; if create a branch for *Issue 56* in GitHub Issues page, branch name must be T-56)

Once the new branch is created, you can start to work in the new branch.

**3. Committing Changes**

Once the modifications have done or want to save intermediate changes in the local branch, commit the modifications. Use *git commit* command with -am parameters to commit your changes (-a : git add -m : message)

> git commit -am "T-<IssueNo> : The Commit Message"

**IMP - Commit Comment Convention:** Commits and tickets (GitHub Issues) in the repository should be mapped to trace commits easily. So, when committing a new change, please use the following notation.

> "T-<TicketNo> : <Your Commit Message>"`

Example; if the branch name is T-56 and your commit message is “Feature XXX is implemented”, then the comment message should be like following

> git commit -am "T-56 : Feature XXX is implemented "

**3.1 Squash Commits (Merge multiple commits into a single commit):** You may want to commit your changes for intermediate steps like step1, step2, and once all effort is done, please merge all of your internal steps into a single commit before pushing to the remote; *Open IoT Academy* especially expects a clean and straightforward git history.

Example

> git commit -am "T-999 : Initial implementation for Ticket 999"

> git commit -am "T-999 : Comments are added"

> git commit -am "T-999 : Unittest are implemented"

In the above case, you will have tree intermediate commits, please merge them into a single commit using *git rebase -i* (i : interactive) command.

> git rebase -i HEAD~<Num of commits to be merged> 

In above example, it has three commits so the command should be

> git rebase -i HEAD~3

When you call this command, git opens a window.

[![img](file:///C:/Users/murat/AppData/Local/Temp/msohtmlclip1/01/clip_image001.png)](https://i.imgsafe.org/1a57d9cd0b.png)

In that window, you will see your commits. In that editor, type 'i' to switch to “edit” mode. Do not change the first item, but replace 'pick' expressions with 'squash' or ‘s’ of all other commits. See the following picture

[![img](file:///C:/Users/murat/AppData/Local/Temp/msohtmlclip1/01/clip_image001.png)](https://i.imgsafe.org/1a65346561.png)

When you finish, press 'ESC' to enter command mode and type ':', 'w' and 'q' to save(w) your changes and quit (q). GIT rebases your changes and opens another window to modify your commit comments.

[![img](file:///C:/Users/murat/AppData/Local/Temp/msohtmlclip1/01/clip_image001.png)](https://i.imgsafe.org/1a684868ae.png)

In that window, you can change your comments. You can delete comments except first one, and you can write a clear explanation in the comment of the first commit.

[![img](file:///C:/Users/murat/AppData/Local/Temp/msohtmlclip1/01/clip_image001.png)](https://i.imgsafe.org/1a6a87d2b6.png)

After you finish your modification on comments. You can type 'ESC', ':', 'w' and 'q' to save and exit to complete squash.

Your commits are merged into a single commit.

**4. Push Your Local Changes to Remote**

Once all modifications are done, please push local changes to remote using *git push* command, but before that, you need to be sure whether if your local branch is still up-to-date by remote. It is because while you are developing your code, other commits may be merged to master branch and new commits may conflict with yours. 

All conflict must be solved in the local before pushing the remote. 

To solve that, please fetch all commits from the remote master;Just rebase your local branch with remote master.

> git pull --rebase origin master

 

In that case, you may have conflicts, so please solve conflicts first; please use git mergetool to resolve the conflicts). After conflicts are resolved,  please push your code to remote.

> git push origin <LOCAL_BRANCH_NAME>:<REMOTE_BRANCH_NAME>

 

**IMP **: Please select same names for local and remote branches.

Example, if the branch name is T-56, use 

> git push origin T-56 : T-56

Now, your changes are in the remote, and you can create a Pull Request in GithHub UI from your remote branch to the master branch.

**5. Fixing Code Review Bugs and Comments.**

Open IOT Academy uses built-in Github code review tool to review code modifications in the pull request. The developer has to fix code review bugs and comments. Once the developer is fixed the issues,

- a. Commits modifications first in the local branch (Section 3)
- b. Push commits to the remote branch. 
  **[IMP]** Please do not squash commits until code review is     completed. Just push new commits otherwise code review tools cannot differentiate     modifications in squashed commits and does not update the code review.
- c. Once     fixes pushed to remote, Pull Requests will be updated automatically. If     reviewers do not agree with changes or they have added new bugs/comments, the     developer must repeat the steps until the review is completed accepted.

**Finally**

If the repository master, agree with your changes and your changes passed all tests, he/she merges commit into master branch and deletes your remote branch.

Until Code Review completed, you probably push several commits about fixes, but buggy commits and intermediate commits to fix the issues should not appear in the stable mainline (master branch).

Herein, the repository master uses Squash option while merging the accepted pull request.

 