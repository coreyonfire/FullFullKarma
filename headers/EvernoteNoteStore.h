/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ENAPI.h"

@class EDAMLinkedNotebook;

@interface EvernoteNoteStore : ENAPI
{
    BOOL _isBusiness;
    EDAMLinkedNotebook *_linkedNotebook;
}

+ (id)noteStoreForLinkedNotebook:(id)fp8;
+ (id)businessNoteStore;
+ (id)noteStore;
- (void)setLinkedNotebook:(id)fp8;
- (id)linkedNotebook;
- (void)setIsBusiness:(BOOL)fp8;
- (BOOL)isBusiness;
- (void).cxx_destruct;
- (void)setSharedNotebookRecipientSettingsWithSharedNotebookId:(long long)fp8 recipientSettings:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)updateSharedNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)authenticateToSharedNoteWithGuid:(id)fp8 noteKey:(id)fp12 authenticationToken:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)stopSharingNoteWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)shareNoteWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)emailNoteWithParameters:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getSharedNotebookByAuthWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)authenticateToSharedNotebookWithShareKey:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)expungeLinkedNotebookWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listLinkedNotebooksWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)updateLinkedNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createLinkedNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)expungeSharedNotebooksWithIds:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listSharedNotebooksWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)sendMessageToSharedNotebookMembersWithGuid:(id)fp8 messageText:(id)fp12 recipients:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)createSharedNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getPublicNotebookWithUserID:(int)fp8 publicUri:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)getResourceAttributesWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getResourceAlternateDataWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getResourceRecognitionWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getResourceByHashWithGuid:(id)fp8 contentHash:(id)fp12 withData:(BOOL)fp16 withRecognition:(BOOL)fp20 withAlternateData:(BOOL)fp24 success:(id)fp(null) failure:(void)fp28;
- (void)getResourceDataWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)updateResource:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)unsetResourceApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)setResourceApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 value:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)getResourceApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)getResourceApplicationDataWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getResourceWithGuid:(id)fp8 withData:(BOOL)fp12 withRecognition:(BOOL)fp16 withAttributes:(BOOL)fp20 withAlternateDate:(BOOL)fp24 success:(id)fp(null) failure:(void)fp28;
- (void)getNoteVersionWithGuid:(id)fp8 updateSequenceNum:(int)fp12 withResourcesData:(BOOL)fp16 withResourcesRecognition:(BOOL)fp20 withResourcesAlternateData:(BOOL)fp24 success:(id)fp(null) failure:(void)fp28;
- (void)listNoteVersionsWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)copyNoteWithGuid:(id)fp8 toNoteBookGuid:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)expungeInactiveNoteWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)expungeNotesWithGuids:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)expungeNoteWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)deleteNoteWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)updateNote:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createNote:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getNoteTagNamesWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getResourceSearchTextWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getNoteSearchTextWithGuid:(id)fp8 noteOnly:(BOOL)fp12 tokenizeForIndexing:(BOOL)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)getNoteContentWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)unsetNoteApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)setNoteApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 value:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)getNoteApplicationDataEntryWithGuid:(id)fp8 key:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)getNoteApplicationDataWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getNoteWithGuid:(id)fp8 withContent:(BOOL)fp12 withResourcesData:(BOOL)fp16 withResourcesRecognition:(BOOL)fp20 withResourcesAlternateData:(BOOL)fp24 success:(id)fp(null) failure:(void)fp28;
- (void)findNoteCountsWithFilter:(id)fp8 withTrash:(BOOL)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)findNotesMetadataWithFilter:(id)fp8 offset:(int)fp12 maxNotes:(int)fp16 resultSpec:(id)fp20 success:(id)fp(null) failure:(void)fp24;
- (void)findNoteOffsetWithFilter:(id)fp8 guid:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)findNotesWithFilter:(id)fp8 offset:(int)fp12 maxNotes:(int)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)findRealtedWithQuery:(id)fp8 resultSpec:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)expungeSearchWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)updateSearch:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createSearch:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getSearchWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listSearchesWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)expungeTagWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)untagAllWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)updateTag:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createTag:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getTagWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listTagsByNotebookWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listTagsWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)expungeNotebookWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)updateNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getDefaultNotebookWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)getLinkedNotebookSyncChunk:(id)fp8 afterUSN:(int)fp12 maxEntries:(int)fp16 fullSyncOnly:(BOOL)fp20 success:(id)fp(null) failure:(void)fp24;
- (void)getNotebookWithGuid:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listNotebooksWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)getLinkedNotebookSyncState:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)getFilteredSyncChunkAfterUSN:(int)fp8 maxEntries:(int)fp12 filter:(id)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)getSyncChunkAfterUSN:(int)fp8 maxEntries:(int)fp12 fullSyncOnly:(BOOL)fp16 success:(id)fp(null) failure:(void)fp20;
- (void)getSyncStateWithSuccess:(id)fp(null) failure:(void)fp8;
- (id)initWithSession:(id)fp8;
- (id)authenticationToken;
- (id)currentNoteStore;
- (void)setDownloadProgressBlock:(id)fp(null);
- (void)setUploadProgressBlock:(id)fp(null);
- (void)cancel;
- (void)viewNoteInEvernote:(id)fp8 inLinkedNotebook:(id)fp12;
- (void)viewNoteInEvernote:(id)fp8;
- (void)saveNewNoteToEvernoteApp:(id)fp8 withType:(id)fp12;
- (void)createBusinessTag:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createNote:(id)fp8 inBusinessNotebook:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)getCorrespondingNotebookForBusinessNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)deleteBusinessNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)createBusinessNotebook:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)isBusinessNotebookWritable:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)listBusinessNotebooksWithSuccess:(id)fp(null) failure:(void)fp8;
- (void)listNotesForLinkedNotebook:(id)fp8 withFilter:(id)fp12 success:(id)fp(null) failure:(void)fp16;

@end

