/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class UILabel;

@interface DCStatusBarOverlay : _AVAudioSessionCategoryPlayback
{
    UILabel *leftLabel;
    UILabel *rightLabel;
}

- (void)setRightLabel:(id)fp8;
- (id)rightLabel;
- (void)setLeftLabel:(id)fp8;
- (id)leftLabel;
- (void).cxx_destruct;
- (void)tapped;
- (void)updateBarFrame;
- (id)init;
- (void)dealloc;

@end

