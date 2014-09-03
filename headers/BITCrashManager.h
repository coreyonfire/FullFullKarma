/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BITHockeyBaseManager.h"

@class NSFileManager, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface BITCrashManager : BITHockeyBaseManager
{
    NSMutableDictionary *_approvedCrashReports;
    NSMutableArray *_crashFiles;
    NSString *_crashesDir;
    NSString *_settingsFile;
    NSString *_analyzerInProgressFile;
    NSFileManager *_fileManager;
    BOOL _crashIdenticalCurrentVersion;
    NSMutableData *_responseData;
    int _statusCode;
    NSURLConnection *_urlConnection;
    BOOL _sendingInProgress;
    BOOL _isSetup;
    void *_exceptionHandler;
    BOOL _showAlwaysButton;
    BOOL _didCrashInLastSession;
    id _delegate;
    int _crashManagerStatus;
    double _timeintervalCrashInLastSessionOccured;
}

- (void)setFileManager:(id)fp8;
- (id)fileManager;
- (double)timeintervalCrashInLastSessionOccured;
- (BOOL)didCrashInLastSession;
- (void)setShowAlwaysButton:(BOOL)fp8;
- (BOOL)shouldShowAlwaysButton;
- (int)crashManagerStatus;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)postXML:(id)fp8;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)performSendingCrashReports;
- (void)sendCrashReports;
- (void)startManager;
- (void)invokeDelayedProcessing;
- (BOOL)hasPendingCrashReport;
- (BOOL)hasNonApprovedCrashReports;
- (void)handleCrashReport;
- (id)userEmailForCrashReport;
- (id)userNameForCrashReport;
- (id)userIDForCrashReport;
- (id)getDevicePlatform;
- (id)extractAppUUIDs:(id)fp8;
- (void)cleanCrashReports;
- (void)loadSettings;
- (void)saveSettings;
- (void)setCrashManagerStatus:(int)fp8;
- (void)dealloc;
- (id)init;

@end
