/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "JMGalleryPageContainerContentViewProtocol-Protocol.h"
#import "JMYouTubeViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class JMGalleryFocusTitleIntroView, JMGalleryImageScrollView, JMGalleryItem, JMGalleryPlaybackButton, JMYouTubeView, NSTimer, UIImageView, UILabel;

@interface JMGalleryFocusMediaView : _AVAudioSessionCategoryPlayback <UIGestureRecognizerDelegate, JMYouTubeViewDelegate, JMGalleryPageContainerContentViewProtocol>
{
    BOOL _showingMediaView;
    BOOL _autoPlayIsWaitingOnStaticImageToLoad;
    id _onSingleTapAction;
    id _onRequestToExitFullscreenAction;
    id _onUserInteractionStart;
    id _onUserInteractionEnd;
    JMGalleryItem *_galleryItem;
    JMGalleryImageScrollView *_imageScrollView;
    UILabel *_tapToRevealLabel;
    JMGalleryPlaybackButton *_mediaPlayButton;
    JMYouTubeView *_mediaView;
    UIImageView *_mediaTypeImageView;
    JMGalleryFocusTitleIntroView *_introView;
    id _onMediaFinishedPlayback;
    NSTimer *_mediaPlaybackFinishTimer;
}

- (void)setAutoPlayIsWaitingOnStaticImageToLoad:(BOOL)fp8;
- (BOOL)autoPlayIsWaitingOnStaticImageToLoad;
- (void)setMediaPlaybackFinishTimer:(id)fp8;
- (id)mediaPlaybackFinishTimer;
- (void)setOnMediaFinishedPlayback:(id)fp(null);
- (id)onMediaFinishedPlayback;
- (void)setIntroView:(id)fp8;
- (id)introView;
- (void)setShowingMediaView:(BOOL)fp8;
- (BOOL)showingMediaView;
- (void)setMediaTypeImageView:(id)fp8;
- (id)mediaTypeImageView;
- (void)setMediaView:(id)fp8;
- (id)mediaView;
- (void)setMediaPlayButton:(id)fp8;
- (id)mediaPlayButton;
- (void)setTapToRevealLabel:(id)fp8;
- (id)tapToRevealLabel;
- (void)setImageScrollView:(id)fp8;
- (id)imageScrollView;
- (void)setGalleryItem:(id)fp8;
- (id)galleryItem;
- (void)setOnUserInteractionEnd:(id)fp(null);
- (id)onUserInteractionEnd;
- (void)setOnUserInteractionStart:(id)fp(null);
- (id)onUserInteractionStart;
- (void)setOnRequestToExitFullscreenAction:(id)fp(null);
- (id)onRequestToExitFullscreenAction;
- (void)setOnSingleTapAction:(id)fp(null);
- (id)onSingleTapAction;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)youTubeViewDidFinishPlaylistPlayback:(id)fp8;
- (void)youTubeViewDidFinishLoading:(id)fp8;
- (void)youTubeView:(id)fp8 didFailToLoadVideoWithError:(id)fp12;
- (void)youTubeViewDidPause:(id)fp8;
- (void)registerMediaViewInterestForDisplayOnSecondScreen;
- (void)contentViewDidBecomeCenterPage;
- (void)contentViewWillBecomeCenterPage;
- (void)contentViewWillBecomeOffscreenPage;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)handleSingleTapGesture:(id)fp8;
- (void)handleDoubleTapGesture:(id)fp8;
- (void)revealNSFWContent;
- (id)imageView;
- (void)scaleImageToFitSize:(struct CGSize)fp8 animated:(BOOL)fp16;
- (void)scaleToFitAnimated:(BOOL)fp8;
- (void)willMoveToSuperview:(id)fp8;
- (void)willMoveToWindow:(id)fp8;
- (void)cleanUp;
- (void)mediaPlaybackTimerDidTrigger;
- (void)startMediaPlaybackTimerWithFinishDuration:(double)fp8;
- (void)cancelMediaPlaybackTimer;
- (void)autoPlayStaticImageWhenLoaded;
- (void)startAutoplayShowingTitleIntro:(BOOL)fp8 onPlaybackComplete:(id)fp(null);
- (void)willAutoplayShowingTitleIntro:(BOOL)fp8;
- (void)layoutForRotation;
- (void)setOnPinchCloseAction:(id)fp(null);
- (void)setDirectImage:(id)fp8;
- (float)marginBetweenPlayButtonAndMediaTypeLabel;
- (void)updateWithGalleryItem:(id)fp8 onDownloadProgress:(id)fp(null);
- (void)updateImageViewWithGalleryItem:(id)fp8;
- (void)destroyMediaView;
- (void)switchToMediaView;
- (void)didTapMediaPlayButton;
- (void)setBackgroundColor:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
