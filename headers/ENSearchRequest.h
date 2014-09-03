/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "ENApplicationRequest-Protocol.h"

@class NSString;

@interface ENSearchRequest : _AVAudioSessionCategoryPlayback <ENApplicationRequest>
{
    NSString *mQueryString;
}

+ (id)searchRequestForSourceApplication:(id)fp8;
+ (id)searchRequestWithQueryString:(id)fp8;
- (void)setQueryString:(id)fp8;
- (id)queryString;
- (void).cxx_destruct;
- (id)description;
- (id)requestIdentifier;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end
