/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class UIImageView;

@interface JMGalleryToolbarItem : _AVAudioSessionCategoryPlayback
{
    id _onTap;
    UIImageView *_iconImageView;
}

- (void)setIconImageView:(id)fp8;
- (id)iconImageView;
- (void)setOnTap:(id)fp(null);
- (id)onTap;
- (void).cxx_destruct;
- (void)tapped;
- (void)setSelected:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (id)initWithIconName:(id)fp8 highlightColor:(id)fp12;
- (id)initWithIconName:(id)fp8;
- (id)initWithImage:(id)fp8;
- (id)initWithImage:(id)fp8 highlightedImage:(id)fp12;

@end

