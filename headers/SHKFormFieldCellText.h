/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SHKFormFieldCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class UITextField;

@interface SHKFormFieldCellText : SHKFormFieldCell <UITextFieldDelegate>
{
    UITextField *textField;
}

- (void)setTextField:(id)fp8;
- (id)textField;
- (void)textFieldDidBeginEditing:(id)fp8;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textFieldShouldEndEditing:(id)fp8;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setupWithSettings:(id)fp8;
- (void)setupLayout;
- (void)dealloc;

@end

