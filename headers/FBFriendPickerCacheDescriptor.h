/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FBCacheDescriptor.h"

#import "FBGraphObjectPagingLoaderDelegate-Protocol.h"

@class FBGraphObjectPagingLoader, NSSet, NSString;

@interface FBFriendPickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate>
{
    BOOL _hasCompletedFetch;
    BOOL _usePageLimitOfOne;
    NSSet *_fieldsForRequest;
    NSString *_userID;
    FBGraphObjectPagingLoader *_loader;
}

- (void)setUsePageLimitOfOne:(BOOL)fp8;
- (BOOL)usePageLimitOfOne;
- (void)setHasCompletedFetch:(BOOL)fp8;
- (BOOL)hasCompletedFetch;
- (void)setLoader:(id)fp8;
- (id)loader;
- (void)setUserID:(id)fp8;
- (id)userID;
- (void)setFieldsForRequest:(id)fp8;
- (id)fieldsForRequest;
- (void)pagingLoaderDidFinishLoading:(id)fp8;
- (void)setUsePageLimitOfOne;
- (void)prefetchAndCacheForSession:(id)fp8;
- (void)dealloc;
- (id)initWithUserID:(id)fp8 fieldsForRequest:(id)fp12;
- (id)initWithFieldsForRequest:(id)fp8;
- (id)initWithUserID:(id)fp8;
- (id)init;

@end

