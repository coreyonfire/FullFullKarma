/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FBCacheDescriptor.h"

#import "FBFrictionlessDialogSupportDelegate-Protocol.h"
#import "FBWebDialogsDelegate-Protocol.h"

@class FBFrictionlessRequestSettings;

@interface FBFrictionlessRecipientCache : FBCacheDescriptor <FBFrictionlessDialogSupportDelegate, FBWebDialogsDelegate>
{
    BOOL _frictionlessShouldMakeViewInvisible;
    FBFrictionlessRequestSettings *_frictionlessSettings;
}

- (void)setFrictionlessShouldMakeViewInvisible:(BOOL)fp8;
- (BOOL)frictionlessShouldMakeViewInvisible;
- (void)setFrictionlessSettings:(id)fp8;
- (id)frictionlessSettings;
- (void)webDialogsWillPresentDialog:(id)fp8 parameters:(id)fp12 session:(id)fp16;
- (void)prefetchAndCacheForSession:(id)fp8 completionHandler:(id)fp(null);
- (void)prefetchAndCacheForSession:(id)fp8;
- (BOOL)areFrictionlessRecipients:(id)fp8;
- (BOOL)isFrictionlessRecipient:(id)fp8;
- (void)setRecipientIDs:(id)fp8;
- (id)recipientIDs;
- (void)dealloc;
- (id)init;

@end
