/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMTableContentView, JMTableNode;

@interface JMTableCell : _AVAudioSessionCategoryPlayback
{
    JMTableContentView *containerView_;
    JMTableNode *node_;
}

+ (float)heightForNode:(id)fp8 tableView:(id)fp12;
+ (id)cellForNode:(id)fp8 tableView:(id)fp12 delegate:(id)fp16;
- (void)setNode:(id)fp8;
- (id)node;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void).cxx_destruct;
- (void)drawContainerNode:(id)fp8 rect:(struct CGRect)fp12;
- (void)updateSubviews;
- (void)layoutContentView:(id)fp8;
- (void)prepareContentView:(id)fp8;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)updateWithNode:(id)fp8;
- (id)init;

@end
