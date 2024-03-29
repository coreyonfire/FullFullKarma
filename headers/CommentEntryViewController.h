/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "CommentEntryViewDelegate-Protocol.h"

@class CommentEntryCoordinator, CommentEntryView, NSMutableDictionary, NSObject<CommentEntryDelegate>;

@interface CommentEntryViewController : _AVAudioSessionCategoryPlayback <CommentEntryViewDelegate>
{
    BOOL editingComment_;
    BOOL forMessage_;
    NSObject<CommentEntryDelegate> *delegate_;
    CommentEntryView *commentEntryView_;
    CommentEntryCoordinator *coordinator_;
    NSMutableDictionary *comment_;
}

+ (id)viewControllerWithNavigationForDelegate:(id)fp8 withComment:(id)fp12 editing:(BOOL)fp16 message:(BOOL)fp20;
+ (id)viewControllerForDelegate:(id)fp8 withComment:(id)fp12 editing:(BOOL)fp16 message:(BOOL)fp20;
- (void)setForMessage:(BOOL)fp8;
- (BOOL)forMessage;
- (void)setEditingComment:(BOOL)fp8;
- (BOOL)editingComment;
- (void)setComment:(id)fp8;
- (id)comment;
- (void)setCoordinator:(id)fp8;
- (id)coordinator;
- (void)setCommentEntryView:(id)fp8;
- (id)commentEntryView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (id)commentCoordinator;
- (void)commentEntered:(id)fp8;
- (void)commentExited:(id)fp8;
- (void)showAddImagePopup;
- (void)showPopup;
- (BOOL)isSmallWindow;
- (id)assetFolder;
- (void)exitCommentEntry;
- (void)setupCoordinator;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (void)dealloc;

@end

