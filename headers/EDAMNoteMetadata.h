/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMNoteAttributes, NSMutableArray, NSString;

@interface EDAMNoteMetadata : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__guid;
    NSString *__title;
    int __contentLength;
    long long __created;
    long long __updated;
    long long __deleted;
    int __updateSequenceNum;
    NSString *__notebookGuid;
    NSMutableArray *__tagGuids;
    EDAMNoteAttributes *__attributes;
    NSString *__largestResourceMime;
    int __largestResourceSize;
    BOOL __guid_isset;
    BOOL __title_isset;
    BOOL __contentLength_isset;
    BOOL __created_isset;
    BOOL __updated_isset;
    BOOL __deleted_isset;
    BOOL __updateSequenceNum_isset;
    BOOL __notebookGuid_isset;
    BOOL __tagGuids_isset;
    BOOL __attributes_isset;
    BOOL __largestResourceMime_isset;
    BOOL __largestResourceSize_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetLargestResourceSize;
- (BOOL)largestResourceSizeIsSet;
- (void)setLargestResourceSize:(int)fp8;
- (int)largestResourceSize;
- (void)unsetLargestResourceMime;
- (BOOL)largestResourceMimeIsSet;
- (void)setLargestResourceMime:(id)fp8;
- (id)largestResourceMime;
- (void)unsetAttributes;
- (BOOL)attributesIsSet;
- (void)setAttributes:(id)fp8;
- (id)attributes;
- (void)unsetTagGuids;
- (BOOL)tagGuidsIsSet;
- (void)setTagGuids:(id)fp8;
- (id)tagGuids;
- (void)unsetNotebookGuid;
- (BOOL)notebookGuidIsSet;
- (void)setNotebookGuid:(id)fp8;
- (id)notebookGuid;
- (void)unsetUpdateSequenceNum;
- (BOOL)updateSequenceNumIsSet;
- (void)setUpdateSequenceNum:(int)fp8;
- (int)updateSequenceNum;
- (void)unsetDeleted;
- (BOOL)deletedIsSet;
- (void)setDeleted:(long long)fp8;
- (long long)deleted;
- (void)unsetUpdated;
- (BOOL)updatedIsSet;
- (void)setUpdated:(long long)fp8;
- (long long)updated;
- (void)unsetCreated;
- (BOOL)createdIsSet;
- (void)setCreated:(long long)fp8;
- (long long)created;
- (void)unsetContentLength;
- (BOOL)contentLengthIsSet;
- (void)setContentLength:(int)fp8;
- (int)contentLength;
- (void)unsetTitle;
- (BOOL)titleIsSet;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)unsetGuid;
- (BOOL)guidIsSet;
- (void)setGuid:(id)fp8;
- (id)guid;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithGuid:(id)fp8 title:(id)fp12 contentLength:(int)fp16 created:(long long)fp20 updated:(long long)fp28 deleted:(long long)fp36 updateSequenceNum:(int)fp44 notebookGuid:(id)fp48 tagGuids:(id)fp52 attributes:(id)fp56 largestResourceMime:(id)fp60 largestResourceSize:(int)fp64;
- (id)init;

@end

