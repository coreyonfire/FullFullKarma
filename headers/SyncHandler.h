/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface SyncHandler : _AVAudioSessionCategoryPlayback
{
    BOOL _i_allowHandlingChangeRequests;
}

- (void)setI_allowHandlingChangeRequests:(BOOL)fp8;
- (BOOL)i_allowHandlingChangeRequests;
- (BOOL)allowHandlingRequests;
- (void)didEndHandlingRequest;
- (void)willBeginHandlingRequest;
- (void)finishedProcessingRemoteMerge;
- (BOOL)requiresSyncing:(id)fp8 remoteObject:(id)fp12;
- (id)mergeChangeFromLocalObject:(id)fp8 remoteObject:(id)fp12;
- (void)finishedSendingToCloudAfterUserDefaultsChange;
- (BOOL)shouldSendToCloudOnUserDefaultsChange;
- (id)keyToMonitor;
- (id)init;

@end
