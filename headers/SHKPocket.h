/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SHKSharer.h"

@interface SHKPocket : SHKSharer
{
}

+ (void)logout;
+ (BOOL)canShareURL;
+ (id)sharerTitle;
- (BOOL)send;
- (id)shareFormFieldsForType:(int)fp8;
- (void)promptAuthorization;
- (BOOL)isAuthorized;
- (id)init;

@end

