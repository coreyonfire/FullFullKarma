/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SHKSharerDelegate <NSObject>
- (void)sharerShowOtherAuthorizationErrorAlert:(id)fp8;
- (void)sharerShowBadCredentialsAlert:(id)fp8;
- (void)sharerCancelledSending:(id)fp8;
- (void)sharer:(id)fp8 failedWithError:(id)fp12 shouldRelogin:(BOOL)fp16;
- (void)sharerFinishedSending:(id)fp8;
- (void)sharerStartedSending:(id)fp8;
@end

