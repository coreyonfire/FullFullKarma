/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSMutableArray;

@interface TMP_MessageReformatter : _AVAudioSessionCategoryPlayback
{
    NSMutableArray *_allLinks;
}

- (void)setAllLinks:(id)fp8;
- (id)allLinks;
- (void).cxx_destruct;
- (id)processLinks:(id)fp8;
- (id)parseBodyForDescribedLinks:(id)fp8;
- (id)parseBodyForUndescribedLinks:(id)fp8;
- (id)reformat:(id)fp8;
- (id)init;

@end
