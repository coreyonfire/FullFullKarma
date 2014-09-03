/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMOutlineCellContentView, JMOutlineNode;

@interface JMOutlineCell : _AVAudioSessionCategoryPlayback
{
    BOOL _isPrerendered;
    BOOL _jm_releasedRenderDuringTouch;
    JMOutlineNode *node_;
    int rowIndex_;
    float threadLineOffset_;
    JMOutlineCellContentView *_containerView;
    struct CGSize _prerenderSize;
}

+ (float)heightForNode:(id)fp8 tableView:(id)fp12;
+ (id)prerenderedCellForNode:(id)fp8 tableView:(id)fp12 cellImage:(id)fp16;
+ (id)cellForNode:(id)fp8 tableView:(id)fp12;
+ (id)dequeuedCellForNode:(id)fp8 tableView:(id)fp12;
+ (struct CGRect)cellInsetForNode:(id)fp8 constrainedToSize:(struct CGSize)fp12;
- (void)setPrerenderSize:(struct CGSize)fp8;
- (struct CGSize)prerenderSize;
- (void)setJm_releasedRenderDuringTouch:(BOOL)fp8;
- (BOOL)jm_releasedRenderDuringTouch;
- (void)setIsPrerendered:(BOOL)fp8;
- (BOOL)isPrerendered;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void)setThreadLineOffset:(float)fp8;
- (float)threadLineOffset;
- (void)setRowIndex:(int)fp8;
- (int)rowIndex;
- (void)setNode:(id)fp8;
- (id)node;
- (void).cxx_destruct;
- (void)decorateCell;
- (void)decorateCellBackground;
- (void)layoutCellOverlays;
- (void)updateSubviews;
- (void)createSubviews;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)removePrerender;
- (void)setCellBackgroundColor:(id)fp8;
- (struct CGRect)cellInset;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (void)updateWithNode:(id)fp8;

@end
