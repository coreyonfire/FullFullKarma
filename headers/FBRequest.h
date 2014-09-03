/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class FBSession, NSError, NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface FBRequest : _AVAudioSessionCategoryPlayback
{
    id <FBRequestDelegate> _delegate;
    NSString *_url;
    NSURLConnection *_connection;
    NSMutableData *_responseText;
    unsigned int _state;
    NSError *_error;
    BOOL _sessionDidExpire;
    id <FBGraphObject> _graphObject;
    BOOL _canCloseSessionOnError;
    NSMutableDictionary *_parameters;
    FBSession *_session;
    NSString *_graphPath;
    NSString *_restMethod;
    NSString *_HTTPMethod;
}

+ (id)requestForUpdateOpenGraphObjectWithId:(id)fp8 graphObject:(id)fp12;
+ (id)requestForUploadStagingResourceWithImage:(id)fp8;
+ (id)requestForUpdateOpenGraphObjectWithId:(id)fp8 title:(id)fp12 image:(id)fp16 url:(id)fp20 description:(id)fp24 objectProperties:(id)fp28;
+ (id)requestForUpdateOpenGraphObject:(id)fp8;
+ (id)requestForPostOpenGraphObjectWithType:(id)fp8 title:(id)fp12 image:(id)fp16 url:(id)fp20 description:(id)fp24 objectProperties:(id)fp28;
+ (id)requestForPostOpenGraphObject:(id)fp8;
+ (id)requestForCustomAudienceThirdPartyID:(id)fp8;
+ (id)requestForPlacesSearchAtCoordinate:(CDAnonymousStruct1)fp8 radiusInMeters:(int)fp24 resultsLimit:(int)fp28 searchText:(id)fp32;
+ (id)requestWithGraphPath:(id)fp8 parameters:(id)fp12 HTTPMethod:(id)fp16;
+ (id)requestForPostStatusUpdate:(id)fp8 place:(id)fp12 tags:(id)fp16;
+ (id)requestForPostStatusUpdate:(id)fp8;
+ (id)requestForPostWithGraphPath:(id)fp8 graphObject:(id)fp12;
+ (id)requestForDeleteObject:(id)fp8;
+ (id)requestForGraphPath:(id)fp8;
+ (id)requestForUploadPhoto:(id)fp8;
+ (id)requestForMyFriends;
+ (id)requestForMe;
+ (id)serializeURL:(id)fp8 params:(id)fp12 httpMethod:(id)fp16;
+ (id)serializeURL:(id)fp8 params:(id)fp12;
- (void)setCanCloseSessionOnError:(BOOL)fp8;
- (BOOL)canCloseSessionOnError;
- (void)setHTTPMethod:(id)fp8;
- (id)HTTPMethod;
- (void)setRestMethod:(id)fp8;
- (id)restMethod;
- (void)setGraphPath:(id)fp8;
- (id)graphPath;
- (void)setSession:(id)fp8;
- (id)session;
- (id)parameters;
- (id)createRequestConnection;
- (id)startWithCompletionHandler:(id)fp(null);
- (void)setGraphObject:(id)fp8;
- (id)graphObject;
- (void)dealloc;
- (id)initWithSession:(id)fp8 graphPath:(id)fp12 parameters:(id)fp16 HTTPMethod:(id)fp20;
- (id)initWithSession:(id)fp8 restMethod:(id)fp12 parameters:(id)fp16 HTTPMethod:(id)fp20;
- (id)initForPostWithSession:(id)fp8 graphPath:(id)fp12 graphObject:(id)fp16;
- (id)initWithSession:(id)fp8 graphPath:(id)fp12;
- (id)init;
- (id)description;
- (BOOL)loading;
- (void)setSessionDidExpire:(BOOL)fp8;
- (BOOL)sessionDidExpire;
- (void)setState:(unsigned int)fp8;
- (unsigned int)state;
- (void)setError:(id)fp8;
- (id)error;
- (void)setResponseText:(id)fp8;
- (id)responseText;
- (void)setConnection:(id)fp8;
- (id)connection;
- (void)setParams:(id)fp8;
- (id)params;
- (void)setHttpMethod:(id)fp8;
- (id)httpMethod;
- (void)setUrl:(id)fp8;
- (id)url;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end

