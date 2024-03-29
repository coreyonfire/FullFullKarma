/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIAccelerometerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class ABNavigationController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSUserDefaults, Post, PostsNavigation, RedditAPI, TransparentToolbar, UIButton, UIPopoverController, UIView, UIViewController;

@interface NavigationManager : _AVAudioSessionCategoryPlayback <UINavigationControllerDelegate, UIAccelerometerDelegate, UIPopoverControllerDelegate>
{
    BOOL forcePortrait;
    BOOL shouldRefreshComments;
    BOOL shouldRefreshMessages;
    BOOL sideBarShowing;
    PostsNavigation *postsNavigation;
    ABNavigationController *settingsNavigation;
    UIViewController *iPadNav;
    NSTimer *hideQueueTimer;
    NSMutableArray *localHideQueue;
    NSMutableArray *promptQueue;
    NSTimer *promptQueueTimer;
    NSTimer *statusNotifyTimer;
    RedditAPI *redAPI;
    NSUserDefaults *prefs;
    float tiltCalibration;
    BOOL tiltCalibrationModeActive;
    UIView *proFeaturesSplash;
    BOOL isFullscreen;
    UIButton *exitFullscreenButton;
    UIButton *backFullscreenButton;
    UIButton *sidebarButton;
    NSString *subreddit;
    BOOL needToflushRowHeightCache;
    NSString *category;
    NSString *searchCategory;
    NSString *topCategory;
    NSString *subredditTitle;
    BOOL rotated_in_fullscreen;
    UIView *dimView;
    TransparentToolbar *iPadNavigationToolbar;
    NSTimer *announcementCheckTimer;
    BOOL canCheckAnnouncement;
    BOOL _requireCoreTextReinitialisation;
    BOOL _shouldSupressFullscreenBackButton;
    NSMutableDictionary *post;
    NSDictionary *replyComment;
    UIPopoverController *popoverController_;
    Post *_npost;
}

