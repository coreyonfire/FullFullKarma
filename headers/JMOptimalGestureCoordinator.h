/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject<JMOptimalGestureCoordinatorDelegate>;

@interface JMOptimalGestureCoordinator : _AVAudioSessionCategoryPlayback <UIGestureRecognizerDelegate>
{
    BOOL _needToAvoidOverlappingTallImage;
    BOOL _isPanningOptimalBar;
    BOOL _panGestureShouldSwitchBetweenOptimalAndStandard;
    NSObject<JMOptimalGestureCoordinatorDelegate> *_controller;
    float _scrollOffsetForConcurrentPanGestureScrollView;
    struct CGPoint _barShowHidePanGestureStartLocation;
    struct CGPoint _barShowHideOptimalBarStartOrigin;
}

+ (id)attachListenersToController:(id)fp8;
- (void)setPanGestureShouldSwitchBetweenOptimalAndStandard:(BOOL)fp8;
- (BOOL)panGestureShouldSwitchBetweenOptimalAndStandard;
- (void)setScrollOffsetForConcurrentPanGestureScrollView:(float)fp8;
- (float)scrollOffsetForConcurrentPanGestureScrollView;
- (void)setBarShowHideOptimalBarStartOrigin:(struct CGPoint)fp8;
- (struct CGPoint)barShowHideOptimalBarStartOrigin;
- (void)setBarShowHidePanGestureStartLocation:(struct CGPoint)fp8;
- (struct CGPoint)barShowHidePanGestureStartLocation;
- (void)setIsPanningOptimalBar:(BOOL)fp8;
- (BOOL)isPanningOptimalBar;
- (void)setNeedToAvoidOverlappingTallImage:(BOOL)fp8;
- (BOOL)needToAvoidOverlappingTallImage;
- (void)setController:(id)fp8;
- (id)controller;
- (void).cxx_destruct;
- (void)showOptimalBar;
- (void)hideOptimalBar;
- (void)setOptimalBarHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)didPan:(id)fp8;
- (BOOL)allowPullToSwitch;
- (void)snapOptimalBarToEdges;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)positionOptimalBarToVerticalOffset:(float)fp8;
- (void)autoHideToolbarIfNecessary;
- (BOOL)shouldMoveDownWhenOptimalBarIsVisible;
- (BOOL)shouldAutoHideOptimalBarAfterLoading;
- (BOOL)shouldShowOptimalBarWhileLoading;
- (id)contentView;
- (id)optimalBarView;
- (void)standardBrowserDidFinishLoading;
- (void)standardBrowserDidStartLoading;
- (void)controllerOptimisationDidFail;
- (void)controllerOptimisationDidSucceed;
- (void)controllerViewDidLoad;
- (void)attachListeners;

@end

