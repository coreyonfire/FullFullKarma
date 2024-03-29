/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JMFNNavigationController;

@interface JMFNPagingScrollView : _AVAudioSessionCategoryPlayback <UIGestureRecognizerDelegate>
{
    JMFNNavigationController *_parentController;
    unsigned int _i_numDelayedTouches;
    unsigned int _i_numPanTouches;
}

- (void)setI_numPanTouches:(unsigned int)fp8;
- (unsigned int)i_numPanTouches;
- (void)setI_numDelayedTouches:(unsigned int)fp8;
- (unsigned int)i_numDelayedTouches;
- (void)setParentController:(id)fp8;
- (id)parentController;
- (void).cxx_destruct;
- (BOOL)touchesShouldCancelInContentView:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

