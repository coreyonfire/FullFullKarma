/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABTableCellView.h"

@class NSMutableDictionary, UIViewController;

@interface MessageCellView : ABTableCellView
{
    NSMutableDictionary *message;
    UIViewController *messagesController;
}

+ (void)initialize;
- (void)setMessagesController:(id)fp8;
- (id)messagesController;
- (id)message;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)fp8;
- (void)drawTopGradient;
- (void)drawBackground;
- (void)drawOptions;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)handleOptionsTouchesForPoint:(struct CGPoint)fp8;
- (void)setMessage:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

