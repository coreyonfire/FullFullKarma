/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSMutableArray;

@interface EDAMSyncChunk : _AVAudioSessionCategoryPlayback <NSCoding>
{
    long long __currentTime;
    int __chunkHighUSN;
    int __updateCount;
    NSMutableArray *__notes;
    NSMutableArray *__notebooks;
    NSMutableArray *__tags;
    NSMutableArray *__searches;
    NSMutableArray *__resources;
    NSMutableArray *__expungedNotes;
    NSMutableArray *__expungedNotebooks;
    NSMutableArray *__expungedTags;
    NSMutableArray *__expungedSearches;
    NSMutableArray *__linkedNotebooks;
    NSMutableArray *__expungedLinkedNotebooks;
    BOOL __currentTime_isset;
    BOOL __chunkHighUSN_isset;
    BOOL __updateCount_isset;
    BOOL __notes_isset;
    BOOL __notebooks_isset;
    BOOL __tags_isset;
    BOOL __searches_isset;
    BOOL __resources_isset;
    BOOL __expungedNotes_isset;
    BOOL __expungedNotebooks_isset;
    BOOL __expungedTags_isset;
    BOOL __expungedSearches_isset;
    BOOL __linkedNotebooks_isset;
    BOOL __expungedLinkedNotebooks_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetExpungedLinkedNotebooks;
- (BOOL)expungedLinkedNotebooksIsSet;
- (void)setExpungedLinkedNotebooks:(id)fp8;
- (id)expungedLinkedNotebooks;
- (void)unsetLinkedNotebooks;
- (BOOL)linkedNotebooksIsSet;
- (void)setLinkedNotebooks:(id)fp8;
- (id)linkedNotebooks;
- (void)unsetExpungedSearches;
- (BOOL)expungedSearchesIsSet;
- (void)setExpungedSearches:(id)fp8;
- (id)expungedSearches;
- (void)unsetExpungedTags;
- (BOOL)expungedTagsIsSet;
- (void)setExpungedTags:(id)fp8;
- (id)expungedTags;
- (void)unsetExpungedNotebooks;
- (BOOL)expungedNotebooksIsSet;
- (void)setExpungedNotebooks:(id)fp8;
- (id)expungedNotebooks;
- (void)unsetExpungedNotes;
- (BOOL)expungedNotesIsSet;
- (void)setExpungedNotes:(id)fp8;
- (id)expungedNotes;
- (void)unsetResources;
- (BOOL)resourcesIsSet;
- (void)setResources:(id)fp8;
- (id)resources;
- (void)unsetSearches;
- (BOOL)searchesIsSet;
- (void)setSearches:(id)fp8;
- (id)searches;
- (void)unsetTags;
- (BOOL)tagsIsSet;
- (void)setTags:(id)fp8;
- (id)tags;
- (void)unsetNotebooks;
- (BOOL)notebooksIsSet;
- (void)setNotebooks:(id)fp8;
- (id)notebooks;
- (void)unsetNotes;
- (BOOL)notesIsSet;
- (void)setNotes:(id)fp8;
- (id)notes;
- (void)unsetUpdateCount;
- (BOOL)updateCountIsSet;
- (void)setUpdateCount:(int)fp8;
- (int)updateCount;
- (void)unsetChunkHighUSN;
- (BOOL)chunkHighUSNIsSet;
- (void)setChunkHighUSN:(int)fp8;
- (int)chunkHighUSN;
- (void)unsetCurrentTime;
- (BOOL)currentTimeIsSet;
- (void)setCurrentTime:(long long)fp8;
- (long long)currentTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithCurrentTime:(long long)fp8 chunkHighUSN:(int)fp16 updateCount:(int)fp20 notes:(id)fp24 notebooks:(id)fp28 tags:(id)fp32 searches:(id)fp36 resources:(id)fp40 expungedNotes:(id)fp44 expungedNotebooks:(id)fp48 expungedTags:(id)fp52 expungedSearches:(id)fp56 linkedNotebooks:(id)fp60 expungedLinkedNotebooks:(id)fp64;
- (id)init;

@end

