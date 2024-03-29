/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMSharedNotebookRecipientSettings, NSString;

@interface EDAMsetSharedNotebookRecipientSettings_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    long long __sharedNotebookId;
    EDAMSharedNotebookRecipientSettings *__recipientSettings;
    BOOL __authenticationToken_isset;
    BOOL __sharedNotebookId_isset;
    BOOL __recipientSettings_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetRecipientSettings;
- (BOOL)recipientSettingsIsSet;
- (void)setRecipientSettings:(id)fp8;
- (id)recipientSettings;
- (void)unsetSharedNotebookId;
- (BOOL)sharedNotebookIdIsSet;
- (void)setSharedNotebookId:(long long)fp8;
- (long long)sharedNotebookId;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 sharedNotebookId:(long long)fp12 recipientSettings:(id)fp20;
- (id)init;

@end

