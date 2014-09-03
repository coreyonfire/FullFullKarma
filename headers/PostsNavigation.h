/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMSlideableNavigationController.h"

@class NSUserDefaults, RedditAPI;

@interface PostsNavigation : JMSlideableNavigationController
{
    NSUserDefaults *prefs;
    RedditAPI *redAPI;
}

+ (id)postsNavigationWithRootControllerOrNil:(id)fp8;
- (void).cxx_destruct;
- (void)didReleaseBeyondRightBoundaryTrigger;
- (void)animatorView:(id)fp8 decorateRightUnderlay:(id)fp12 forBoundaryOffset:(float)fp16;
- (void)respondToStyleChangeNotification;
- (void)pushViewController:(id)fp8 animated:(BOOL)fp12;
- (void)setViewControllers:(id)fp8 animated:(BOOL)fp12;
- (void)replaceNavigationItemWithCustomBackButton:(id)fp8;
- (void)customBackTapped;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)secondLastController;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)fp8 toolbarClass:(Class)fp12;
- (void)dealloc;

@end

