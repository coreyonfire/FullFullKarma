/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SHKSharer.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@interface SHKMail : SHKSharer <MFMailComposeViewControllerDelegate>
{
}

+ (BOOL)canShare;
+ (BOOL)requiresAuthentication;
+ (BOOL)shareRequiresInternetConnection;
+ (BOOL)canShareFile:(id)fp8;
+ (BOOL)canShareVideo;
+ (BOOL)canShareImage;
+ (BOOL)canShareURL;
+ (BOOL)canShareText;
+ (id)sharerTitle;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (BOOL)sendMail;
- (BOOL)send;
- (BOOL)shouldAutoShare;

@end

