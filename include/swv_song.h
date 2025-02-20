#ifndef SWV_SONG_H
#define SWV_SONG_H

#include <linux/limits.h>
#include <ctag/id3utils.h>

#define MAX_NAME 256

typedef struct {
	char path[PATH_MAX + 1];
	char name[MAX_NAME + 1];
	
} Song;

#endif
