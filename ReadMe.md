# Robosim

The repository for Prof. Kruger's EE-553 Robosim project.

## FAQs

### Need to create an SSH key to push into the repository

GitHub has a great guide on how to do this!
[This guide](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
will show you how to load `ssh-agent` when your terminal starts and add a new
SSH key to `ssh-agent` and GitHub

### Cloned the repository using HTTPS, but now have to push to the repository

In this instance, you'll need to change the remote url that git is pointing to.
This can be done with a single git command that changes which website the remote
called `origin` is pointing at. Once you run this, try to push again and you
should be good to go!

Git command:

```shell
git remote set-url origin git@github.com:StevensDeptECE/GrailGUI.git
```
