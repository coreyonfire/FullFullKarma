/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSString;

@interface PLCrashReporter : _AVAudioSessionCategoryPlayback
{
    BOOL _enabled;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_applicationShortVersion;
    long _applicationStartupTimestamp;
    NSString *_crashReportGUID;
    NSString *_crashReportDirectory;
}

+ (id)sharedReporter;
- (void)setCrashCallbacks:(struct PLCrashReporterCallbacks *)fp8;
- (BOOL)enableCrashReporterAndReturnError:(id *)fp8;
- (BOOL)enableCrashReporter;
- (BOOL)purgePendingCrashReportAndReturnError:(id *)fp8;
- (BOOL)purgePendingCrashReport;
- (id)loadPendingCrashReportDataAndReturnError:(id *)fp8;
- (id)loadPendingCrashReportData;
- (BOOL)hasPendingCrashReport;
- (id)crashReportPath;
- (id)queuedCrashReportDirectory;
- (id)crashReportDirectory;
- (BOOL)populateCrashReportDirectoryAndReturnError:(id *)fp8;
- (void)dealloc;
- (id)initWithBundle:(id)fp8;
- (id)initWithApplicationIdentifier:(id)fp8 appVersion:(id)fp12 appShortVersion:(id)fp16;

@end
