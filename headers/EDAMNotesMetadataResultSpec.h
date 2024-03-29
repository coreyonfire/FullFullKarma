/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@interface EDAMNotesMetadataResultSpec : _AVAudioSessionCategoryPlayback <NSCoding>
{
    BOOL __includeTitle;
    BOOL __includeContentLength;
    BOOL __includeCreated;
    BOOL __includeUpdated;
    BOOL __includeDeleted;
    BOOL __includeUpdateSequenceNum;
    BOOL __includeNotebookGuid;
    BOOL __includeTagGuids;
    BOOL __includeAttributes;
    BOOL __includeLargestResourceMime;
    BOOL __includeLargestResourceSize;
    BOOL __includeTitle_isset;
    BOOL __includeContentLength_isset;
    BOOL __includeCreated_isset;
    BOOL __includeUpdated_isset;
    BOOL __includeDeleted_isset;
    BOOL __includeUpdateSequenceNum_isset;
    BOOL __includeNotebookGuid_isset;
    BOOL __includeTagGuids_isset;
    BOOL __includeAttributes_isset;
    BOOL __includeLargestResourceMime_isset;
    BOOL __includeLargestResourceSize_isset;
}

- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetIncludeLargestResourceSize;
- (BOOL)includeLargestResourceSizeIsSet;
- (void)setIncludeLargestResourceSize:(BOOL)fp8;
- (BOOL)includeLargestResourceSize;
- (void)unsetIncludeLargestResourceMime;
- (BOOL)includeLargestResourceMimeIsSet;
- (void)setIncludeLargestResourceMime:(BOOL)fp8;
- (BOOL)includeLargestResourceMime;
- (void)unsetIncludeAttributes;
- (BOOL)includeAttributesIsSet;
- (void)setIncludeAttributes:(BOOL)fp8;
- (BOOL)includeAttributes;
- (void)unsetIncludeTagGuids;
- (BOOL)includeTagGuidsIsSet;
- (void)setIncludeTagGuids:(BOOL)fp8;
- (BOOL)includeTagGuids;
- (void)unsetIncludeNotebookGuid;
- (BOOL)includeNotebookGuidIsSet;
- (void)setIncludeNotebookGuid:(BOOL)fp8;
- (BOOL)includeNotebookGuid;
- (void)unsetIncludeUpdateSequenceNum;
- (BOOL)includeUpdateSequenceNumIsSet;
- (void)setIncludeUpdateSequenceNum:(BOOL)fp8;
- (BOOL)includeUpdateSequenceNum;
- (void)unsetIncludeDeleted;
- (BOOL)includeDeletedIsSet;
- (void)setIncludeDeleted:(BOOL)fp8;
- (BOOL)includeDeleted;
- (void)unsetIncludeUpdated;
- (BOOL)includeUpdatedIsSet;
- (void)setIncludeUpdated:(BOOL)fp8;
- (BOOL)includeUpdated;
- (void)unsetIncludeCreated;
- (BOOL)includeCreatedIsSet;
- (void)setIncludeCreated:(BOOL)fp8;
- (BOOL)includeCreated;
- (void)unsetIncludeContentLength;
- (BOOL)includeContentLengthIsSet;
- (void)setIncludeContentLength:(BOOL)fp8;
- (BOOL)includeContentLength;
- (void)unsetIncludeTitle;
- (BOOL)includeTitleIsSet;
- (void)setIncludeTitle:(BOOL)fp8;
- (BOOL)includeTitle;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithIncludeTitle:(BOOL)fp8 includeContentLength:(BOOL)fp12 includeCreated:(BOOL)fp16 includeUpdated:(BOOL)fp20 includeDeleted:(BOOL)fp24 includeUpdateSequenceNum:(BOOL)fp28 includeNotebookGuid:(BOOL)fp32 includeTagGuids:(BOOL)fp36 includeAttributes:(BOOL)fp40 includeLargestResourceMime:(BOOL)fp44 includeLargestResourceSize:(BOOL)fp48;
- (id)init;

@end

