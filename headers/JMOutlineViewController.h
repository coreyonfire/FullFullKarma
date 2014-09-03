/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "JMOutlineNodeProtocol-Protocol.h"
#import "JMRefreshHeaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JMOutlineTableView, JMRefreshHeaderView, NSMutableArray, UIView;

@interface JMOutlineViewController : _AVAudioSessionCategoryPlayback <UITableViewDelegate, UITableViewDataSource, JMRefreshHeaderDelegate, JMOutlineNodeProtocol>
{
    BOOL showFloatingHeader_;
    BOOL _isReloadingNodes;
    NSMutableArray *nodes_;
    JMOutlineTableView *tableView_;
    UIView *floatingHeader_;
    JMRefreshHeaderView *pullRefreshView_;
    id <UIScrollViewDelegate> _scrollObserver;
    unsigned int _selectedRow;
    unsigned int _topVisibleRow;
    double lastFloatRefresh_;
    struct CGPoint savedScrollPosition_;
}

- (void)setIsReloadingNodes:(BOOL)fp8;
- (BOOL)isReloadingNodes;
- (void)setTopVisibleRow:(unsigned int)fp8;
- (unsigned int)topVisibleRow;
- (void)setSelectedRow:(unsigned int)fp8;
- (unsigned int)selectedRow;
- (void)setScrollObserver:(id)fp8;
- (id)scrollObserver;
- (void)setSavedScrollPosition:(struct CGPoint)fp8;
- (struct CGPoint)savedScrollPosition;
- (void)setPullRefreshView:(id)fp8;
- (id)pullRefreshView;
- (void)setLastFloatRefresh:(double)fp8;
- (double)lastFloatRefresh;
- (void)setFloatingHeader:(id)fp8;
- (id)floatingHeader;
- (void)setTableView:(id)fp8;
- (id)tableView;
- (void)setShowFloatingHeader:(BOOL)fp8;
- (BOOL)showFloatingHeader;
- (void)setNodes:(id)fp8;
- (id)nodes;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewDidScroll:(id)fp8;
- (void)updateFloatingHeader;
- (void)updateFloatingCell;
- (int)numberOfSectionsInTableView:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)toggleNode:(id)fp8;
- (int)nodeCount;
- (void)scrollNodeRectToVisible:(id)fp8;
- (struct CGRect)rectForNode:(id)fp8;
- (void)scrollToNode:(id)fp8;
- (void)reloadVisibleRows;
- (void)reloadRowsForNodes:(id)fp8;
- (void)reloadRowForNode:(id)fp8;
- (void)reload;
- (id)cellForNode:(id)fp8;
- (void)deselectNodes;
- (void)selectNode:(id)fp8;
- (id)selectedNode;
- (BOOL)isNodeSelected:(id)fp8;
- (unsigned int)rowForNode:(id)fp8;
- (id)nodeForRow:(unsigned int)fp8;
- (void)removeAllNodes;
- (void)insertNode:(id)fp8 afterNode:(id)fp12;
- (void)insertNode:(id)fp8 atRowIndex:(unsigned int)fp12;
- (void)removeNode:(id)fp8;
- (void)addNodes:(id)fp8;
- (void)addNode:(id)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)loadView;
- (void)createSubviews;
- (void)testFinished;
- (void)releaseViews;
- (id)init;
- (void)dealloc;
- (void)clearHeightCache;
- (void)clearCachedHeightForNode:(id)fp8;
- (void)setCachedHeight:(float)fp8 forNode:(id)fp12;
- (float)cachedHeightForNode:(id)fp8;
- (id)heightCacheKeyForNode:(id)fp8;
- (void)initialiseHeightCache;
- (void)setHeightCache:(id)fp8;
- (id)heightCache;
- (void)keyboardWillBeHidden:(id)fp8;
- (void)keyboardWasShown:(id)fp8;
- (void)disableKeyboardReaction;
- (void)enableKeyboardReaction;
- (void)setCurrentlyHandlingKeyboardEvent:(BOOL)fp8;
- (BOOL)currentlyHandlingKeyboardEvent;
- (void)clearRenderForNode:(id)fp8;
- (id)prerenderedCellImageForNode:(id)fp8;
- (void)prerenderNode:(id)fp8;
- (id)renderCacheKeyForNode:(id)fp8;
- (void)initialisePrerenderCache;
- (void)setRenderCache:(id)fp8;
- (id)renderCache;

@end
