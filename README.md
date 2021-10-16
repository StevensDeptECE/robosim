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
git remote set-url origin [insert your forked repo SSH link here]
```

### `Permission to StevensDeptECE/robosim.git denied`

If you get this error, then most likely you are trying to push directly to the
repository and do not have write access. Please fork the repository, add your
changes to there, and then submit a pull request using the instructions from [this section](#how-to-create-a-pull-request).

[This guide](https://docs.github.com/en/github/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork) is specifically written for creating a pull request from a fork, but the general guide on creating a pull request should be just as useful.

If you do need help with forking and submitting a pull request, then please go to the [issues tab](https://github.com/StevensDeptECE/robosim/issues) of this repository and open an issue.

### How to create a pull request

GitHub also has an excellent guide on how to create a pull request: [This guide](https://docs.github.com/en/github/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)

I personally use the CLI, but doing it through the website works just as well.
