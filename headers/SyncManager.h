/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSMutableArray;

@interface SyncManager : _AVAudioSessionCategoryPlayback
{
    BOOL _iCloudAvailable;
    NSMutableArray *_handlers;
}

+ (id)manager;
- (void)setHandlers:(id)fp8;
- (id)handlers;
- (void)setICloudAvailable:(BOOL)fp8;
- (BOOL)iCloudAvailable;
- (void).cxx_destruct;
- (id)availableHandlerForKey:(id)fp8;
- (void)cloudChangedNotification:(id)fp8;
- (void)syncForAllRemoteKeys;
- (void)syncForCloudKeys:(id)fp8;
- (id)keysChangedFromCloudNotification:(id)fp8;
- (void)showDebugLogForCloudNotification:(id)fp8;
- (void)userDefaultsChangedNotification:(id)fp8;
- (void)syncLocalPrefsToCloud;
- (void)removeSyncHandler:(id)fp8;
- (void)addSyncHandler:(id)fp8;
- (void)start;
- (void)i_start;
- (void)setListeningToDefaultsNotification:(BOOL)fp8;
- (void)removeCloudObjectForKey:(id)fp8;
- (id)cloudObjectForKey:(id)fp8;
- (id)init;
- (void)dealloc;
- (void)addAlienBlueSyncHandlers;
- (void)setVisitedSyncHandler:(id)fp8;
- (id)visitedSyncHandler;

@end
