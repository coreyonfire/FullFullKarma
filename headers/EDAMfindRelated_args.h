/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMRelatedQuery, EDAMRelatedResultSpec, NSString;

@interface EDAMfindRelated_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    EDAMRelatedQuery *__query;
    EDAMRelatedResultSpec *__resultSpec;
    BOOL __authenticationToken_isset;
    BOOL __query_isset;
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
- (void)unsetQuery;
- (BOOL)queryIsSet;
- (void)setQuery:(id)fp8;
- (id)query;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 query:(id)fp12 resultSpec:(id)fp16;
- (id)init;

@end
