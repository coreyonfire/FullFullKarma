/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface Subreddit : _AVAudioSessionCategoryPlayback <NSCoding>
{
    BOOL _nsfw;
    NSDictionary *_rawDictionary;
    NSString *_title;
    NSString *_longTitle;
    NSString *_description;
    NSString *_url;
    NSString *_ident;
    NSString *_name;
    unsigned int _numSubscribers;
}

+ (id)subredditWithUrl:(id)fp8 name:(id)fp12;
+ (id)formattedTitleForSubreddit:(id)fp8;
+ (id)subredditFromDictionary:(id)fp8;
+ (void)unsubscribeToSubredditWithUrl:(id)fp8;
+ (void)subscribeToSubredditWithUrl:(id)fp8;
+ (id)i_performAction:(id)fp8 toSubredditWithIdent:(id)fp12;
+ (id)i_retrieveIdentForSubredditWithUrl:(id)fp8 onComplete:(id)fp(null);
+ (id)fetchSubscribedSubredditsUsingCache:(BOOL)fp8 onComplete:(id)fp(null);
+ (id)fetchSubredditsAtPath:(id)fp8 useCache:(BOOL)fp12 cacheKey:(id)fp16 onComplete:(id)fp(null);
+ (id)moderationUrlForSubredditUrl:(id)fp8 modFolder:(int)fp12;
+ (id)friendlyNameForModerationFolder:(int)fp8;
- (void)setNumSubscribers:(unsigned int)fp8;
- (unsigned int)numSubscribers;
- (void)setNsfw:(BOOL)fp8;
- (BOOL)nsfw;
- (void)setName:(id)fp8;
- (id)name;
- (void)setIdent:(id)fp8;
- (id)ident;
- (void)setUrl:(id)fp8;
- (id)url;
- (void)setDescription:(id)fp8;
- (id)description;
- (void)setLongTitle:(id)fp8;
- (id)longTitle;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setRawDictionary:(id)fp8;
- (id)rawDictionary;
- (void).cxx_destruct;
- (BOOL)subscribed;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (BOOL)isNativeSubreddit;
- (id)iconIdent;
- (id)initWithDiscoveryDictionary:(id)fp8;
- (void)setPopularityRating:(float)fp8;
- (float)popularityRating;
- (void)setHasDiscoveryIcon:(BOOL)fp8;
- (BOOL)hasDiscoveryIcon;

@end

