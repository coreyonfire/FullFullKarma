/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMTabContainer;

@interface JMTabView : _AVAudioSessionCategoryPlayback
{
    JMTabContainer *tabContainer_;
    id <JMTabViewDelegate> delegate_;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setTabContainer:(id)fp8;
- (id)tabContainer;
- (void).cxx_destruct;
- (void)setItemSpacing:(float)fp8;
- (void)setSelectionView:(id)fp8;
- (void)setSelectedIndex:(unsigned int)fp8;
- (void)addTabItemWithTitle:(id)fp8 icon:(id)fp12 executeBlock:(id)fp(null);
- (void)addTabItemWithTitle:(id)fp8 icon:(id)fp12;
- (void)addTabItem:(id)fp8;
- (void)setMomentary:(BOOL)fp8;
- (void)didSelectItemAtIndex:(unsigned int)fp8;
- (void)layoutSubviews;
- (void)setBackgroundLayer:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;

@end
