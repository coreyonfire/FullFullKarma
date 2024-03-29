/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMSharedNotebookRecipientSettings, NSString;

@interface EDAMSharedNotebook : _AVAudioSessionCategoryPlayback <NSCoding>
{
    long long __id;
    int __userId;
    NSString *__notebookGuid;
    NSString *__email;
    BOOL __notebookModifiable;
    BOOL __requireLogin;
    long long __serviceCreated;
    long long __serviceUpdated;
    NSString *__shareKey;
    NSString *__username;
    int __privilege;
    BOOL __allowPreview;
    EDAMSharedNotebookRecipientSettings *__recipientSettings;
    BOOL __id_isset;
    BOOL __userId_isset;
    BOOL __notebookGuid_isset;
    BOOL __email_isset;
    BOOL __notebookModifiable_isset;
    BOOL __requireLogin_isset;
    BOOL __serviceCreated_isset;
    BOOL __serviceUpdated_isset;
    BOOL __shareKey_isset;
    BOOL __username_isset;
    BOOL __privilege_isset;
    BOOL __allowPreview_isset;
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
- (void)unsetAllowPreview;
- (BOOL)allowPreviewIsSet;
- (void)setAllowPreview:(BOOL)fp8;
- (BOOL)allowPreview;
- (void)unsetPrivilege;
- (BOOL)privilegeIsSet;
- (void)setPrivilege:(int)fp8;
- (int)privilege;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
- (void)setUsername:(id)fp8;
- (id)username;
- (void)unsetShareKey;
- (BOOL)shareKeyIsSet;
- (void)setShareKey:(id)fp8;
- (id)shareKey;
- (void)unsetServiceUpdated;
- (BOOL)serviceUpdatedIsSet;
- (void)setServiceUpdated:(long long)fp8;
- (long long)serviceUpdated;
- (void)unsetServiceCreated;
- (BOOL)serviceCreatedIsSet;
- (void)setServiceCreated:(long long)fp8;
- (long long)serviceCreated;
- (void)unsetRequireLogin;
- (BOOL)requireLoginIsSet;
- (void)setRequireLogin:(BOOL)fp8;
- (BOOL)requireLogin;
- (void)unsetNotebookModifiable;
- (BOOL)notebookModifiableIsSet;
- (void)setNotebookModifiable:(BOOL)fp8;
- (BOOL)notebookModifiable;
- (void)unsetEmail;
- (BOOL)emailIsSet;
- (void)setEmail:(id)fp8;
- (id)email;
- (void)unsetNotebookGuid;
- (BOOL)notebookGuidIsSet;
- (void)setNotebookGuid:(id)fp8;
- (id)notebookGuid;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
- (void)setUserId:(int)fp8;
- (int)userId;
- (void)unsetId;
- (BOOL)idIsSet;
- (void)setId:(long long)fp8;
- (long long)id;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithId:(long long)fp8 userId:(int)fp16 notebookGuid:(id)fp20 email:(id)fp24 notebookModifiable:(BOOL)fp28 requireLogin:(BOOL)fp32 serviceCreated:(long long)fp36 serviceUpdated:(long long)fp44 shareKey:(id)fp52 username:(id)fp56 privilege:(int)fp60 allowPreview:(BOOL)fp64 recipientSettings:(id)fp68;
- (id)init;

@end

