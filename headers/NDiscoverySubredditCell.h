/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSubredditCell.h"

@class JMViewOverlay;

@interface NDiscoverySubredditCell : NSubredditCell
{
    JMViewOverlay *_subtitleOverlay;
}

+ (float)heightForNode:(id)fp8 tableView:(id)fp12;
- (void)setSubtitleOverlay:(id)fp8;
- (id)subtitleOverlay;
- (void).cxx_destruct;
- (void)layoutCellOverlays;
- (void)createSubviews;

@end

