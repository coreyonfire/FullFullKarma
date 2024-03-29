/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMOutlineNode.h"

@class NSString, UIColor, UIImage;

@interface OptionNode : JMOutlineNode
{
    BOOL _disabled;
    BOOL _bold;
    BOOL _hidesDivider;
    BOOL _stickyHighlight;
    BOOL _hidesTitleShadow;
    UIImage *_icon;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_backgroundColor;
    UIImage *_secondaryIcon;
    id _secondaryAction;
    int _i_disclosureStyle;
}

+ (Class)cellClass;
- (void)setI_disclosureStyle:(int)fp8;
- (int)i_disclosureStyle;
- (void)setHidesTitleShadow:(BOOL)fp8;
- (BOOL)hidesTitleShadow;
- (void)setStickyHighlight:(BOOL)fp8;
- (BOOL)stickyHighlight;
- (void)setHidesDivider:(BOOL)fp8;
- (BOOL)hidesDivider;
- (void)setBold:(BOOL)fp8;
- (BOOL)bold;
- (void)setDisabled:(BOOL)fp8;
- (BOOL)disabled;
- (void)setSecondaryAction:(id)fp(null);
- (id)secondaryAction;
- (void)setSecondaryIcon:(id)fp8;
- (id)secondaryIcon;
- (void)setBackgroundColor:(id)fp8;
- (id)backgroundColor;
- (void)setTitleColor:(id)fp8;
- (id)titleColor;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setIcon:(id)fp8;
- (id)icon;
- (void).cxx_destruct;
- (void)setDisclosureStyle:(int)fp8;

@end

