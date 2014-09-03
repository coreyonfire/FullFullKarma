/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "TProcessor-Protocol.h"

@class NSDictionary;

@interface EDAMNoteStoreProcessor : _AVAudioSessionCategoryPlayback <TProcessor>
{
    id <EDAMNoteStore> mService;
    NSDictionary *mMethodMap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)process_findRelated_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_authenticateToSharedNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_stopSharingNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_shareNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_emailNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getSharedNotebookByAuth_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_authenticateToSharedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeLinkedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listLinkedNotebooks_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateLinkedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createLinkedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeSharedNotebooks_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listSharedNotebooks_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_sendMessageToSharedNotebookMembers_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_setSharedNotebookRecipientSettings_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateSharedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createSharedNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getPublicNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceAttributes_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceAlternateData_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceRecognition_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceByHash_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceData_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateResource_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_unsetResourceApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_setResourceApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceApplicationData_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResource_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteVersion_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listNoteVersions_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_copyNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeInactiveNotes_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeNotes_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_deleteNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteTagNames_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getResourceSearchText_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteSearchText_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteContent_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_unsetNoteApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_setNoteApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteApplicationDataEntry_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNoteApplicationData_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNote_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_findNoteCounts_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_findNotesMetadata_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_findNoteOffset_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_findNotes_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeSearch_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateSearch_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createSearch_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getSearch_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listSearches_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeTag_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_untagAll_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateTag_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createTag_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getTag_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listTagsByNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listTags_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_expungeNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_updateNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_createNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getDefaultNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getNotebook_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_listNotebooks_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getLinkedNotebookSyncChunk_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getLinkedNotebookSyncState_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getFilteredSyncChunk_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getSyncChunk_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getSyncStateWithMetrics_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (void)process_getSyncState_withSequenceID:(int)fp8 inProtocol:(id)fp12 outProtocol:(id)fp16;
- (BOOL)processOnInputProtocol:(id)fp8 outputProtocol:(id)fp12;
- (id)service;
- (id)initWithNoteStore:(id)fp8;

@end

