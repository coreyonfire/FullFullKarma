/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSData;

@interface FBCrypto : _AVAudioSessionCategoryPlayback
{
    NSData *_encryptionKeyData;
    NSData *_macKeyData;
}

+ (id)randomBytes:(unsigned int)fp8;
+ (id)makeMasterKey;
- (id)decrypt:(id)fp8 additionalSignedData:(id)fp12;
- (id)encrypt:(id)fp8 additionalDataToSign:(id)fp12;
- (id)_macForIV:(id)fp8 cipherData:(id)fp12 additionalDataToSign:(id)fp16;
- (void)dealloc;
- (id)initWithEncryptionKey:(id)fp8 macKey:(id)fp12;
- (id)initWithMasterKey:(id)fp8;

@end
