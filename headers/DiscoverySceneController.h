/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABOutlineViewController.h"

@class AFJSONRequestOperation, DiscoveryCategory, NSString, UIActivityIndicatorView;

@interface DiscoverySceneController : ABOutlineViewController
{
    UIActivityIndicatorView *_loadingIndicator;
    DiscoveryCategory *_category;
    AFJSONRequestOperation *_loadOperation;
    NSString *_ident;
    int _recommendationState;
}

- (void)setRecommendationState:(int)fp8;
- (int)recommendationState;
- (void)setIdent:(id)fp8;
- (id)ident;
- (void)setLoadOperation:(id)fp8;
- (id)loadOperation;
- (void)setCategory:(id)fp8;
- (id)category;
- (void)setLoadingIndicator:(id)fp8;
- (id)loadingIndicator;
- (void).cxx_destruct;
- (void)generateNodes;
- (void)addAlienBlueSection;
- (void)addRecommendationNode;
- (void)addSubredditNodes;
- (void)addSubredditNodeForSubreddit:(id)fp8;
- (void)addSubcategoryNodes;
- (void)showSidebarInfoForSubreddit:(id)fp8;
- (void)attemptToAddAutomatically:(id)fp8;
- (void)showAddSubredditForNode:(id)fp8;
- (void)showSubreddit:(id)fp8;
- (void)showCategory:(id)fp8;
- (BOOL)isHomeScene;
- (void)animateFolderChanges;
- (void)fetchScene;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)respondToStyleChange;
- (void)loadView;
- (id)initWithTitle:(id)fp8 sceneIdent:(id)fp12;
- (void)dealloc;

@end
