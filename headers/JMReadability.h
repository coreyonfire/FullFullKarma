/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMRParser;

@interface JMReadability : _AVAudioSessionCategoryPlayback
{
    JMRParser *_parser;
}

+ (void)parseHTML:(id)fp8 onComplete:(id)fp(null);
- (void)setParser:(id)fp8;
- (id)parser;
- (void).cxx_destruct;
- (void)parseOnComplete:(id)fp(null);
- (id)initWithHTML:(id)fp8;

@end

