/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class ABButton, TemplateSendModeSwitchView, UILabel;

@interface TemplateEditToolsView : _AVAudioSessionCategoryPlayback
{
    BOOL _i_layoutVertically;
    ABButton *_tokenButton;
    TemplateSendModeSwitchView *_switchView;
    UILabel *_switchLabel;
}

- (void)setI_layoutVertically:(BOOL)fp8;
- (BOOL)i_layoutVertically;
- (void)setSwitchLabel:(id)fp8;
- (id)switchLabel;
- (void)setSwitchView:(id)fp8;
- (id)switchView;
- (void)setTokenButton:(id)fp8;
- (id)tokenButton;
- (void).cxx_destruct;
- (void)setSendSwitchPreference:(int)fp8;
- (void)setShouldLayoutVertically:(BOOL)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
