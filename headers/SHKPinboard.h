/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SHKSharer.h"

@interface SHKPinboard : SHKSharer
{
}

+ (id)authorizationFormCaption;
+ (BOOL)canShareURL;
+ (id)sharerTitle;
- (void)sendFinished:(id)fp8;
- (BOOL)send;
- (id)shareFormFieldsForType:(int)fp8;
- (void)authFinished:(id)fp8;
- (void)authorizationFormValidate:(id)fp8;

@end

