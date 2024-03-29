/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ABTableView, NSMutableArray, NSString, NSUserDefaults, NavigationManager, RedditAPI;

@interface OptionTableViewController : _AVAudioSessionCategoryPlayback <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *options;
    NSMutableArray *optionHeaderViews;
    NSUserDefaults *prefs;
    RedditAPI *redAPI;
    NavigationManager *nc;
    BOOL isScrolling;
    NSMutableArray *action_sheet_labels;
    NSMutableArray *action_sheet_values;
    NSString *action_sheet_pref_key;
    int action_sheet_type_id;
    BOOL forceDefaultNavigationBarStyle;
    id _doAfterChangingSetting;
    ABTableView *_tableView;
}

- (void)setTableView:(id)fp8;
- (id)tableView;
- (void)setDoAfterChangingSetting:(id)fp(null);
- (id)doAfterChangingSetting;
- (void)setIsScrolling:(BOOL)fp8;
- (BOOL)isScrolling;
- (void).cxx_destruct;
- (id)parentViewController;
- (void)dealloc;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)presentOptionsWithTitle:(id)fp8 withLabels:(id)fp12 withValues:(id)fp16 forKey:(id)fp20 ofType:(int)fp24;
- (void)presentOptionsWithTitle:(id)fp8 withLabels:(id)fp12 withValues:(id)fp16 forKey:(id)fp20 ofType:(int)fp24 afterChangingSetting:(id)fp(null);
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewWillBeginDecelerating:(id)fp8;
- (void)didChoosePrimaryOptionAtIndexPath:(id)fp8;
- (void)didChooseSecondaryOptionAtIndexPath:(id)fp8;
- (void)didHoldDownCellAtIndexPath:(id)fp8;
- (id)createLabelForIndexPath:(id)fp8;
- (int)calculateNumberOfRowsInSection:(int)fp8;
- (void)createInteractionForIndexPath:(id)fp8 forOption:(id)fp12;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)nightModeSwitch;
- (void)viewDidAppear:(BOOL)fp8;
- (void)longPress:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)blankCell;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (void)refreshTable;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)tableView:(id)fp8 shouldIndentWhileEditingRowAtIndexPath:(id)fp12;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)generateOptions;
- (void)releaseOptions;

@end

