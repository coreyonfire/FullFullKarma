/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMGalleryViewCoordinator.h"

@class JMGalleryFocusToolbar, JMGalleryInteractionToolbar, JMGalleryNavigationToolbar, NSMutableArray, UIActivityIndicatorView, UIButton;

@interface JMGalleryFocusCoordinator : JMGalleryViewCoordinator
{
    UIActivityIndicatorView *_activityIndicator;
    id _onZoomStartAction;
    id _onZoomFinishAction;
    id _onPinchCloseAction;
    id _onSingleTapAction;
    NSMutableArray *_pagedViewCache;
    JMGalleryFocusToolbar *_focusToolbar;
    JMGalleryNavigationToolbar *_navigationToolbar;
    JMGalleryInteractionToolbar *_interactionToolbar;
    UIButton *_closeFocusButton;
}

- (void)setCloseFocusButton:(id)fp8;
- (id)closeFocusButton;
- (void)setInteractionToolbar:(id)fp8;
- (id)interactionToolbar;
- (void)setNavigationToolbar:(id)fp8;
- (id)navigationToolbar;
- (void)setFocusToolbar:(id)fp8;
- (id)focusToolbar;
- (void)setPagedViewCache:(id)fp8;
- (id)pagedViewCache;
- (void)setOnSingleTapAction:(id)fp(null);
- (id)onSingleTapAction;
- (void)setOnPinchCloseAction:(id)fp(null);
- (id)onPinchCloseAction;
- (void)setOnZoomFinishAction:(id)fp(null);
- (id)onZoomFinishAction;
- (void)setOnZoomStartAction:(id)fp(null);
- (id)onZoomStartAction;
- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void).cxx_destruct;
- (void)pagingViewDidFinishScrollAnimation:(id)fp8;
- (void)pagingViewDidStartScrollAnimation:(id)fp8;
- (void)pagingView:(id)fp8 didScrollToPage:(unsigned int)fp12;
- (void)pagingView:(id)fp8 contentViewWillBecomeCenter:(id)fp12 atPageIndex:(unsigned int)fp16;
- (id)pagingView:(id)fp8 contentViewForPage:(unsigned int)fp12;
- (unsigned int)numberOfPagesForPagingView:(id)fp8;
- (void)scaleImageScrollViewsToFitSize:(struct CGSize)fp8;
- (void)willDisappear;
- (void)handleMidRotation;
- (id)dequeuePagedViewFromCacheWithPreferenceTag:(unsigned int)fp8;
- (void)buildPagedViewCache;
- (void)toggleFullscreenAnimated:(BOOL)fp8;
- (void)willBecomeActiveForGalleryItem:(id)fp8;
- (void)switchFocusToolbar;
- (void)loadView;
- (id)initWithDatasource:(id)fp8 parentViewController:(id)fp12;
- (void)dismissSettingsPopover;
- (void)showAutoplaySettingsHighlightOptionWithTitle:(id)fp8;
- (BOOL)shouldAutoplayGalleryItem:(id)fp8;
- (void)iPhone_animateSelectionOfNextItem:(id)fp8;
- (void)iPad_animateSelectionOfNextItem:(id)fp8;
- (void)cueNextAutoplayItem;
- (id)nextAutoplayableItem;
- (void)configureMediaViewForAutoplayIfNecessary;
- (BOOL)shouldShowTitleIntro;
- (void)notifyMediaViewForAutoplayIfNecessary:(id)fp8 galleryItem:(id)fp12;
- (void)handleSingleItemPlaybackRequestedFromGridView;
- (void)autoplayDidReceiveMoreItemsForPlayback;
- (BOOL)autoplayShouldShowTitleIntrosOnSecondScreen;
- (BOOL)autoplayShouldShowTitleIntrosInFullscreen;
- (BOOL)autoplayShouldSkipVideos;
- (BOOL)autoplayShouldSkipGIFs;
- (BOOL)autoplayShouldSkipNSFW;
- (void)autoplay_userDidFinishInteracting;
- (void)autoplay_userDidStartInteracting;
- (void)autoResumeTimerDidTrigger;
- (void)startAutoresumeTimer;
- (void)cancelAutoresumeTimer;
- (void)autoplay_toggleFullscreenAnimated:(BOOL)fp8;
- (void)autoplay_willDisappear;
- (void)stopAutoplay;
- (void)resumeAutoplayAfterInteractingWithContent;
- (void)pauseAutoplayDueToUserInteractingWithContent;
- (void)startAutoplay;
- (BOOL)shouldDisplayVideoPlaybackDisabledWarning;
- (void)didToggleAutoplayButton;
- (void)didTouchAutoplayButton;
- (void)didLongPressAutoplayButton:(id)fp8;
- (void)updateAutoplayButton;
- (void)showAutoplayInstructionText:(id)fp8;
- (void)loadAutoplaySupportViews;
- (void)setSettingsPopover:(id)fp8;
- (id)settingsPopover;
- (void)setLastContentInteractionTime:(id)fp8;
- (id)lastContentInteractionTime;
- (void)setAutoplayResumeCountdownTimer:(id)fp8;
- (id)autoplayResumeCountdownTimer;
- (void)setAutoplayButton:(id)fp8;
- (id)autoplayButton;
- (void)setAutoplayInstructionLabel:(id)fp8;
- (id)autoplayInstructionLabel;
- (void)setAutoplayIsWaitingOnMoreResults:(BOOL)fp8;
- (BOOL)autoplayIsWaitingOnMoreResults;
- (void)setIsPausedWhileUserInteractsWithContent:(BOOL)fp8;
- (BOOL)isPausedWhileUserInteractsWithContent;
- (void)setIsAutoplaying:(BOOL)fp8;
- (BOOL)isAutoplaying;

@end
