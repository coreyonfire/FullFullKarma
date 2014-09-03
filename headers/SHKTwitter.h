/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SHKOAuthSharer.h"

#import "SHKFormControllerLargeTextFieldDelegate-Protocol.h"

@interface SHKTwitter : SHKOAuthSharer <SHKFormControllerLargeTextFieldDelegate>
{
    BOOL xAuth;
}

+ (id)authorizationFormFields;
+ (id)authorizationFormCaption;
+ (void)logout;
+ (BOOL)canGetUserInfo;
+ (BOOL)canShareImage;
+ (BOOL)canShareText;
+ (BOOL)canShareURL;
+ (id)sharerTitle;
- (void)setXAuth:(BOOL)fp8;
- (BOOL)xAuth;
- (void)handleUnsuccessfulTicket:(id)fp8;
- (void)followMe;
- (void)sendImageTicket:(id)fp8 didFailWithError:(id)fp12;
- (void)sendImageTicket:(id)fp8 didFinishWithData:(id)fp12;
- (void)sendImage;
- (void)sendStatusTicket:(id)fp8 didFailWithError:(id)fp12;
- (void)sendStatusTicket:(id)fp8 didFinishWithData:(id)fp12;
- (void)sendStatus;
- (void)sendUserInfo:(id)fp8 didFailWithError:(id)fp12;
- (void)sendUserInfo:(id)fp8 didFinishWithData:(id)fp12;
- (void)sendUserInfo;
- (BOOL)send;
- (BOOL)validateItem;
- (void)sendForm:(id)fp8;
- (void)showTwitterForm;
- (void)show;
- (void)tokenAccessTicket:(id)fp8 didFinishWithData:(id)fp12;
- (void)tokenAccessModifyRequest:(id)fp8;
- (void)authorizationFormValidate:(id)fp8;
- (void)promptAuthorization;
- (BOOL)isAuthorized;
- (void)prepareItem;
- (BOOL)socialFrameworkAvailable;
- (BOOL)twitterFrameworkAvailable;
- (void)setupiOSSharer:(id)fp8;
- (void)share;
- (BOOL)requiresShortenedURL;
- (id)init;

@end

