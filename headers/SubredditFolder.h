/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface SubredditFolder : _AVAudioSessionCategoryPlayback <NSCoding>
{
    BOOL _collapsed;
    NSMutableArray *_subreddits;
    NSString *_title;
    NSString *_ident;
}

+ (id)folderWithTitle:(id)fp8;
- (void)setCollapsed:(BOOL)fp8;
- (BOOL)collapsed;
- (void)setIdent:(id)fp8;
- (id)ident;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setSubreddits:(id)fp8;
- (id)subreddits;
- (void).cxx_destruct;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)aggregateUrl;
- (void)sortAlphabetically;
- (void)removeSubreddit:(id)fp8;
- (void)addSubreddit:(id)fp8;
- (void)insertSubreddit:(id)fp8 atIndex:(unsigned int)fp12;
- (BOOL)containsSubreddit:(id)fp8;
- (id)itemMatchingSubreddit:(id)fp8;

@end

