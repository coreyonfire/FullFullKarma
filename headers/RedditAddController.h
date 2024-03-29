/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABOutlineViewController.h"

@class SubredditFolder;

@interface RedditAddController : ABOutlineViewController
{
    SubredditFolder *_folder;
}

+ (id)navControllerForAddingToSubredditFolder:(id)fp8;
- (void)setFolder:(id)fp8;
- (id)folder;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForViewInPopover;
- (void)generateNodes;
- (void)showDiscovery;
- (void)dismiss;
- (void)showSubredditsSelector;
- (void)finishWithSubreddit:(id)fp8;
- (void)viewDidLoad;
- (id)initWithDestinationFolder:(id)fp8;

@end

