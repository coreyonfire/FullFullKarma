/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMGalleryFocusTitleIntroProgressView, NSTimer, UILabel, UIView;

@interface JMGalleryFocusTitleIntroView : _AVAudioSessionCategoryPlayback
{
    BOOL _hasLoadedMedia;
    BOOL _hasReachedMinimumDisplayTime;
    BOOL _didPauseMediaViewToReachMinimumIntroDisplayTime;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    JMGalleryFocusTitleIntroProgressView *_progressView;
    NSTimer *_displayTimer;
    UIView *_mediaView;
    id _onIntroDisappearAction;
}

- (void)setDidPauseMediaViewToReachMinimumIntroDisplayTime:(BOOL)fp8;
- (BOOL)didPauseMediaViewToReachMinimumIntroDisplayTime;
- (void)setHasReachedMinimumDisplayTime:(BOOL)fp8;
- (BOOL)hasReachedMinimumDisplayTime;
- (void)setHasLoadedMedia:(BOOL)fp8;
- (BOOL)hasLoadedMedia;
- (void)setOnIntroDisappearAction:(id)fp(null);
- (id)onIntroDisappearAction;
- (void)setMediaView:(id)fp8;
- (id)mediaView;
- (void)setDisplayTimer:(id)fp8;
- (id)displayTimer;
- (void)setProgressView:(id)fp8;
- (id)progressView;
- (void)setSubtitleLabel:(id)fp8;
- (id)subtitleLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)fp8;
- (void)willMoveToWindow:(id)fp8;
- (void)cleanUp;
- (void)displayTimerTriggered;
- (void)startTimerForMinimumDisplayDuration:(double)fp8;
- (void)cancelDisplayTimer;
- (void)resumeMediaViewContentIfNecessary;
- (void)pauseMediaViewContentIfNecessary;
- (void)handleIntroHiding;
- (void)mediaViewIsReadyForDisplay:(id)fp8 doOnIntroDisappear:(id)fp(null);
- (void)setProgress:(float)fp8;
- (BOOL)readingDurationForTitle:(id)fp8;
- (void)showTitleIntroForGalleryItem:(id)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

