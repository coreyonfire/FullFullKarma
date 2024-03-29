/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSOperationQueue, UIViewController;

@interface SHK : _AVAudioSessionCategoryPlayback
{
    BOOL _isDismissingView;
    UIViewController *_currentView;
    UIViewController *_pendingView;
    NSOperationQueue *_offlineQueue;
    UIViewController *_rootViewController;
    SEL _showMethod;
}

+ (BOOL)connected;
+ (id)error:(id)fp8;
+ (void)flushOfflineQueue;
+ (BOOL)addToOfflineQueue:(id)fp8 forSharer:(id)fp12;
+ (void)saveOfflineQueueList:(id)fp8;
+ (id)getOfflineQueueList;
+ (id)offlineQueueListPath;
+ (id)offlineQueuePath;
+ (id)sharersDictionary;
+ (id)shareKitLibraryBundlePath;
+ (void)logoutOfService:(id)fp8;
+ (void)logoutOfAll;
+ (void)removeAuthValueForKey:(id)fp8 forSharer:(id)fp12;
+ (void)setAuthValue:(id)fp8 forKey:(id)fp12 forSharer:(id)fp16;
+ (id)getAuthValueForKey:(id)fp8 forSharer:(id)fp12;
+ (id)favoritesKeyForItem:(id)fp8;
+ (void)setFavorites:(id)fp8 forItem:(id)fp12;
+ (void)pushOnFavorites:(id)fp8 forItem:(id)fp12;
+ (id)favoriteSharersForItem:(id)fp8;
+ (int)modalTransitionStyleForController:(id)fp8;
+ (int)modalPresentationStyleForController:(id)fp8;
+ (int)barStyle;
+ (void)setRootViewController:(id)fp8;
+ (id)currentHelper;
- (void)setShowMethod:(SEL)fp8;
- (SEL)showMethod;
- (void)setRootViewController:(id)fp8;
- (id)rootViewController;
- (void)setOfflineQueue:(id)fp8;
- (id)offlineQueue;
- (void)setIsDismissingView:(BOOL)fp8;
- (BOOL)isDismissingView;
- (void)setPendingView:(id)fp8;
- (id)pendingView;
- (void)setCurrentView:(id)fp8;
- (id)currentView;
- (void)viewWasDismissed;
- (void)showPendingView;
- (void)hideCurrentViewControllerAnimated:(BOOL)fp8;
- (void)hideCurrentViewController;
- (BOOL)hidePreviousView:(id)fp8;
- (void)presentVC:(id)fp8;
- (void)showStandaloneViewController:(id)fp8;
- (void)showViewController:(id)fp8;
- (id)getCurrentRootViewController;
- (id)rootViewForUIDisplay;
- (void)dealloc;

@end

