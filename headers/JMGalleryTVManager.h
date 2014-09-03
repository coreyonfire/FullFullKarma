/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMGalleryTVPlaceholderView, NSTimer, UIView, UIWindow;

@interface JMGalleryTVManager : _AVAudioSessionCategoryPlayback
{
    UIWindow *_secondWindow;
    UIView *_contentView;
    JMGalleryTVPlaceholderView *_placeholderView;
    NSTimer *_inactivityTimer;
}

+ (id)manager;
- (void)setInactivityTimer:(id)fp8;
- (id)inactivityTimer;
- (void)setPlaceholderView:(id)fp8;
- (id)placeholderView;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setSecondWindow:(id)fp8;
- (id)secondWindow;
- (void).cxx_destruct;
- (BOOL)hasSecondScreen;
- (void)handleScreenDidDisconnectNotification:(id)fp8;
- (void)handleScreenDidConnectNotification:(id)fp8;
- (void)availableScreensDidChange;
- (void)detachContentView:(id)fp8;
- (void)attachContentView:(id)fp8;
- (void)i_attachContentViewOnNextTVConnection;
- (void)didTriggerSecondScreenInactivityTimer;
- (void)i_detachCurrentlyPresentedContentView;
- (id)init;
- (void)dealloc;

@end

