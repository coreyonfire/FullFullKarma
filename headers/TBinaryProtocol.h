/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "TProtocol-Protocol.h"

@interface TBinaryProtocol : _AVAudioSessionCategoryPlayback <TProtocol>
{
    id <TTransport> mTransport;
    BOOL mStrictRead;
    BOOL mStrictWrite;
    int mMessageSizeLimit;
}

- (void).cxx_destruct;
- (void)writeBool:(BOOL)fp8;
- (void)writeListEnd;
- (void)writeListBeginWithElementType:(int)fp8 size:(int)fp12;
- (void)writeSetEnd;
- (void)writeSetBeginWithElementType:(int)fp8 size:(int)fp12;
- (void)writeMapEnd;
- (void)writeMapBeginWithKeyType:(int)fp8 valueType:(int)fp12 size:(int)fp16;
- (void)writeFieldEnd;
- (void)writeFieldStop;
- (void)writeBinary:(id)fp8;
- (void)writeString:(id)fp8;
- (void)writeDouble:(double)fp8;
- (void)writeI64:(long long)fp8;
- (void)writeI16:(short)fp8;
- (void)writeI32:(int)fp8;
- (void)writeFieldBeginWithName:(id)fp8 type:(int)fp12 fieldID:(int)fp16;
- (void)writeStructEnd;
- (void)writeStructBeginWithName:(id)fp8;
- (void)writeMessageEnd;
- (void)writeMessageBeginWithName:(id)fp8 type:(int)fp12 sequenceID:(int)fp16;
- (void)writeByte:(unsigned char)fp8;
- (void)readListEnd;
- (void)readListBeginReturningElementType:(int *)fp8 size:(int *)fp12;
- (void)readSetEnd;
- (void)readSetBeginReturningElementType:(int *)fp8 size:(int *)fp12;
- (void)readMapEnd;
- (void)readMapBeginReturningKeyType:(int *)fp8 valueType:(int *)fp12 size:(int *)fp16;
- (id)readBinary;
- (double)readDouble;
- (long long)readI64;
- (short)readI16;
- (unsigned char)readByte;
- (BOOL)readBool;
- (id)readString;
- (int)readI32;
- (void)readFieldEnd;
- (void)readFieldBeginReturningName:(id *)fp8 type:(int *)fp12 fieldID:(int *)fp16;
- (void)readStructEnd;
- (void)readStructBeginReturningName:(id *)fp8;
- (void)readMessageEnd;
- (void)readMessageBeginReturningName:(id *)fp8 type:(int *)fp12 sequenceID:(int *)fp16;
- (id)readStringBody:(int)fp8;
- (id)transport;
- (void)dealloc;
- (void)setMessageSizeLimit:(int)fp8;
- (int)messageSizeLimit;
- (id)initWithTransport:(id)fp8 strictRead:(BOOL)fp12 strictWrite:(BOOL)fp16;
- (id)initWithTransport:(id)fp8;

@end

