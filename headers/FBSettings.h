/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface FBSettings : _AVAudioSessionCategoryPlayback
{
}

+ (void)publishInstall:(id)fp8 withHandler:(id)fp(null) isAutoPublish:(void)fp12;
+ (void)publishInstall:(id)fp8 withHandler:(id)fp(null);
+ (void)publishInstall:(id)fp8;
+ (BOOL)isBetaFeatureEnabled:(unsigned int)fp8;
+ (void)disableBetaFeature:(unsigned int)fp8;
+ (void)enableBetaFeature:(unsigned int)fp8;
+ (void)enableBetaFeatures:(unsigned int)fp8;
+ (void)autoPublishInstallImpl:(id)fp8;
+ (void)autoPublishInstall:(id)fp8;
+ (void)setShouldAutoPublishInstall:(BOOL)fp8;
+ (BOOL)shouldAutoPublishInstall;
+ (float)defaultJPEGCompressionQuality;
+ (void)setdefaultJPEGCompressionQuality:(float)fp8;
+ (id)defaultURLSchemeWithAppID:(id)fp8 urlSchemeSuffix:(id)fp12;
+ (id)defaultUrlSchemeSuffix;
+ (void)setDefaultUrlSchemeSuffix:(id)fp8;
+ (id)facebookDomainPart;
+ (void)setFacebookDomainPart:(id)fp8;
+ (id)resourceBundleName;
+ (void)setResourceBundleName:(id)fp8;
+ (id)defaultAppID;
+ (void)setDefaultAppID:(id)fp8;
+ (id)defaultDisplayName;
+ (void)setDefaultDisplayName:(id)fp8;
+ (void)setClientToken:(id)fp8;
+ (id)clientToken;
+ (void)setAppVersion:(id)fp8;
+ (id)appVersion;
+ (void)setLoggingBehavior:(id)fp8;
+ (id)loggingBehavior;
+ (id)sdkVersion;

@end
