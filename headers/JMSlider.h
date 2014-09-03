/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMCenterView, JMSideView, JMSliderTrack;

@interface JMSlider : _AVAudioSessionCategoryPlayback
{
    BOOL highlighted_;
    BOOL suppressCallbacks_;
    id leftExecuteBlock_;
    id centerExecuteBlock_;
    id rightExecuteBlock_;
    JMSliderTrack *trackView_;
    JMCenterView *centerView_;
    JMSideView *leftView_;
    JMSideView *rightView_;
    float currentSlideRatio_;
    id <JMSliderDelegate> delegate_;
}

+ (id)sliderWithFrame:(struct CGRect)fp8 delegate:(id)fp24;
+ (id)sliderWithFrame:(struct CGRect)fp8 centerTitle:(id)fp24 leftTitle:(id)fp28 rightTitle:(id)fp32 delegate:(id)fp36;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setSuppressCallbacks:(BOOL)fp8;
- (BOOL)suppressCallbacks;
- (void)setCurrentSlideRatio:(float)fp8;
- (float)currentSlideRatio;
- (void)setRightView:(id)fp8;
- (id)rightView;
- (void)setLeftView:(id)fp8;
- (id)leftView;
- (void)setCenterView:(id)fp8;
- (id)centerView;
- (void)setTrackView:(id)fp8;
- (id)trackView;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)highlighted;
- (void)setRightExecuteBlock:(id)fp(null);
- (id)rightExecuteBlock;
- (void)setCenterExecuteBlock:(id)fp(null);
- (id)centerExecuteBlock;
- (void)setLeftExecuteBlock:(id)fp(null);
- (id)leftExecuteBlock;
- (void).cxx_destruct;
- (id)generateTrackView;
- (id)generateRightViewWithDefaultTitle:(id)fp8;
- (id)generateLeftViewWithDefaultTitle:(id)fp8;
- (id)generateCenterViewWithDefaultTitle:(id)fp8;
- (void)setLoading:(BOOL)fp8;
- (void)tappedCenterView;
- (void)releaseDragShouldCancel:(BOOL)fp8;
- (void)setHighlightSlider:(BOOL)fp8;
- (float)slideRatio;
- (float)centerViewWidth;
- (float)trackHighCenter;
- (float)trackLowCenter;
- (void)setButtonCenterPosition:(struct CGPoint)fp8 animated:(BOOL)fp16;
- (void)updateWithSlideRatio:(float)fp8;
- (void)resetToCenter;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8 centerTitle:(id)fp24 leftTitle:(id)fp28 rightTitle:(id)fp32 delegate:(id)fp36;
- (void)dealloc;

@end
