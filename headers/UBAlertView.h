/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray;

@interface UBAlertView : _AVAudioSessionCategoryPlayback <UIAlertViewDelegate>
{
    NSMutableArray *buttonBlocks_;
}

- (void)setAlertViewCancelBlock:(id)fp(null);
- (void)alertViewCancel:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)addButtonWithTitle:(id)fp8 block:(id)fp(null);
- (void)dealloc;
- (id)initWithTitle:(id)fp8 message:(id)fp12;

@end
