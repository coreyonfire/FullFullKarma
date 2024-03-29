/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMNoteFilter, EDAMNotesMetadataResultSpec, NSString;

@interface EDAMfindNotesMetadata_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNoteFilter *__filter;
    int __offset;
    int __maxNotes;
    EDAMNotesMetadataResultSpec *__resultSpec;
    BOOL __authenticationToken_isset;
    BOOL __filter_isset;
    BOOL __offset_isset;
    BOOL __maxNotes_isset;
    BOOL __resultSpec_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetResultSpec;
- (BOOL)resultSpecIsSet;
- (void)setResultSpec:(id)fp8;
- (id)resultSpec;
- (void)unsetMaxNotes;
- (BOOL)maxNotesIsSet;
- (void)setMaxNotes:(int)fp8;
- (int)maxNotes;
- (void)unsetOffset;
- (BOOL)offsetIsSet;
- (void)setOffset:(int)fp8;
- (int)offset;
- (void)unsetFilter;
- (BOOL)filterIsSet;
- (void)setFilter:(id)fp8;
- (id)filter;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 filter:(id)fp12 offset:(int)fp16 maxNotes:(int)fp20 resultSpec:(id)fp24;
- (id)init;

@end

