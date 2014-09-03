/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMSyncChunkFilter, NSString;

@interface EDAMgetFilteredSyncChunk_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    int __afterUSN;
    int __maxEntries;
    EDAMSyncChunkFilter *__filter;
    BOOL __authenticationToken_isset;
    BOOL __afterUSN_isset;
    BOOL __maxEntries_isset;
    BOOL __filter_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetFilter;
- (BOOL)filterIsSet;
- (void)setFilter:(id)fp8;
- (id)filter;
- (void)unsetMaxEntries;
- (BOOL)maxEntriesIsSet;
- (void)setMaxEntries:(int)fp8;
- (int)maxEntries;
- (void)unsetAfterUSN;
- (BOOL)afterUSNIsSet;
- (void)setAfterUSN:(int)fp8;
- (int)afterUSN;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 afterUSN:(int)fp12 maxEntries:(int)fp16 filter:(id)fp20;
- (id)init;

@end

