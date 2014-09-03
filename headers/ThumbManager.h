/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSMutableArray;

@interface ThumbManager : _AVAudioSessionCategoryPlayback
{
    NSMutableArray *_localSiteThumbs;
}

+ (id)localImageForUrl:(id)fp8;
+ (id)ab_requestForUrl:(id)fp8 useCache:(BOOL)fp12;
+ (id)ab_s3LinkForUrl:(id)fp8 withSize:(id)fp12;
+ (id)ab_forcedThumbProcessLinkForUrl:(id)fp8 withSize:(id)fp12;
+ (id)ab_thumbProcessLinkForUrl:(id)fp8 withSize:(id)fp12;
+ (id)requestToken:(id)fp8;
+ (id)uriHash:(id)fp8;
+ (id)manager;
- (void)setLocalSiteThumbs:(id)fp8;
- (id)localSiteThumbs;
- (void).cxx_destruct;
- (id)subredditIconForSubreddit:(id)fp8 ident:(id)fp12 onComplete:(id)fp(null);
- (void)forceCreateResizeServerThumbnailForUrl:(id)fp8 onComplete:(id)fp(null);
- (id)resizedImageForUrl:(id)fp8 fallbackUrl:(id)fp12 size:(struct CGSize)fp16 onComplete:(id)fp(null) onFailure:(void)fp24;
- (id)resizedImageForUrl:(id)fp8 fallbackUrl:(id)fp12 size:(struct CGSize)fp16 onComplete:(id)fp(null);
- (id)imageForUrl:(id)fp8 scaleToFitSize:(struct CGSize)fp12 allowClipping:(BOOL)fp20 onComplete:(id)fp(null);
- (id)imageForUrl:(id)fp8 scaleToFitWidth:(float)fp12 onComplete:(id)fp(null);
- (id)resizedImageForUrl:(id)fp8 size:(struct CGSize)fp12 onComplete:(id)fp(null);
- (id)retrieveAppleTouchSiteIconForUrl:(id)fp8 fallbackUrl:(id)fp12 onComplete:(id)fp(null);
- (id)thumbnailForUrl:(id)fp8 fallbackUrl:(id)fp12 useFaviconWhenAvailable:(BOOL)fp16 onComplete:(id)fp(null);
- (id)imgurThumbnailForUrl:(id)fp8 fallbackUrl:(id)fp12 onComplete:(id)fp(null);
- (id)quickMemeThumbnailForUrl:(id)fp8 fallbackUrl:(id)fp12 onComplete:(id)fp(null);
- (id)resizeServerThumbnailForUrl:(id)fp8 fallbackUrl:(id)fp12 onComplete:(id)fp(null);
- (id)init;
- (void)dealloc;
- (BOOL)hitProtectionAllowRequestForKey:(id)fp8;
- (void)hitProtectionRequestFailedForKey:(id)fp8;
- (void)hitProtectionRequestCompletedForKey:(id)fp8;
- (void)hitProtectionRequestBeganForKey:(id)fp8;
- (void)setStatus:(int)fp8 forKey:(id)fp12;
- (int)statusForKey:(id)fp8;
- (void)memoryWarningReceived;
- (void)initialiseHitProtection;
- (void)setRequestCache:(id)fp8;
- (id)requestCache;

@end

