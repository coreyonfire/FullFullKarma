/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMLazyMap, NSString;

@interface EDAMResourceAttributes : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__sourceURL;
    long long __timestamp;
    double __latitude;
    double __longitude;
    double __altitude;
    NSString *__cameraMake;
    NSString *__cameraModel;
    BOOL __clientWillIndex;
    NSString *__recoType;
    NSString *__fileName;
    BOOL __attachment;
    EDAMLazyMap *__applicationData;
    BOOL __sourceURL_isset;
    BOOL __timestamp_isset;
    BOOL __latitude_isset;
    BOOL __longitude_isset;
    BOOL __altitude_isset;
    BOOL __cameraMake_isset;
    BOOL __cameraModel_isset;
    BOOL __clientWillIndex_isset;
    BOOL __recoType_isset;
    BOOL __fileName_isset;
    BOOL __attachment_isset;
    BOOL __applicationData_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetApplicationData;
- (BOOL)applicationDataIsSet;
- (void)setApplicationData:(id)fp8;
- (id)applicationData;
- (void)unsetAttachment;
- (BOOL)attachmentIsSet;
- (void)setAttachment:(BOOL)fp8;
- (BOOL)attachment;
- (void)unsetFileName;
- (BOOL)fileNameIsSet;
- (void)setFileName:(id)fp8;
- (id)fileName;
- (void)unsetRecoType;
- (BOOL)recoTypeIsSet;
- (void)setRecoType:(id)fp8;
- (id)recoType;
- (void)unsetClientWillIndex;
- (BOOL)clientWillIndexIsSet;
- (void)setClientWillIndex:(BOOL)fp8;
- (BOOL)clientWillIndex;
- (void)unsetCameraModel;
- (BOOL)cameraModelIsSet;
- (void)setCameraModel:(id)fp8;
- (id)cameraModel;
- (void)unsetCameraMake;
- (BOOL)cameraMakeIsSet;
- (void)setCameraMake:(id)fp8;
- (id)cameraMake;
- (void)unsetAltitude;
- (BOOL)altitudeIsSet;
- (void)setAltitude:(double)fp8;
- (double)altitude;
- (void)unsetLongitude;
- (BOOL)longitudeIsSet;
- (void)setLongitude:(double)fp8;
- (double)longitude;
- (void)unsetLatitude;
- (BOOL)latitudeIsSet;
- (void)setLatitude:(double)fp8;
- (double)latitude;
- (void)unsetTimestamp;
- (BOOL)timestampIsSet;
- (void)setTimestamp:(long long)fp8;
- (long long)timestamp;
- (void)unsetSourceURL;
- (BOOL)sourceURLIsSet;
- (void)setSourceURL:(id)fp8;
- (id)sourceURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithSourceURL:(id)fp8 timestamp:(long long)fp12 latitude:(double)fp20 longitude:(double)fp28 altitude:(double)fp36 cameraMake:(id)fp44 cameraModel:(id)fp48 clientWillIndex:(BOOL)fp52 recoType:(id)fp56 fileName:(id)fp60 attachment:(BOOL)fp64 applicationData:(id)fp68;
- (id)init;

@end

