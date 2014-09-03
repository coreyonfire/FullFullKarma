/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BITHockeyBaseManager.h"

#import "UIAlertViewDelegate-Protocol.h"

@class BITFeedbackComposeViewController, BITFeedbackListViewController, NSDate, NSFileManager, NSMutableArray, NSNumber, NSString;

@interface BITFeedbackManager : BITHockeyBaseManager <UIAlertViewDelegate>
{
    NSFileManager *_fileManager;
    NSString *_feedbackDir;
    NSString *_settingsFile;
    BOOL _incomingMessagesAlertShowing;
    BOOL _didSetupDidBecomeActiveNotifications;
    BOOL _networkRequestInProgress;
    BOOL _showAlertOnIncomingMessages;
    BOOL _disableFeedbackManager;
    BOOL _didAskUserData;
    int _requireUserName;
    int _requireUserEmail;
    NSMutableArray *_feedbackList;
    NSString *_token;
    BITFeedbackListViewController *_currentFeedbackListViewController;
    BITFeedbackComposeViewController *_currentFeedbackComposeViewController;
    NSDate *_lastCheck;
    NSNumber *_lastMessageID;
    NSString *_userID;
    NSString *_userName;
    NSString *_userEmail;
}

- (void)setUserEmail:(id)fp8;
- (id)userEmail;
- (void)setUserName:(id)fp8;
- (id)userName;
- (void)setUserID:(id)fp8;
- (id)userID;
- (void)setLastMessageID:(id)fp8;
- (id)lastMessageID;
- (void)setLastCheck:(id)fp8;
- (id)lastCheck;
- (void)setDidAskUserData:(BOOL)fp8;
- (BOOL)didAskUserData;
- (void)setCurrentFeedbackComposeViewController:(id)fp8;
- (id)currentFeedbackComposeViewController;
- (void)setCurrentFeedbackListViewController:(id)fp8;
- (id)currentFeedbackListViewController;
- (void)setDisableFeedbackManager:(BOOL)fp8;
- (BOOL)isFeedbackManagerDisabled;
- (void)setToken:(id)fp8;
- (id)token;
- (void)setFeedbackList:(id)fp8;
- (id)feedbackList;
- (void)setShowAlertOnIncomingMessages:(BOOL)fp8;
- (BOOL)showAlertOnIncomingMessages;
- (void)setRequireUserEmail:(int)fp8;
- (int)requireUserEmail;
- (void)setRequireUserName:(int)fp8;
- (int)requireUserName;
- (void).cxx_destruct;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)submitMessageWithText:(id)fp8;
- (void)submitPendingMessages;
- (void)fetchMessageUpdates;
- (void)sendNetworkRequestWithHTTPMethod:(id)fp8 withMessage:(id)fp12 completionHandler:(id)fp(null);
- (void)updateMessageListFromResponse:(id)fp8;
- (BOOL)isManualUserDataAvailable;
- (BOOL)requireManualUserDataMissing;
- (BOOL)askManualUserDataAvailable;
- (void)deleteAllMessages;
- (BOOL)deleteMessageAtIndex:(unsigned int)fp8;
- (void)updateLastMessageID;
- (void)markSendInProgressMessagesAsInConflict;
- (void)markSendInProgressMessagesAsPending;
- (id)lastMessageHavingID;
- (id)messagesWithStatus:(int)fp8;
- (id)messageWithID:(id)fp8;
- (id)messageAtIndex:(unsigned int)fp8;
- (unsigned int)numberOfMessages;
- (void)sortFeedbackList;
- (void)updateDidAskUserData;
- (void)saveMessages;
- (void)loadMessages;
- (void)updateAppDefinedUserData;
- (BOOL)updateUserEmailUsingDelegate;
- (BOOL)updateUserNameUsingDelegate;
- (BOOL)updateUserIDUsingDelegate;
- (void)updateMessagesListIfRequired;
- (void)updateMessagesList;
- (void)startManager;
- (void)showFeedbackComposeView;
- (id)feedbackComposeViewController;
- (void)showFeedbackListView;
- (id)feedbackListViewController:(BOOL)fp8;
- (id)uuidAsLowerCaseAndShortened;
- (id)uuidString;
- (void)cleanupDidBecomeActiveNotifications;
- (void)setupDidBecomeActiveNotifications;
- (void)didBecomeActiveActions;
- (void)dealloc;
- (id)init;

@end

