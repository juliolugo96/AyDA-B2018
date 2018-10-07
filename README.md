# Design and Analysis of Algorithms (B-2018)

## Overview

Welcome to the advanced course of algorithms at ULA! Here
you will find any aspect discussed during lectures and 
practice sessions. This README has been written in English
because you will face this language almost every day of your 
professional life. Let's adapt as soon as possible.

## Table of Contents

1. [Description of the course](#description-of-the-course)
2. [Recommendations to get good grades](#recomendations-to-get-good-grades)
3. [Books and Videos](#books-and-videos)
4. [Instructions](#instructions)

## Description of the course

This is the advanced course of programming at ULA. This course will allow you to develop a big variety of approaches during problem solving. You will study concepts such as dynamic programming, graph theory, applied discrete mathematics, flow networks, advanced data structures, and complexity. Those concepts are **critical knowledge** when you start your career as a professional. We will design huge projects and use vanguard programming tools. During practice sessions, we will solve competitive programming problems extracted from one of the [biggest online judges](https://www.spoj.com/) with the most active community on internet.

## Recommendations to get good grades

This is a course where you will need to be highly focused and
opened to learn new things. So here is a set of recommendations
you should follow if you want to get the best grade and the highest
quantity and quality of knowledge:

- Make all your readings BEFORE you reach to the lectures. The classes are for discussions.
Don't be lost during lectures or sessions, don't waste your time, be smart.
- **Don't waste your time, AGAIN**, it's too precious in this course, use it
wisely.
- If you've any doubt, don't hesitate: **Ask!**
- Enjoy every moment when you're in this course!

## Books and videos

It's **strongly recommended** for all of you to take this courses during the semester:

- https://www.youtube.com/playlist?list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp (MIT 6.046J)

- https://www.youtube.com/watch?v=_vfCXMSLMAU&list=PLNPbxFpuCy0-6GIUmiHCvj0H0hNxstOie (METU CENG773)

About books, besides of the readings recommended in those courses, you will find them here:

http://webdelprofesor.ula.ve/ingenieria/alejandromujica/sitio/ayda/

MIT is considered the **TOP UNIVERSITY IN THE WHOLE WORLD**, and the METU is 
the best from the middle east, so here comes this question:

Do you want to be the best programmer with the best salary? Be the best, **take those courses**! 

## Instructions

### How do I configure my repository and relate it with the Telegram Channel?

It's very simple. You will first need a GitHub or BitBucket repository. I assume you've
git installed in your OS but if it's not the case, here you have some [instructions](https://www.linode.com/docs/development/version-control/how-to-install-git-on-linux-mac-and-windows/).

Now, go to [Integromat](https://www.integromat.com/) and create and account there.
It's only one account for repository so there won't be any other troubles.

- Avoid all tutorials and go directly to the dashboard. 
- Then, click on *Create a new scenario*.
- Type and select Github/BitBucket **and** Telegram. (Both must be selected).

Let's go with GitHub/Bitbucket first:

- Click on the question mark and select GitHub/Bitbucket firstly.
- Choose then *Watch push actions*/*Watch pushes*.
- If you are using GitHub, it will ask you for a Webhook to relate your repository to Integromat. Click on *Add*, then *Save*, copy the address generated to your clipboard, and without closing your scenario, follow these steps in another tab:
    - Sign in into your GitHub account, then select the related repository you own.
    - Click on "Settings" tab.
    - Then click on "Webhooks" on the left panel.
    - Click on the "Add WebHook" Button.
    - Paste the copied URL in the Payload URL form field.
    - Select "application/json" as the content type.
    - Leave the "Active" checkbox checked.
    - Click on "Add webhook" to save the webhook.

- If you're using BitBucket, this step is far way simpler. Follow these [instructions](https://www.integromat.com/en/kb/pkg/bitbucket/index.html).


Now let's send that info to Telegram:

- Right click on the canvas, and *Add a module*.
- Choose **Send a text message or a reply** option.
- Click again in the big circle and add a click, go to *Connection* and click on **Add**.
- Type the name of your wish, and paste this token: **687866749:AAHpCIf5-fyF-3JRKk0ITrL5auLUrbp_q6Y**
- Inside *Chat ID* paste: **@aydab2018**
- Inside *Text* field, add **strictly** this format:

*If GitHub*

```
    A PUSH HAS BEEN DONE!
    -------------------------------------

    Project: {{5.respository.name}}
    Author: {{5.headCommit.authorName}} ({{5.pusherName}})
    Date: {{5.headCommit.timestamp}}
    Message: {{5.headCommit.message}}
    -------------------------------------
    Modified files
    -------------------------------------
    {{1.headCommit.modified}}
    -------------------------------------
```

*If BitBucket*


```
    A PUSH HAS BEEN DONE!
    -------------------------------------

    Project: {{2.repository.name}}
    Author: {{2.actorDisplayName}} ({{2.actorUsername}})
    Date: {{2.new.targetDate}}
    Message: {{2.new.targetMessage}}
    -------------------------------------
```

Where {{data}} indicates the card that **must be selected** from the side panel. Finally, click **OK**.

For testing, Click on **Run Once** and it will log *The request was accepted. Waiting for data.* if setting was successful. If everything's fine, when you make a push from your git folder to your repo, it will appear a Telegram notification indicating that the push was made correctly. If this wasn't the case, make sure you followed up every step indicated in this guide.

Finally, turn on the scheduling option to activate your push notifications. **Don't forget to save your Scenario** (the icon is at the bottom of the screen).

### How do I make my own bot for my team?

- Create a Telegram bot from the [BotFather](https://telegram.me/BotFather).
- Keep the token generated when the creation is successful.
- Add the recently created bot as Administrator to your Telegram group.
- Follow the steps indicated above for Telegram but using your own token and your
own *Chat ID* (here you will paste your group's unique name in the specified format).
- Here you're free to use your own commit format.

### How do I install DeSIGNAR in my computer?

Really, dude? Ugh, that's one of the **easiest things ever**. You will find info [here](https://github.com/R3mmurd/DeSiGNAR).
