/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "OverlayViewContainer.h"

@class JMViewOverlay, NSString, Subreddit;

@interface PostsNavigationTitleView : OverlayViewContainer
{
    JMViewOverlay *_subredditIconOverlay;
    JMViewOverlay *_titleOverlay;
    Subreddit *_subreddit;
    NSString *_title;
}

- (void)setTitle:(id)fp8;
- (id)title;
- (void)setSubreddit:(id)fp8;
- (id)subreddit;
- (void)setTitleOverlay:(id)fp8;
- (id)titleOverlay;
- (void)setSubredditIconOverlay:(id)fp8;
- (id)subredditIconOverlay;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8 forSubreddit:(id)fp24;

@end

