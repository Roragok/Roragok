<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>
         xmlns="http://www.w3.org/1999/html">
    <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
        <header>
            <?php print render($title_prefix); ?>
            <?php if (!$page && $title): ?>
                <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
            <?php endif; ?>
            <?php print render($title_suffix); ?>

            <?php if ($display_submitted): ?>
                <p class="submitted">
                    <?php print $user_picture; ?>
                    <?php print $submitted; ?>
                </p>
            <?php endif; ?>
            <?php if ($unpublished): ?>
                <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
            <?php endif; ?>
        </header>
    <?php endif; ?>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    ?>

    <?php
    print render($content['body']);
    ?>
    <hr/>
    <h3>Game Meta Data</h3>

    <div class="game-meta-data">
    <?php
    print render($content['field_moderator']);
    print render($content['field_game_url']);
    print render($content['field_game_winner']);
    print render($content['field_day_1_lynch']);
    print render($content['field_night_1_kills']);
    print render($content['field_mafia_game_type']);
    print render($content['field_mafia_game_name']);
    ?>
    </div>
    <hr/>
    <h3>Roles</h3>
    <?php
    print render($content['field_mafia_roles']);
    ?>
    <hr/>
    <h3>Players</h3>

    <div class="mafia-meta-data">
        <?php
        print render($content['field_signed_players']);

        ?>
    </div>
    <div class="mafia-meta-data">
        <?php
        print render($content['field_town_players']);

        ?>
    </div>
    <div class="mafia-meta-data">
        <?php
        print render($content['field_mafia_players']);
        print render($content['field_mafia_players_b']);
        ?>
    </div>
    <div class="mafia-meta-data">
        <?php
        print render($content['field_third_party']);
        ?>
    </div>


</article>
