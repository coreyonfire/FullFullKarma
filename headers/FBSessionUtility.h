/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface FBSessionUtility : _AVAudioSessionCategoryPlayback
{
}

+ (BOOL)logIfFoundUnexpectedPermissions:(id)fp8 isRead:(BOOL)fp12;
+ (void)validateRequestForPermissions:(id)fp8 defaultAudience:(int)fp12 allowSystemAccount:(BOOL)fp16 isRead:(BOOL)fp20;
+ (BOOL)areRequiredPermissions:(id)fp8 aSubsetOfPermissions:(id)fp12;
+ (id)expirationDateFromResponseParams:(id)fp8;
+ (void)addWebLoginStartTimeToParams:(id)fp8;
+ (id)sessionStateDescription:(int)fp8;
+ (id)clientStateFromQueryParams:(id)fp8;
+ (id)queryParamsFromLoginURL:(id)fp8 appID:(id)fp12 urlSchemeSuffix:(id)fp16;
+ (BOOL)isOpenSessionResponseURL:(id)fp8;

@end

