/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AlienBlueAppDelegate, NSMutableArray, NSString, NSUserDefaults, NavigationManager, RedditAPI, UIActionSheet, UIImagePickerController, UIImageView, UILabel, UIPopoverController, UITextView, UIView, UIViewController;

@interface CommentEntryCoordinator : _AVAudioSessionCategoryPlayback <UITextViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSUserDefaults *prefs;
    NavigationManager *nc;
    RedditAPI *redAPI;
    AlienBlueAppDelegate *appDelegate;
    UIViewController *callbackViewController_;
    UIView *attachToView_;
    NSMutableArray *parentParagraphs_;
    NSString *parentComment_;
    NSString *parentCommentUsername_;
    NSString *myComment_;
    int responseID_;
    BOOL isEditing_;
    BOOL isForMessage_;
    UIImagePickerController *imagePickerController_;
    UITextView *cTextView_;
    UITextView *parentCommentTextView_;
    UIImageView *chosenPhotoView_;
    UILabel *parentCommentUsernameLabel_;
    UILabel *myUsernameLabel_;
    UILabel *respondingLabel_;
    UILabel *editingLabel_;
    UIPopoverController *popover_;
    UIActionSheet *mainOptionsPopupQuery_;
    UIViewController *commentEntryViewController_;
}

- (void)setCommentEntryViewController:(id)fp8;
- (id)commentEntryViewController;
- (void)setEditingLabel:(id)fp8;
- (id)editingLabel;
- (void)setRespondingLabel:(id)fp8;
- (id)respondingLabel;
- (void)setMyUsernameLabel:(id)fp8;
- (id)myUsernameLabel;
- (void)setCallbackViewController:(id)fp8;
- (id)callbackViewController;
- (void)setParentCommentUsernameLabel:(id)fp8;
- (id)parentCommentUsernameLabel;
- (void)setResponseID:(int)fp8;
- (int)responseID;
- (void)setIsForMessage:(BOOL)fp8;
- (BOOL)isForMessage;
- (void)setIsEditing:(BOOL)fp8;
- (BOOL)isEditing;
- (void)setMyComment:(id)fp8;
- (id)myComment;
- (void)setParentCommentUsername:(id)fp8;
- (id)parentCommentUsername;
- (void)setParentComment:(id)fp8;
- (id)parentComment;
- (void)setParentCommentTextView:(id)fp8;
- (id)parentCommentTextView;
- (void)setCTextView:(id)fp8;
- (id)cTextView;
- (void).cxx_destruct;
- (void)switchAccountResponse:(id)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)submitCommentToController:(id)fp8;
- (void)saveComment;
- (void)loadComment;
- (void)showAddPhotoActionSheet;
- (void)showDiscardActionSheet;
- (void)showSwitchAccountAutoBackActionSheet;
- (void)showSwitchAccountActionSheet;
- (void)showQuoteActionSheet;
- (void)showMainOptionsActionSheet:(id)fp8;
- (void)imagePickerControllerDidCancel:(id)fp8;
- (void)imagePickerController:(id)fp8 didFinishPickingMediaWithInfo:(id)fp12;
- (void)imageUploadResponse:(id)fp8;
- (void)showImagePicker;
- (void)showCameraPicker;
- (void)closeCommentView;
- (void)cancelComment:(id)fp8;
- (void)initValues;
- (id)init;
- (void)dealloc;

@end
