/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class FBRequestConnection, FBRequestConnectionRetryManagerAlertViewHelper, FBSession, NSMutableArray, NSString;

@interface FBRequestConnectionRetryManager : _AVAudioSessionCategoryPlayback
{
    FBRequestConnection *_requestConnection;
    int _state;
    FBSession *_sessionToReconnect;
    NSString *_alertMessage;
    NSMutableArray *_requestMetadatas;
    FBRequestConnectionRetryManagerAlertViewHelper *_alertViewHelper;
}

- (void)setAlertViewHelper:(id)fp8;
- (id)alertViewHelper;
- (void)setRequestMetadatas:(id)fp8;
- (id)requestMetadatas;
- (void)setAlertMessage:(id)fp8;
- (id)alertMessage;
- (void)setSessionToReconnect:(id)fp8;
- (id)sessionToReconnect;
- (void)setState:(int)fp8;
- (int)state;
- (void)setRequestConnection:(id)fp8;
- (id)requestConnection;
- (void)dealloc;
- (void)repairFailed;
- (void)repairSuccess;
- (void)performRetries;
- (void)addRequestMetadata:(id)fp8;
- (id)initWithFBRequestConnection:(id)fp8;

@end

