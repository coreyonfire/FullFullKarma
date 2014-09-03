/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "FBRequestDelegate-Protocol.h"

@class FBRequest, NSArray;

@interface FBFrictionlessRequestSettings : _AVAudioSessionCategoryPlayback <FBRequestDelegate>
{
    NSArray *_allowedRecipients;
    FBRequest *_activeRequest;
    BOOL _enabled;
}

- (void)setActiveRequest:(id)fp8;
- (id)activeRequest;
- (void)setAllowedRecipients:(id)fp8;
- (id)allowedRecipients;
- (BOOL)enabled;
- (void)dealloc;
- (void)request:(id)fp8 didFailWithError:(id)fp12;
- (void)request:(id)fp8 didLoad:(id)fp12;
- (void)updateRecipientCacheWithRequestResult:(id)fp8;
- (BOOL)isFrictionlessEnabledForRecipients:(id)fp8;
- (BOOL)isFrictionlessEnabledForRecipient:(id)fp8;
- (void)updateRecipientCacheWithRecipients:(id)fp8;
- (id)recipientIDs;
- (void)reloadRecipientCacheWithFacebook:(id)fp8;
- (void)enableWithFacebook:(id)fp8;
- (id)init;

@end
