/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UITextFieldDelegate-Protocol.h"

@class ABButton, JMTextField, NSString;

@interface JMTextFieldEntry : _AVAudioSessionCategoryPlayback <UITextFieldDelegate>
{
    BOOL focussed_;
    ABButton *cancelButton_;
    ABButton *doneButton_;
    JMTextField *textField_;
    id <JMTextFieldEntryDelegate> delegate_;
    NSString *placeholderText_;
}

- (void)setPlaceholderText:(id)fp8;
- (id)placeholderText;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setFocussed:(BOOL)fp8;
- (BOOL)focussed;
- (void)setTextField:(id)fp8;
- (id)textField;
- (void)setDoneButton:(id)fp8;
- (id)doneButton;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textFieldShouldEndEditing:(id)fp8;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)unfocus;
- (void)focus;
- (void)animateFocusChange;
- (void)done;
- (void)cancel;
- (void)layoutSubviews;
- (void)positionSubviews;
- (void)setAutocapitalizationType:(int)fp8;
- (void)setDefaultText:(id)fp8;
- (void)setTextFieldPlacholder:(id)fp8;
- (id)init;
- (void)dealloc;

@end

