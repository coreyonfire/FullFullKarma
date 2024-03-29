/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMTextField, NSString;

@interface LoginPasswordController_iPad : _AVAudioSessionCategoryPlayback
{
    id _callbackTarget;
    int _accountIndex;
    NSString *_username;
    NSString *_password;
    JMTextField *_usernameField;
    JMTextField *_passwordField;
}

- (void)setPasswordField:(id)fp8;
- (id)passwordField;
- (void)setUsernameField:(id)fp8;
- (id)usernameField;
- (void)setPassword:(id)fp8;
- (id)password;
- (void)setUsername:(id)fp8;
- (id)username;
- (void)setAccountIndex:(int)fp8;
- (int)accountIndex;
- (void)setCallbackTarget:(id)fp8;
- (id)callbackTarget;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)cancel;
- (void)submit;
- (void)dismiss;
- (void)setCallbackTarget:(id)fp8 forAccountIndex:(int)fp12;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)loadView;
- (id)initWithUsername:(id)fp8 password:(id)fp12;

@end

