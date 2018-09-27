# Design and Analysis of Algorithms (B-2018)

## Overview

Welcome to the advanced course of algorithms at ULA! Here
you will find any aspect discussed during lectures and 
practice sessions. This README has been written in English
because you'll face this language almost every day of your 
professional life. Let's be fit with it then as soon as posible.

## Table of Contents

1. [Recommendations](#recomendations)
2. [Books and Videos](#books-and-videos)
3. [Instructions](#instructions)

## Recommendations

This is a course where you'll need to be highly focused and
opened to learn new things. So here is a set of recommendations
you should follow if you want to get the best grade and the highest
quantity of knowledge:

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

About books, besides the readings recommended in those courses, you will find them here:

http://webdelprofesor.ula.ve/ingenieria/alejandromujica/sitio/ayda/

MIT is considered the **TOP UNIVERSITY IN THE WHOLE WORLD**, and the METU is 
the best from the middle east, so here comes this question:

Do you want to be the best programmer with the best salary? Be the best, **take those courses**! 

## Instructions

### How do I configure my repository and relate it with the Telegram Channel?

It's very simple. You'll first need a GitHub or BitBucket repository. I assume you've
git installed in your OS but if it's not the case, here you have some [instructions](https://www.linode.com/docs/development/version-control/how-to-install-git-on-linux-mac-and-windows/).

Now, go to [Integromat](https://www.integromat.com/) and create and account there.
It's only one account for repository so there won't be any other troubles.

- Avoid all tutorials and go directly to the dashboard. 
- Then, click on *Create a new scenario*.
- Type and select Github/BitBucket **and** Telegram. (Both must be selected).
- 
Let's go with GitHub first:

- Click in the big centered circle and select GitHub firstly.
- Choose then *Watch push actions*.
- It will require you a Webhook to relate your GitHub repository to Integromat. Type a name, and then configure it on GitHub. To realize this, just follow this [instructions](https://support.hockeyapp.net/kb/third-party-bug-trackers-services-and-webhooks/how-to-set-up-a-webhook-in-github).

Now let's send that info to Telegram:

- Right click on the canvas, and *Add a module*.
- Choose **Send a text message or a reply** option.
- Click again in the big circle and add a click, go to *Connection* and click on **Add**.
- Input the name of your wish, and paste this token: **687866749:AAHpCIf5-fyF-3JRKk0ITrL5auLUrbp_q6Y**
- Inside *Chat ID* paste: @aydab2018
- Inside *Text* field, add **strictly** this format (if GitHub):

```
    A PUSH HAS BEEN DONE!
    ---------------------

    Project: {{5.respository.name}}
    Author: {{5.headCommit.authorName}} ({{5.headCommit.authorUsername}})
    Date: {{5.headCommit.timestamp}}
    Message: {{5.headCommit.message}}
    ---------------------
```

Where {{data}} indicates the card that **must be selected** from the side panel. Finally, click **OK**.

For testing, Click on **Run Once** and it will log *The request was accepted. Waiting for data.* if setting was successful. If everything's fine, when you make a push from your git folder to your repo, it will appear a Telegram notification indicating that the push was made correctly. If this wasn't the case, make sure you followed up every step indicated in this guide.

Finally, turn on the scheduling option to activate your push notifications.

### How do I make my own bot for my team?

- Create a Telegram bot from the BotFather.
- Keep the token generated when the creation is successful.
- Add the recently created bot as Administrator to your Telegram group.
- Follow the steps indicated above for Telegram but using your own token and your
own *Chat ID* (here you'll paste your group's unique name in the specified format).
- Here you're free to use your own commit format.

### How do I install DeSIGNAR in my computer?

Really, dude?