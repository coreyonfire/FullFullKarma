/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@interface EDAMNotebookRestrictions : _AVAudioSessionCategoryPlayback <NSCoding>
{
    BOOL __noReadNotes;
    BOOL __noCreateNotes;
    BOOL __noUpdateNotes;
    BOOL __noExpungeNotes;
    BOOL __noShareNotes;
    BOOL __noEmailNotes;
    BOOL __noSendMessageToRecipients;
    BOOL __noUpdateNotebook;
    BOOL __noExpungeNotebook;
    BOOL __noSetDefaultNotebook;
    BOOL __noSetNotebookStack;
    BOOL __noPublishToPublic;
    BOOL __noPublishToBusinessLibrary;
    BOOL __noCreateTags;
    BOOL __noUpdateTags;
    BOOL __noExpungeTags;
    BOOL __noSetParentTag;
    BOOL __noCreateSharedNotebooks;
    int __updateWhichSharedNotebookRestrictions;
    int __expungeWhichSharedNotebookRestrictions;
    BOOL __noReadNotes_isset;
    BOOL __noCreateNotes_isset;
    BOOL __noUpdateNotes_isset;
    BOOL __noExpungeNotes_isset;
    BOOL __noShareNotes_isset;
    BOOL __noEmailNotes_isset;
    BOOL __noSendMessageToRecipients_isset;
    BOOL __noUpdateNotebook_isset;
    BOOL __noExpungeNotebook_isset;
    BOOL __noSetDefaultNotebook_isset;
    BOOL __noSetNotebookStack_isset;
    BOOL __noPublishToPublic_isset;
    BOOL __noPublishToBusinessLibrary_isset;
    BOOL __noCreateTags_isset;
    BOOL __noUpdateTags_isset;
    BOOL __noExpungeTags_isset;
    BOOL __noSetParentTag_isset;
    BOOL __noCreateSharedNotebooks_isset;
    BOOL __updateWhichSharedNotebookRestrictions_isset;
    BOOL __expungeWhichSharedNotebookRestrictions_isset;
}

- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetExpungeWhichSharedNotebookRestrictions;
- (BOOL)expungeWhichSharedNotebookRestrictionsIsSet;
- (void)setExpungeWhichSharedNotebookRestrictions:(int)fp8;
- (int)expungeWhichSharedNotebookRestrictions;
- (void)unsetUpdateWhichSharedNotebookRestrictions;
- (BOOL)updateWhichSharedNotebookRestrictionsIsSet;
- (void)setUpdateWhichSharedNotebookRestrictions:(int)fp8;
- (int)updateWhichSharedNotebookRestrictions;
- (void)unsetNoCreateSharedNotebooks;
- (BOOL)noCreateSharedNotebooksIsSet;
- (void)setNoCreateSharedNotebooks:(BOOL)fp8;
- (BOOL)noCreateSharedNotebooks;
- (void)unsetNoSetParentTag;
- (BOOL)noSetParentTagIsSet;
- (void)setNoSetParentTag:(BOOL)fp8;
- (BOOL)noSetParentTag;
- (void)unsetNoExpungeTags;
- (BOOL)noExpungeTagsIsSet;
- (void)setNoExpungeTags:(BOOL)fp8;
- (BOOL)noExpungeTags;
- (void)unsetNoUpdateTags;
- (BOOL)noUpdateTagsIsSet;
- (void)setNoUpdateTags:(BOOL)fp8;
- (BOOL)noUpdateTags;
- (void)unsetNoCreateTags;
- (BOOL)noCreateTagsIsSet;
- (void)setNoCreateTags:(BOOL)fp8;
- (BOOL)noCreateTags;
- (void)unsetNoPublishToBusinessLibrary;
- (BOOL)noPublishToBusinessLibraryIsSet;
- (void)setNoPublishToBusinessLibrary:(BOOL)fp8;
- (BOOL)noPublishToBusinessLibrary;
- (void)unsetNoPublishToPublic;
- (BOOL)noPublishToPublicIsSet;
- (void)setNoPublishToPublic:(BOOL)fp8;
- (BOOL)noPublishToPublic;
- (void)unsetNoSetNotebookStack;
- (BOOL)noSetNotebookStackIsSet;
- (void)setNoSetNotebookStack:(BOOL)fp8;
- (BOOL)noSetNotebookStack;
- (void)unsetNoSetDefaultNotebook;
- (BOOL)noSetDefaultNotebookIsSet;
- (void)setNoSetDefaultNotebook:(BOOL)fp8;
- (BOOL)noSetDefaultNotebook;
- (void)unsetNoExpungeNotebook;
- (BOOL)noExpungeNotebookIsSet;
- (void)setNoExpungeNotebook:(BOOL)fp8;
- (BOOL)noExpungeNotebook;
- (void)unsetNoUpdateNotebook;
- (BOOL)noUpdateNotebookIsSet;
- (void)setNoUpdateNotebook:(BOOL)fp8;
- (BOOL)noUpdateNotebook;
- (void)unsetNoSendMessageToRecipients;
- (BOOL)noSendMessageToRecipientsIsSet;
- (void)setNoSendMessageToRecipients:(BOOL)fp8;
- (BOOL)noSendMessageToRecipients;
- (void)unsetNoEmailNotes;
- (BOOL)noEmailNotesIsSet;
- (void)setNoEmailNotes:(BOOL)fp8;
- (BOOL)noEmailNotes;
- (void)unsetNoShareNotes;
- (BOOL)noShareNotesIsSet;
- (void)setNoShareNotes:(BOOL)fp8;
- (BOOL)noShareNotes;
- (void)unsetNoExpungeNotes;
- (BOOL)noExpungeNotesIsSet;
- (void)setNoExpungeNotes:(BOOL)fp8;
- (BOOL)noExpungeNotes;
- (void)unsetNoUpdateNotes;
- (BOOL)noUpdateNotesIsSet;
- (void)setNoUpdateNotes:(BOOL)fp8;
- (BOOL)noUpdateNotes;
- (void)unsetNoCreateNotes;
- (BOOL)noCreateNotesIsSet;
- (void)setNoCreateNotes:(BOOL)fp8;
- (BOOL)noCreateNotes;
- (void)unsetNoReadNotes;
- (BOOL)noReadNotesIsSet;
- (void)setNoReadNotes:(BOOL)fp8;
- (BOOL)noReadNotes;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithNoReadNotes:(BOOL)fp8 noCreateNotes:(BOOL)fp12 noUpdateNotes:(BOOL)fp16 noExpungeNotes:(BOOL)fp20 noShareNotes:(BOOL)fp24 noEmailNotes:(BOOL)fp28 noSendMessageToRecipients:(BOOL)fp32 noUpdateNotebook:(BOOL)fp36 noExpungeNotebook:(BOOL)fp40 noSetDefaultNotebook:(BOOL)fp44 noSetNotebookStack:(BOOL)fp48 noPublishToPublic:(BOOL)fp52 noPublishToBusinessLibrary:(BOOL)fp56 noCreateTags:(BOOL)fp60 noUpdateTags:(BOOL)fp64 noExpungeTags:(BOOL)fp68 noSetParentTag:(BOOL)fp72 noCreateSharedNotebooks:(BOOL)fp76 updateWhichSharedNotebookRestrictions:(int)fp80 expungeWhichSharedNotebookRestrictions:(int)fp84;
- (id)init;

@end
