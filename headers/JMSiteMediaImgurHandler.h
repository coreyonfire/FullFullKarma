/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMSiteMediaHandler.h"

@interface JMSiteMediaImgurHandler : JMSiteMediaHandler
{
}

+ (BOOL)hasThumbnailImageForURL:(id)fp8;
+ (BOOL)hasDeeplinkedImageForURL:(id)fp8;
+ (void)deeplinkedImageURLForLinkURL:(id)fp8 onComplete:(id)fp(null) onFailure:(void)fp12;
+ (void)thumbnailURLForLinkURL:(id)fp8 onComplete:(id)fp(null) onFailure:(void)fp12;
+ (id)hosts;

@end

