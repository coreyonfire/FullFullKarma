/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class OptionCellView;

@interface OptionCell : _AVAudioSessionCategoryPlayback
{
    OptionCellView *optionCellView;
}

- (void)setOptionCellView:(id)fp8;
- (id)optionCellView;
- (void).cxx_destruct;
- (BOOL)isTicked;
- (void)redisplay;
- (void)refreshBackground;
- (void)setOption:(id)fp8;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
