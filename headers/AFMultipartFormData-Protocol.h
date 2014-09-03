/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol AFMultipartFormData
- (void)throttleBandwidthWithPacketSize:(unsigned int)fp8 delay:(double)fp12;
- (void)appendPartWithHeaders:(id)fp8 body:(id)fp12;
- (void)appendPartWithFormData:(id)fp8 name:(id)fp12;
- (void)appendPartWithFileData:(id)fp8 name:(id)fp12 fileName:(id)fp16 mimeType:(id)fp20;
- (void)appendPartWithInputStream:(id)fp8 name:(id)fp12 fileName:(id)fp16 length:(unsigned long long)fp20 mimeType:(id)fp28;
- (BOOL)appendPartWithFileURL:(id)fp8 name:(id)fp12 fileName:(id)fp16 mimeType:(id)fp20 error:(id *)fp24;
- (BOOL)appendPartWithFileURL:(id)fp8 name:(id)fp12 error:(id *)fp16;
@end

