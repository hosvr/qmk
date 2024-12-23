# qmk/jho

personal branch for qmk firmware

# upstream structure

* `master` is a fork of the ![QMK firmware](https://github.com/qmk/qmk_firmware) repo, this should not be touched
* `jho` contains all the keyboards that i use
* set upstream updates by the following
  1. `git remote add upstream https://github.com/qmk/qmk_firmware.git`
  2. `git checkout master`
  3. `git fetch upstream`
  4. `git pull upstream master`
  5. `git push origin master`
  
# new keyboard

* make sure `.gitignore` is updated since it is being used to hide other keyboards in vscode


# reference 

* https://docs.qmk.fm/newbs_git_using_your_master_branch
