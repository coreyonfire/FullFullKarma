/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "FBLoginDialogDelegate-Protocol.h"

@class FBAccessTokenData, FBLoginDialog, FBSessionAppEventsState, FBSessionAuthLogger, FBSessionTokenCachingStrategy, NSArray, NSDate, NSString, NSThread;

@interface FBSession : _AVAudioSessionCategoryPlayback <FBLoginDialogDelegate>
{
    NSString *_urlSchemeSuffix;
    BOOL _isInStateTransition;
    int _loginTypeOfPendingOpenUrlCallback;
    int _defaultDefaultAudience;
    BOOL _isRepairing;
    int _state;
    NSString *_appID;
    FBAccessTokenData *_accessTokenData;
    NSArray *_initializedPermissions;
    int _lastRequestedSystemAudience;
    FBSessionTokenCachingStrategy *_tokenCachingStrategy;
    NSDate *_attemptedRefreshDate;
    NSDate *_attemptedPermissionsRefreshDate;
    id _loginHandler;
    id _reauthorizeHandler;
    FBLoginDialog *_loginDialog;
    NSThread *_affinitizedThread;
    FBSessionAppEventsState *_appEventsState;
    FBSessionAuthLogger *_authLogger;
}

+ (id)sdkSurfacedErrorForNativeLoginError:(id)fp8;
+ (id)activeSessionIfOpen;
+ (id)activeSessionIfExists;
+ (BOOL)openActiveSessionWithPermissions:(id)fp8 allowLoginUI:(BOOL)fp12 allowSystemAccount:(BOOL)fp16 isRead:(BOOL)fp20 defaultAudience:(int)fp24 completionHandler:(id)fp(null);
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
+ (void)renewSystemCredentials:(id)fp(null);
+ (id)defaultUrlSchemeSuffix;
+ (void)setDefaultUrlSchemeSuffix:(id)fp8;
+ (id)defaultAppID;
+ (void)setDefaultAppID:(id)fp8;
+ (id)setActiveSession:(id)fp8;
+ (id)activeSession;
+ (BOOL)openActiveSessionWithPublishPermissions:(id)fp8 defaultAudience:(int)fp12 allowLoginUI:(BOOL)fp16 completionHandler:(id)fp(null);
+ (BOOL)openActiveSessionWithReadPermissions:(id)fp8 allowLoginUI:(BOOL)fp12 completionHandler:(id)fp(null);
+ (BOOL)openActiveSessionWithPermissions:(id)fp8 allowLoginUI:(BOOL)fp12 defaultAudience:(int)fp16 completionHandler:(id)fp(null);
+ (BOOL)openActiveSessionWithPermissions:(id)fp8 allowLoginUI:(BOOL)fp12 completionHandler:(id)fp(null);
+ (BOOL)openActiveSessionWithAllowLoginUI:(BOOL)fp8;
- (void)setAuthLogger:(id)fp8;
- (id)authLogger;
- (void)setAppEventsState:(id)fp8;
- (id)appEventsState;
- (void)setAffinitizedThread:(id)fp8;
- (id)affinitizedThread;
- (void)setLoginDialog:(id)fp8;
- (id)loginDialog;
- (void)setReauthorizeHandler:(id)fp(null);
- (id)reauthorizeHandler;
- (void)setLoginHandler:(id)fp(null);
- (id)loginHandler;
- (void)setAttemptedPermissionsRefreshDate:(id)fp8;
- (id)attemptedPermissionsRefreshDate;
- (void)setAttemptedRefreshDate:(id)fp8;
- (id)attemptedRefreshDate;
- (void)setTokenCachingStrategy:(id)fp8;
- (id)tokenCachingStrategy;
- (void)setIsRepairing:(BOOL)fp8;
- (BOOL)isRepairing;
- (void)setLastRequestedSystemAudience:(int)fp8;
- (int)lastRequestedSystemAudience;
- (void)setInitializedPermissions:(id)fp8;
- (id)initializedPermissions;
- (void)setAccessTokenData:(id)fp8;
- (id)accessTokenData;
- (void)setAppID:(id)fp8;
- (id)appID;
- (void)setState:(int)fp8;
- (int)state;
- (id)description;
- (void)closeAndClearTokenInformation:(id)fp8;
- (BOOL)openFromAccessTokenData:(id)fp8 completionHandler:(id)fp(null) raiseExceptionIfInvalidState:(void)fp12;
- (id)jsonClientStateWithDictionary:(id)fp8;
- (id)errorLoginFailedWithReason:(id)fp8 errorCode:(id)fp12 innerError:(id)fp16 localizedDescription:(id)fp20;
- (id)errorLoginFailedWithReason:(id)fp8 errorCode:(id)fp12 innerError:(id)fp16;
- (id)appBaseUrl;
- (void)callReauthorizeHandlerAndClearState:(id)fp8;
- (void)transitionAndCallHandlerWithState:(int)fp8 error:(id)fp12 tokenData:(id)fp16 shouldCache:(BOOL)fp20;
- (void)fbDialogNotLogin:(BOOL)fp8;
- (void)fbDialogLogin:(id)fp8 expirationDate:(id)fp12;
- (void)checkThreadAffinity;
- (void)clearAffinitizedThread;
- (void)refreshPermissions:(id)fp8;
- (BOOL)shouldRefreshPermissions;
- (BOOL)shouldExtendAccessToken;
- (void)refreshAccessToken:(id)fp8 expirationDate:(id)fp12;
- (void)authorizeRequestWasImplicitlyCancelled;
- (void)completeReauthorizeWithAccessToken:(id)fp8 expirationDate:(id)fp12 permissions:(id)fp16;
- (void)repairWithHandler:(id)fp(null);
- (void)reauthorizeWithPermissions:(id)fp8 isRead:(BOOL)fp12 behavior:(int)fp16 defaultAudience:(int)fp20 completionHandler:(id)fp(null);
- (void)validateReauthorizedAccessToken:(id)fp8 expirationDate:(id)fp12;
- (BOOL)handleReauthorize:(id)fp8 accessToken:(id)fp12;
- (BOOL)handleAuthorizationOpen:(id)fp8 accessToken:(id)fp12 loginType:(int)fp16;
- (void)authorizeUsingLoginDialog:(id)fp8;
- (BOOL)tryOpenURL:(id)fp8;
- (BOOL)authorizeUsingSafari:(id)fp8;
- (BOOL)authorizeUsingFacebookApplication:(id)fp8;
- (BOOL)isURLSchemeRegistered;
- (void)handleDidCompleteNativeLoginForAppCall:(id)fp8;
- (id)authorizeUsingFacebookNativeLoginWithPermissions:(id)fp8 defaultAudience:(int)fp12 clientState:(id)fp16;
- (id)getSystemAccountStoreAdapter;
- (void)authorizeUsingSystemAccountStore:(id)fp8 defaultAudience:(int)fp12 isReauthorize:(BOOL)fp16;
- (void)logIntegratedAuthAppEvent:(id)fp8 permissions:(id)fp12;
- (void)setLoginTypeOfPendingOpenUrlCallback:(int)fp8;
- (void)retryableAuthorizeWithPermissions:(id)fp8 defaultAudience:(int)fp12 integratedAuth:(BOOL)fp16 FBAppAuth:(BOOL)fp20 safariAuth:(BOOL)fp24 fallback:(BOOL)fp28 isReauthorize:(BOOL)fp32 canFetchAppSettings:(BOOL)fp36;
- (void)authorizeWithPermissions:(id)fp8 defaultAudience:(int)fp12 integratedAuth:(BOOL)fp16 FBAppAuth:(BOOL)fp20 safariAuth:(BOOL)fp24 fallback:(BOOL)fp28 isReauthorize:(BOOL)fp32 canFetchAppSettings:(BOOL)fp36;
- (void)authorizeWithPermissions:(id)fp8 behavior:(int)fp12 defaultAudience:(int)fp16 isReauthorize:(BOOL)fp20;
- (BOOL)transitionToState:(int)fp8 withAccessTokenData:(id)fp12 shouldCache:(BOOL)fp16;
- (void)setUrlSchemeSuffix:(id)fp8;
- (id)urlSchemeSuffix;
- (BOOL)isOpen;
- (void)handleDidBecomeActive;
- (BOOL)openFromAccessTokenData:(id)fp8 completionHandler:(id)fp(null);
- (BOOL)handleOpenURL:(id)fp8;
- (BOOL)handleAuthorizationCallbacks:(id)fp8 params:(id)fp12 loginType:(int)fp16;
- (void)closeAndClearTokenInformation;
- (void)close;
- (void)requestNewPublishPermissions:(id)fp8 defaultAudience:(int)fp12 completionHandler:(id)fp(null);
- (void)requestNewReadPermissions:(id)fp8 completionHandler:(id)fp(null);
- (void)reauthorizeWithPublishPermissions:(id)fp8 defaultAudience:(int)fp12 completionHandler:(id)fp(null);
- (void)reauthorizeWithReadPermissions:(id)fp8 completionHandler:(id)fp(null);
- (void)reauthorizeWithPermissions:(id)fp8 behavior:(int)fp12 completionHandler:(id)fp(null);
- (void)openWithBehavior:(int)fp8 completionHandler:(id)fp(null);
- (void)openWithCompletionHandler:(id)fp(null);
- (int)loginType;
- (id)expirationDate;
- (id)accessToken;
- (id)refreshDate;
- (id)permissions;
- (void)dealloc;
- (BOOL)initializeFromCachedToken:(id)fp8 withPermissions:(id)fp12;
- (id)initWithAppID:(id)fp8 permissions:(id)fp12 defaultAudience:(int)fp16 urlSchemeSuffix:(id)fp20 tokenCacheStrategy:(id)fp24;
- (id)initWithAppID:(id)fp8 permissions:(id)fp12 urlSchemeSuffix:(id)fp16 tokenCacheStrategy:(id)fp20;
- (id)initWithPermissions:(id)fp8;
- (id)init;

@end

