<!doctype html>
<html lang="en-us">

    <head>

        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
        <meta name="description" content="This is the home page for the PHP Motors website">
        <meta name="author" content="Chris Van Ry">
        <link href="https://fonts.googleapis.com/css?family=Rajdhani&display=swap" rel="stylesheet">
        <link rel="stylesheet" href="/phpmotors/css/style.css" media="screen">        
        <title>PHP Motors | Home</title>

    </head>

    <body>

        <div class="background-image">

            <div class="body-container">

                <header>

                    <?php include $_SERVER['DOCUMENT_ROOT'] . '/phpmotors/common/header.php'; ?>

                </header>

                <nav>

                    <?php include $_SERVER['DOCUMENT_ROOT'] . '/phpmotors/common/navigation.php'; ?>

                </nav>

                <main>

                    <h1>Welcome to PHP Motors!</h1>

                    <section id="hero-image-container">

                        <img src="/phpmotors/images/delorean.jpg" id="hero-image" alt="DMC Delorean">

                        <section id="feature-box">

                            <h4>DMC Delorean</h4>
                            <p>3 Cup holders<br>
                            Superman doors<br>
                            Fuzzy dice!</p>

                        </section>

                        <a href="#" title="Own today button"><img src="/phpmotors/images/site/own_today.png" id="own-today-button" alt="Own today button"></a>

                    </section>

                    <section id="upgrades-reviews-container">

                        <h2>DMC Delorean Reviews</h2>

                        <div id="reviews-container">                          

                            <ul>
                                <li>"So fast, it's almost like traveling in time." (4/5)</li>
                                <li>"Coolest ride on the road." (4/5)</li>
                                <li>"I'm feeling Marty McFly!" (5/5)</li>
                                <li>"The most futuristic ride of our day." (4.5/5)</li>
                                <li>"80's livin and I love it!" (5/5)</li>
                            </ul>

                        </div>

                        <h2>Delorean Upgrades</h2>

                        <div id="upgrades-container">

                                <div class="upgrades-box"><img src="/phpmotors/images/upgrades/flux-cap.png" alt="Flux Capacitor"><p><a href="#" title="Flux Capacitor link">Flux Capacitor</a></p></div>
                                <div class="upgrades-box"><img src="/phpmotors/images/upgrades/flame.jpg" alt="Flame Decals"><p><a href="#" title="Flame Decals link">Flame Decals</a></p></div>
                                <div class="upgrades-box"><img src="/phpmotors/images/upgrades/bumper_sticker.jpg" alt="Bumper Stickers"><p><a href="#" title="Bumper Stickers link">Bumper Stickers</a></p></div>
                                <div class="upgrades-box"><img src="/phpmotors/images/upgrades/hub-cap.jpg" alt="Hub Caps"><p><a href="#" title="Hub Caps link">Hub Caps</a></p></div>

                        </div>

                    </section>

                </main>

                <footer>

                    <?php include $_SERVER['DOCUMENT_ROOT'] . '/phpmotors/common/footer.php'; ?>
                    
                </footer>

            </div>

        </div>

    </body>

</html>