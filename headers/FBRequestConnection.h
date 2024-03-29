/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class FBLogger, FBRequest, FBRequestConnectionRetryManager, FBURLConnection, NSHTTPURLResponse, NSMutableArray, NSMutableURLRequest;

@interface FBRequestConnection : _AVAudioSessionCategoryPlayback
{
    BOOL _errorBehavior;
    BOOL _isResultFromCache;
    NSHTTPURLResponse *_urlResponse;
    FBURLConnection *_connection;
    NSMutableArray *_requests;
    int _state;
    NSMutableURLRequest *_internalUrlRequest;
    FBRequest *_deprecatedRequest;
    FBLogger *_logger;
    unsigned long _requestStartTime;
    FBRequestConnectionRetryManager *_retryManager;
    double _timeout;
}

+ (void)addRequestToRefreshPermissionsSession:(id)fp8 connection:(id)fp12;
+ (void)addRequestToExtendTokenForSession:(id)fp8 connection:(id)fp12;
+ (id)userAgent;
+ (void)processGraphObject:(id)fp8 forPath:(id)fp12 withAction:(id)fp(null);
+ (void)processGraphObjectPropertyKey:(id)fp8 value:(id)fp12 action:(id)fp(null) passByValue:(void)fp16;
+ (id)startForUploadStagingResourceWithImage:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForUpdateOpenGraphObjectWithId:(id)fp8 title:(id)fp12 image:(id)fp16 url:(id)fp20 description:(id)fp24 objectProperties:(id)fp28 completionHandler:(id)fp(null);
+ (id)startForUpdateOpenGraphObject:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForPostOpenGraphObjectWithType:(id)fp8 title:(id)fp12 image:(id)fp16 url:(id)fp20 description:(id)fp24 objectProperties:(id)fp28 completionHandler:(id)fp(null);
+ (id)startForPostOpenGraphObject:(id)fp8 completionHandler:(id)fp(null);
+ (id)startWithGraphPath:(id)fp8 parameters:(id)fp12 HTTPMethod:(id)fp16 completionHandler:(id)fp(null);
+ (id)startForPostWithGraphPath:(id)fp8 graphObject:(id)fp12 completionHandler:(id)fp(null);
+ (id)startForDeleteObject:(id)fp8 completionHandler:(id)fp(null);
+ (id)startWithGraphPath:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForCustomAudienceThirdPartyID:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForPlacesSearchAtCoordinate:(CDAnonymousStruct1)fp8 radiusInMeters:(int)fp24 resultsLimit:(int)fp28 searchText:(id)fp32 completionHandler:(id)fp(null);
+ (id)startForPostStatusUpdate:(id)fp8 place:(id)fp12 tags:(id)fp16 completionHandler:(id)fp(null);
+ (id)startForPostStatusUpdate:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForUploadPhoto:(id)fp8 completionHandler:(id)fp(null);
+ (id)startForMyFriendsWithCompletionHandler:(id)fp(null);
+ (id)startForMeWithCompletionHandler:(id)fp(null);
- (void)setRetryManager:(id)fp8;
- (id)retryManager;
- (BOOL)isResultFromCache;
- (void)setRequestStartTime:(unsigned long)fp8;
- (unsigned long)requestStartTime;
- (void)setLogger:(id)fp8;
- (id)logger;
- (void)setDeprecatedRequest:(id)fp8;
- (id)deprecatedRequest;
- (void)setInternalUrlRequest:(id)fp8;
- (id)internalUrlRequest;
- (void)setTimeout:(double)fp8;
- (double)timeout;
- (void)setState:(int)fp8;
- (int)state;
- (void)setRequests:(id)fp8;
- (id)requests;
- (void)setConnection:(id)fp8;
- (id)connection;
- (void)setUrlResponse:(id)fp8;
- (id)urlResponse;
- (id)description;
- (id)getRequestMetadata:(id)fp8;
- (void)addPiggybackRequests;
- (void)registerTokenToOmitFromLog:(id)fp8;
- (BOOL)isExpiredTokenError:(id)fp8 resultIndex:(unsigned int)fp12;
- (BOOL)isPasswordChangeError:(id)fp8 resultIndex:(unsigned int)fp12;
- (BOOL)isInvalidSessionError:(id)fp8 resultIndex:(unsigned int)fp12;
- (BOOL)isInsufficientPermissionError:(id)fp8 resultIndex:(unsigned int)fp12;
- (id)checkConnectionError:(id)fp8 statusCode:(int)fp12 parsedJSONResponse:(id)fp16;
- (id)errorWithCode:(int)fp8 statusCode:(int)fp12 parsedJSONResponse:(id)fp16 innerError:(id)fp20 message:(id)fp24;
- (id)errorFromResult:(id)fp8;
- (void)completeWithResults:(id)fp8 orError:(id)fp12;
- (BOOL)shouldCloseRequestSession:(id)fp8;
- (id)unpackIndividualJSONResponseError:(id)fp8;
- (void)completeDeprecatedWithData:(id)fp8 results:(id)fp12 orError:(id)fp16;
- (id)parseJSONOrOtherwise:(id)fp8 error:(id *)fp12;
- (id)parseJSONResponse:(id)fp8 error:(id *)fp12 statusCode:(int)fp16;
- (void)completeWithResponse:(id)fp8 data:(id)fp12 orError:(id)fp16;
- (void)appendAttachments:(id)fp8 toBody:(id)fp12 addFormData:(BOOL)fp16 logger:(id)fp20;
- (BOOL)isAttachment:(id)fp8;
- (void)addRequest:(id)fp8 toBatch:(id)fp12 attachments:(id)fp16;
- (void)appendJSONRequests:(id)fp8 toBody:(id)fp12 andNameAttachments:(id)fp16 logger:(id)fp20;
- (id)getBatchAppID:(id)fp8;
- (id)urlStringForSingleRequest:(id)fp8 forBatch:(BOOL)fp12;
- (void)logRequest:(id)fp8 bodyLength:(unsigned int)fp12 bodyLogger:(id)fp16 attachmentLogger:(id)fp20;
- (id)requestWithBatch:(id)fp8 timeout:(double)fp12;
- (id)newFBURLConnection;
- (void)startURLConnectionWithRequest:(id)fp8 skipRoundTripIfCached:(BOOL)fp12 completionHandler:(id)fp(null);
- (void)startWithCacheIdentity:(id)fp8 skipRoundtripIfCached:(BOOL)fp12;
- (void)cancel;
- (void)start;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null) batchParameters:(void)fp12 behavior:(id)fp16;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null) batchParameters:(void)fp12;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null) batchEntryName:(void)fp12;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null);
- (void)dealloc;
- (id)initWithMetadata:(id)fp8;
- (id)initWithTimeout:(double)fp8;
- (id)init;
- (void)setErrorBehavior:(int)fp8;
- (int)errorBehavior;
- (void)setUrlRequest:(id)fp8;
- (id)urlRequest;

@end

