/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABTableCell.h"

@class MessageCellView;

@interface MessageCell : ABTableCell
{
    MessageCellView *messageCellView;
}

- (void)setMessageCellView:(id)fp8;
- (id)messageCellView;
- (void).cxx_destruct;
- (void)refreshBackground;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setMessagesController:(id)fp8;
- (void)setMessage:(id)fp8;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
