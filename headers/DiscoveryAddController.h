/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABOutlineViewController.h"

@class NSMutableArray, Subreddit, UIBarButtonItem;

@interface DiscoveryAddController : ABOutlineViewController
{
    BOOL _excludeDontShowOption;
    BOOL _excludeRemoveOption;
    BOOL _optionShowInFrontPage;
    BOOL _optionRememberSettings;
    Subreddit *_subreddit;
    NSMutableArray *_selectedFolderIdents;
    id _onComplete;
    UIBarButtonItem *_addButton;
}

+ (void)processAutomaticAddingOfSubreddit:(id)fp8 onComplete:(id)fp(null);
+ (void)resetDontAskOption;
+ (BOOL)shouldAddWithoutView;
+ (id)navControllerForAddingSubreddit:(id)fp8 onComplete:(id)fp(null);
+ (id)navControllerForAddingSubreddit:(id)fp8 onComplete:(id)fp(null) excludeDontShowOption:(void)fp12 excludeRemoveOption:(BOOL)fp16;
- (void)setOptionRememberSettings:(BOOL)fp8;
- (BOOL)optionRememberSettings;
- (void)setOptionShowInFrontPage:(BOOL)fp8;
- (BOOL)optionShowInFrontPage;
- (void)setAddButton:(id)fp8;
- (id)addButton;
- (void)setOnComplete:(id)fp(null);
- (id)onComplete;
- (void)setSelectedFolderIdents:(id)fp8;
- (id)selectedFolderIdents;
- (void)setExcludeRemoveOption:(BOOL)fp8;
- (BOOL)excludeRemoveOption;
- (void)setExcludeDontShowOption:(BOOL)fp8;
- (BOOL)excludeDontShowOption;
- (void)setSubreddit:(id)fp8;
- (id)subreddit;
- (void).cxx_destruct;
- (void)animateNodeChanges;
- (void)generateNodes;
- (void)addRemoveAllSection;
- (void)saveSubredditFolderAssociations;
- (BOOL)isCasualFolderSelected;
- (BOOL)isSubscribedFolderSelected;
- (void)loadDefaults;
- (void)trimOutdatedFolders;
- (void)saveDefaults;
- (void)toggleRememberSettingsOption;
- (void)toggleShowInFrontPageOption;
- (BOOL)shouldShowFrontPageOption;
- (unsigned int)numFoldersSelected;
- (void)toggleSelectionForFolder:(id)fp8;
- (void)deselectFolder:(id)fp8;
- (void)selectFolder:(id)fp8;
- (BOOL)isFolderSelected:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)addPressed;
- (void)dismissAddController;
- (void)manageGroupsPressed;
- (void)dismissGroupManagement;
- (id)initWithSubreddit:(id)fp8 onComplete:(id)fp(null);

@end

