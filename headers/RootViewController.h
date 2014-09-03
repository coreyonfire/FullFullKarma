/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EGORefreshTableHeaderView;

@interface RootViewController : _AVAudioSessionCategoryPlayback <UITableViewDelegate, UITableViewDataSource>
{
    EGORefreshTableHeaderView *refreshHeaderView;
    BOOL _reloading;
}

- (void)setReloading:(BOOL)fp8;
- (BOOL)isReloading;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dataSourceDidFinishLoadingNewData;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewDidScroll:(id)fp8;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidLoad;

@end

