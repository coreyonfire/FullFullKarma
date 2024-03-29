/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSObject<JMOptimalSwitchDelegate>, NSString, UIImageView;

@interface JMOptimalSwitch : _AVAudioSessionCategoryPlayback
{
    BOOL _switchValue;
    NSObject<JMOptimalSwitchDelegate> *_delegate;
    NSString *_contentIconName;
    UIImageView *_trackView;
    UIImageView *_buttonView;
    struct CGPoint _initialTouchLocation;
}

- (void)setInitialTouchLocation:(struct CGPoint)fp8;
- (struct CGPoint)initialTouchLocation;
- (void)setButtonView:(id)fp8;
- (id)buttonView;
- (void)setTrackView:(id)fp8;
- (id)trackView;
- (void)setContentIconName:(id)fp8;
- (id)contentIconName;
- (void)setSwitchValue:(BOOL)fp8;
- (BOOL)switchValue;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)applyThemeSettings;
- (id)createButtonView;
- (id)createTrackView;
- (void)applyGestureRecognizers;
- (void)didTap:(id)fp8;
- (void)didPan:(id)fp8;
- (void)snapToPosition;
- (void)i_animateChangeSwitchToValue:(BOOL)fp8;
- (void)notifyForSwitchChange;
- (void)setSwitchPositionToOffsetRatio:(float)fp8;
- (void)setSwitchOn:(BOOL)fp8 animated:(BOOL)fp12;
- (void)layoutViewsPannedToPoint:(struct CGPoint)fp8;
- (id)initWithContentIconName:(id)fp8;

@end

