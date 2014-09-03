/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSDate, NSString;

@interface PLCrashReportApplicationInfo : _AVAudioSessionCategoryPlayback
{
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_applicationShortVersion;
    NSDate *_applicationStartupTimestamp;
}

- (id)applicationStartupTimestamp;
- (id)applicationShortVersion;
- (id)applicationVersion;
- (id)applicationIdentifier;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)fp8 applicationVersion:(id)fp12 applicationShortVersion:(id)fp16 applicationStartupTimestamp:(id)fp20;

@end

