/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface SHKReachability : _AVAudioSessionCategoryPlayback
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)fp8;
+ (id)reachabilityWithHostName:(id)fp8;
- (int)currentReachabilityStatus;
- (BOOL)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)fp8;
- (int)localWiFiStatusForFlags:(unsigned int)fp8;
- (void)dealloc;
- (void)stopNotifier;
- (BOOL)startNotifier;

@end

