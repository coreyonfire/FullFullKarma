/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "SHKFormFieldCellDelegate-Protocol.h"
#import "SHKFormOptionControllerClient-Protocol.h"

@class NSMutableArray, UITextField;

@interface SHKFormController : _AVAudioSessionCategoryPlayback <SHKFormFieldCellDelegate, SHKFormOptionControllerClient>
{
    BOOL autoSelect;
    id delegate;
    SEL validateSelector;
    SEL saveSelector;
    SEL cancelSelector;
    NSMutableArray *sections;
    UITextField *activeField;
}

- (void)setAutoSelect:(BOOL)fp8;
- (BOOL)autoSelect;
- (void)setActiveField:(id)fp8;
- (id)activeField;
- (void)setSections:(id)fp8;
- (id)sections;
- (void)setCancelSelector:(SEL)fp8;
- (SEL)cancelSelector;
- (void)setSaveSelector:(SEL)fp8;
- (SEL)saveSelector;
- (void)setValidateSelector:(SEL)fp8;
- (SEL)validateSelector;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)formValuesForSection:(int)fp8;
- (id)formValues;
- (void)saveForm;
- (void)validateForm;
- (void)cancel;
- (void)close;
- (void)SHKFormOptionControllerDidFinish:(id)fp8;
- (void)setActiveTextField:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (id)rowSettingsForIndexPath:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)fp8;
- (void)addSection:(id)fp8 header:(id)fp12 footer:(id)fp16;
- (id)initWithStyle:(int)fp8 title:(id)fp12 rightButtonTitle:(id)fp16;
- (void)dealloc;

@end

