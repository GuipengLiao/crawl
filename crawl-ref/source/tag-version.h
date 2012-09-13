#ifndef TAG_VERSION_H
#define TAG_VERSION_H

// Character info has its own top-level tag, mismatching majors don't break
// compatibility there.
#define TAG_CHR_FORMAT 0

// Let CDO updaters know if the syntax changes.
#define TAG_MAJOR_VERSION 34

// Minor version will be reset to zero when major version changes.
enum tag_minor_version
{
    TAG_MINOR_INVALID         = -1,
    TAG_MINOR_RESET           = 0, // Minor tags were reset
    TAG_MINOR_BRANCHES_LEFT,       // Note the first time branches are left
    TAG_MINOR_VEHUMET_SPELL_GIFT,  // Vehumet gift spells instead of books
    NUM_TAG_MINORS,
    TAG_MINOR_VERSION = NUM_TAG_MINORS - 1
};

#endif