+ (void)hideHud;
+ (void)showHudWithMessage:(id)fp8;
+ (void)showRapidMomentaryHudWithMessage:(id)fp8;
+ (void)showMomentaryHudWithMessage:(id)fp8 minShowTime:(float)fp12;
+ (void)showMomentaryHudWithMessage:(id)fp8;
+ (void)showConnectionErrorHud;
+ (void)showLoadingHudInPostsNavigation;
+ (id)mainView;
+ (id)mainViewController;
+ (id)shared;
- (void)setShouldSupressFullscreenBackButton:(BOOL)fp8;
- (BOOL)shouldSupressFullscreenBackButton;
- (void)setNpost:(id)fp8;
- (id)npost;
- (void)setPopoverController:(id)fp8;
- (id)popoverController;
- (void)setCanCheckAnnouncement:(BOOL)fp8;
- (BOOL)canCheckAnnouncement;
- (void)setIPadNav:(id)fp8;
- (id)iPadNav;
- (void)setSideBarShowing:(BOOL)fp8;
- (BOOL)sideBarShowing;
- (void)setSubredditTitle:(id)fp8;
- (id)subredditTitle;
- (void)setNeedToflushRowHeightCache:(BOOL)fp8;
- (BOOL)needToflushRowHeightCache;
- (void)setLocalHideQueue:(id)fp8;
- (id)localHideQueue;
- (void)setTopCategory:(id)fp8;
- (id)topCategory;
- (void)setSearchCategory:(id)fp8;
- (id)searchCategory;
- (void)setCategory:(id)fp8;
- (id)category;
- (void)setSubreddit:(id)fp8;
- (id)subreddit;
- (void)setRotated_in_fullscreen:(BOOL)fp8;
- (BOOL)rotated_in_fullscreen;
- (void)setIsFullscreen:(BOOL)fp8;
- (BOOL)isFullscreen;
- (void)setReplyComment:(id)fp8;
- (id)replyComment;
- (void)setTiltCalibration:(float)fp8;
- (float)tiltCalibration;
- (void)setSettingsNavigation:(id)fp8;
- (id)settingsNavigation;
- (void)setPostsNavigation:(id)fp8;
- (id)postsNavigation;
- (void)setShouldRefreshMessages:(BOOL)fp8;
- (BOOL)shouldRefreshMessages;
- (void)setShouldRefreshComments:(BOOL)fp8;
- (BOOL)shouldRefreshComments;
- (void)setForcePortrait:(BOOL)fp8;
- (BOOL)forcePortrait;
- (void)setPost:(id)fp8;
- (id)post;
- (void).cxx_destruct;
- (void)showFullScreenViewerForGalleryItems:(id)fp8 startingAtIndex:(unsigned int)fp12;
- (void)showEULA;
- (void)openRedditThreadUrl:(id)fp8;
- (void)showModerationTemplateManagement;
- (void)showModerationNotifyScreenForPost:(id)fp8 onModerationMessageSentResponse:(id)fp(null);
- (void)showFullScreenViewerForImage:(id)fp8;
- (void)showStatusBarNoAnimation;
- (void)showStatusBar;
- (void)hideStatusBarNoAnimation;
- (void)hideStatusBar;
- (void)showPostsForSubreddit:(id)fp8 title:(id)fp12 animated:(BOOL)fp16;
- (id)prepareSubredditPathFromUrl:(id)fp8;
- (void)showPostsForSubreddit:(id)fp8 title:(id)fp12 animated:(BOOL)fp16 afterPoppingToController:(id)fp20;
- (void)showCreatePostScreen:(id)fp8;
- (void)showSendPMScreenToUser:(id)fp8;
- (BOOL)shouldRedrawCoreText;
- (void)setCoreTextRedraw;
- (void)gotoUpgradeSection:(id)fp8;
- (void)showSettings:(id)fp8;
- (void)showUserDetails:(id)fp8;
- (void)jumpToMessages:(id)fp8;
- (void)dismissModalView:(id)fp8;
- (void)dimToAlpha:(float)fp8;
- (void)removeDim;
- (void)restoreNState;
- (void)saveNState;
- (void)showScreenLock;
- (void)toggleFullscreen;
- (void)enterFullscreenMode:(id)fp8;
- (void)enterFullscreenAdjustsTopScrollView:(BOOL)fp8;
- (void)exitFullscreenAnimated:(BOOL)fp8;
- (void)exitFullscreenMode:(id)fp8;
- (void)removeFullscreenControls;
- (void)goBackInFullscreen:(id)fp8;
- (void)drawFullScreenBackButton;
- (void)accelerometer:(id)fp8 didAccelerate:(id)fp12;
- (void)activateTiltCalibrationMode;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)browseToPostThreadFromMessage:(id)fp8;
- (void)browseToLinkFromNPost:(id)fp8 fromController:(id)fp12;
- (void)loadCommentsForNPost:(id)fp8 contextId:(id)fp12 fromController:(id)fp16;
- (void)browseToURLFromMessageForIPAD:(id)fp8;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)navigationController:(id)fp8 didShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)showNavigationStack;
- (void)drawBottomToolbarItems;
- (void)drawIphoneBottomToolbarItems;
- (void)drawIphoneVotingItems;
- (void)refreshUserSubreddits;
- (void)dismissIPADPopover;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)apiReplyResponse:(id)fp8;
- (void)receivedMemoryWarning;
- (void)purgeMemory;
- (void)replyToItem:(id)fp8;
- (void)clearAndRefreshPosts;
- (void)downvoteCurrentPost:(id)fp8;
- (void)upvoteCurrentPost:(id)fp8;
- (void)switchToArticle:(id)fp8;
- (void)switchToComments:(id)fp8;
- (void)switchToCommentsOrLinkForButtonWithTitle:(id)fp8;
- (void)downvoteItem:(id)fp8;
- (void)upvoteItem:(id)fp8;
- (void)setupAccelerometer;
- (void)addPrompt:(id)fp8;
- (void)removePrompt:(id)fp8;
- (void)processPromptQueue:(id)fp8;
- (void)hidePromptNotification;
- (void)showPromptNotification:(id)fp8;
- (void)allowAnnouncementCheck:(id)fp8;
- (void)initialiseTimers;
- (void)loadNibs;
- (void)processHideQueue:(id)fp8;
- (void)navigationBarTripleTapped:(id)fp8;
- (void)dealloc;
- (id)init;

@end

