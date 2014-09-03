/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FBSession.h"

@class NSString;

@interface FBTestSession : FBSession
{
    BOOL _forceAccessTokenRefresh;
    BOOL _disableReauthorize;
    NSString *_appAccessToken;
    NSString *_testUserID;
    NSString *_testAppID;
    NSString *_testAppSecret;
    int _mode;
    NSString *_machineUniqueUserKey;
    NSString *_sessionUniqueUserTag;
}

+ (void)deleteUnitTestUser:(id)fp8 accessToken:(id)fp12;
+ (id)sessionForUnitTestingWithPermissions:(id)fp8 mode:(int)fp12 sessionUniqueUserTag:(id)fp16;
+ (id)sessionWithPrivateUserWithPermissions:(id)fp8;
+ (id)sessionWithSharedUserWithPermissions:(id)fp8;
+ (id)sessionWithSharedUserWithPermissions:(id)fp8 uniqueUserTag:(id)fp12;
- (void)setDisableReauthorize:(BOOL)fp8;
- (BOOL)disableReauthorize;
- (void)setSessionUniqueUserTag:(id)fp8;
- (id)sessionUniqueUserTag;
- (void)setMachineUniqueUserTag:(id)fp8;
- (id)machineUniqueUserTag;
- (void)setMode:(int)fp8;
- (int)mode;
- (void)setTestAppSecret:(id)fp8;
- (id)testAppSecret;
- (void)setTestAppID:(id)fp8;
- (id)testAppID;
- (void)setTestUserID:(id)fp8;
- (id)testUserID;
- (void)setAppAccessToken:(id)fp8;
- (id)appAccessToken;
- (BOOL)shouldExtendAccessToken;
- (void)authorizeWithPermissions:(id)fp8 behavior:(int)fp12 defaultAudience:(int)fp16 isReauthorize:(BOOL)fp20;
- (BOOL)transitionToState:(int)fp8 withAccessTokenData:(id)fp12 shouldCache:(BOOL)fp16;
- (BOOL)forceAccessTokenRefresh;
- (void)setForceAccessTokenRefresh:(BOOL)fp8;
- (void)findOrCreateSharedUser;
- (id)sharedTestUserIdentifier;
- (id)validNameStringFromInteger:(unsigned int)fp8;
- (void)retrieveTestUsersForApp;
- (void)populateTestUsers:(id)fp8 testAccounts:(id)fp12;
- (void)raiseException:(id)fp8;
- (void)transitionToOpenWithToken:(id)fp8;
- (void)createNewTestUser;
- (id)permissionsString;
- (void)dealloc;
- (id)initWithAppID:(id)fp8 appSecret:(id)fp12 machineUniqueUserTag:(id)fp16 sessionUniqueUserTag:(id)fp20 mode:(int)fp24 permissions:(id)fp28 tokenCachingStrategy:(id)fp32;

@end

