/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "AFHTTPRequestOperation.h"

@class NSError;

@interface AFPropertyListRequestOperation : AFHTTPRequestOperation
{
    id _responsePropertyList;
    unsigned int _propertyListReadOptions;
    unsigned int _propertyListFormat;
    NSError *_propertyListError;
}

+ (BOOL)canProcessRequest:(id)fp8;
+ (id)acceptableContentTypes;
+ (id)propertyListRequestOperationWithRequest:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)setPropertyListError:(id)fp8;
- (id)propertyListError;
- (void)setPropertyListFormat:(unsigned int)fp8;
- (unsigned int)propertyListFormat;
- (void)setPropertyListReadOptions:(unsigned int)fp8;
- (unsigned int)propertyListReadOptions;
- (void)setResponsePropertyList:(id)fp8;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(id)fp(null) failure:(void)fp8;
- (id)error;
- (id)responsePropertyList;
- (id)initWithRequest:(id)fp8;

@end

