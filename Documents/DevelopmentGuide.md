You have decided to be part of *Open IoT Academy*?

You need to get Open IoT Academy code base first.

> git clone https://github.com/OpenIoTAcademy/<REPO_NAME>.git

Come on, you can not touch our master branch. Create your own branch

>  git checkout -b <NEW_BRANCH_NAME>

Gosh! You have done your modifications. You are great but let's see is everything ok? Run the unit tests first.

>  make unittest TEST_MODULE=<PATH_OF_YOUR_MODULE>

All of your tests passed, great. And how about code coverage of your Unit Tests. Is it less than 100%, please go back home and finish your homework and try again until code coverage reaches 100%.

You are so cool and your module works great. But you need to pass last step bro. Check all system stability.

> make check_all

Everything is OK and there is no even warnings from static analysis tool? What the hell is going on? We forced this guy but is he still there?

Ok mate, you are the best and send your code us and let's show how a code is written by a superhero?

Commit your codes, first.

>  git commit -am "T-<TicketNo> : Your comments for changes"

You can be the best developer ever but still we are the boss and we have some rules. Your commit comments must start with following prefix

> T-<TicketNo>   ; example if ticket no is 999 your comment must be like that git commit -am "T-999 : My Comments"  

Everything is not finished yet. While you are developing your code, another superheroes might merge their codes to master branch before you. You have to get all of them.

> git pull --rebase origin master

Surprise, you have conflicts. Fix them and try again.

You might commit new things to solve issues but we do not want to see a lot of commits for a ticket; each ticket should have a single commit. Squash all commits into a single commit using *git squash*.
(For details, see [Open IoT Academy Git Tutorial](https://github.com/OpenIoTAcademy/EmbeddedTemplate/blob/T-2/Documents/GitTutorial.md) and see section 3.1 and come back when you done)

You are the Gollum for us which keeps ring and you have to give ring us to save the middle earth, but we need to validate your ring so put it in a remote branch.

> git push origin <LOCAL_BRANCH>:<REMOTE BRANCH>

We are so sorry, we lied, you still have a long way.

Create a Pull Request in GITHUB using "New Pull Request" button in main page. Select your branch in next window and create pull request.

Hey, silence please!

In that phase,

- Continuous Integration(CI) tool, Travis-CI, runs make check_all command in your pull request and show results in your pull request. Luck guy, CI does everything for you. But you have to see following nice picture in your pull request.

![img](https://camo.githubusercontent.com/62b4f362064dfe7d567f45a006f2fa2e0eaff0fd/68747470733a2f2f656b38776878652e636c6f7564696d672e696f2f732f63646e2f782f68747470733a2f2f7777772e676974626f6f6b2e636f6d2f636f6e74656e742f626f6f6b2f702d6f732f702d6f732f7472617669732d6769742e706e673f763d31352e312e30)

You have passed our server tests and still alive but it is just a stupid computer, man.

Now, it is time to meet Olympus Gods : Code Review. They use Code Collaborator tool to review your code and adds review link to your Pull Request.

![CC](https://camo.githubusercontent.com/ca887101f3f3c547cdac7e6cf0cc1973c4d3df01/68747470733a2f2f656b38776878652e636c6f7564696d672e696f2f732f63646e2f782f68747470733a2f2f7777772e676974626f6f6b2e636f6d2f636f6e74656e742f626f6f6b2f702d6f732f702d6f732f43432e706e673f763d31352e312e30)

When gods add bugs or comments, you have to fix all of them.

- Commit in Local (git commit -am "Comment about code review fixes!")
- Push to remote (git push origin <LOCAL_BRANCH>:<REMOTE_BRANCH>)

Gods update code review automatically when you push fixes to your remote branch. Do not squash fix commits until code review done.

Good boy, you have done whatever asked. As a gift, Gods closed your code review.

![img](https://camo.githubusercontent.com/82e5a79d430b3fc59d015478e22bb67668612196/68747470733a2f2f656b38776878652e636c6f7564696d672e696f2f732f63646e2f782f68747470733a2f2f7777772e676974626f6f6b2e636f6d2f636f6e74656e742f626f6f6b2f702d6f732f702d6f732f4343436c6f73654c696e6b2e706e673f763d31352e312e30)

Well done. You have successfully completed your task.

You can go home and take a rest now. We will merge your changes into *Open IoT Academy* master branch.

God job!

------

Are you a lazy guy and is this guide is long to read for you! Do not worry,! Following items are summary of summary for you.

```
> git clone https://github.com/OpenIoTAcademy/<REPO_NAME>.git
> git checkout -b <NEW_BRANCH_NAME>
> make unittest TEST_MODULE=<PATH_OF_YOUR_MODULE>
> make check_all
> git commit -am "T-<TicketNo> : Your comments for changes"
> git pull --rebase origin master
> git push origin <LOCAL_BRANCH>:<REMOTE BRANCH>
> Create a Pull Request in GITHUB using "New Pull Request" button in main page. 
> Wait to pass CI Tests (Travis-CI)
> Fix all Code review issues and close Code Review. 
> That's all! You are done!
```