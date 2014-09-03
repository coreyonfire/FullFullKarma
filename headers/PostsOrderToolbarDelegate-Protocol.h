/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PostsOrderToolbarDelegate <NSObject>
- (void)postsOrderToolbar:(id)fp8 didChangeScopeRestriction:(BOOL)fp12;
- (BOOL)postsOrderToolbarShouldShowModerationIcon:(id)fp8;
- (BOOL)postsOrderToolbarShouldShowScopeIcon:(id)fp8;
- (void)postsOrderToolbarDidTapModerationButton:(id)fp8;
- (void)postsOrderToolbar:(id)fp8 didEnterSearchQuery:(id)fp12;
- (void)postsOrderToolbar:(id)fp8 didTapOrderButtonWithSearchActive:(BOOL)fp12;
- (void)postsOrderToolbar:(id)fp8 didChangeSearchActive:(BOOL)fp12 animated:(BOOL)fp16;
- (void)postsOrderToolbar:(id)fp8 willChangeSearchActive:(BOOL)fp12 animated:(BOOL)fp16;
@end
