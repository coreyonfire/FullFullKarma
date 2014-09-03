/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface ENCredentials : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *_host;
    NSString *_edamUserId;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_authenticationToken;
}

- (void)setAuthenticationToken:(id)fp8;
- (void)setWebApiUrlPrefix:(id)fp8;
- (id)webApiUrlPrefix;
- (void)setNoteStoreUrl:(id)fp8;
- (id)noteStoreUrl;
- (void)setEdamUserId:(id)fp8;
- (id)edamUserId;
- (void)setHost:(id)fp8;
- (id)host;
- (void).cxx_destruct;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)authenticationToken;
- (void)deleteFromKeychain;
- (BOOL)saveToKeychain;
- (id)initWithHost:(id)fp8 edamUserId:(id)fp12 noteStoreUrl:(id)fp16 webApiUrlPrefix:(id)fp20 authenticationToken:(id)fp24;

@end
