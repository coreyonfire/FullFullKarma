/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class SHKFormFieldSettings;

@interface SHKFormFieldCell : _AVAudioSessionCategoryPlayback
{
    id <SHKFormFieldCellDelegate> delegate;
    SHKFormFieldSettings *settings;
}

- (void)setSettings:(id)fp8;
- (id)settings;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)userSetValue:(id)fp8;
- (void)setupWithSettings:(id)fp8;
- (void)setupLayout;
- (void)dealloc;

@end
