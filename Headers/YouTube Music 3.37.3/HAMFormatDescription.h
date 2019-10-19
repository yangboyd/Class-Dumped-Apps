//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBuildableObject.h"

#import "NSCopying-Protocol.h"

@class HAMSphericalVideoMesh, HAMSphericalVideoPose, NSData, NSDictionary;
@protocol HAMFormat;

@interface HAMFormatDescription : HAMBuildableObject <NSCopying>
{
    const struct opaqueCMFormatDescription *_formatDescription;
    id <HAMFormat> _format;
    NSDictionary *_userInfo;
}

+ (id)builder;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) id <HAMFormat> format; // @synthesize format=_format;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool decoderSupportsResizingOutput;
@property(readonly, nonatomic) unsigned int mediaSubType;
@property(readonly, nonatomic) const struct AudioStreamBasicDescription *audioStreamBasicDescription;
- (void)dealloc;
- (id)init;
- (id)initWithBuilder:(id)arg1;
@property(readonly, nonatomic) NSData *MP4DefaultKeyID;
@property(readonly, nonatomic) NSData *MP4PSSHKey;
@property(readonly, nonatomic) CDStruct_59e9a54d MP4InitializationData;
@property(readonly, nonatomic) CDStruct_b2c20b75 webMInitializationData;
@property(readonly, nonatomic) unsigned long long opusCodecDelay;
@property(readonly, nonatomic) unsigned long long opusSeekPreRoll;
@property(readonly, nonatomic) NSData *opusHeadPacket;
@property(readonly, nonatomic) HAMSphericalVideoMesh *sphericalVideoMeshRight;
@property(readonly, nonatomic) HAMSphericalVideoMesh *sphericalVideoMeshLeft;
@property(readonly, nonatomic) HAMSphericalVideoPose *sphericalVideoPose;
@property(readonly, nonatomic) unsigned char stereoVideoMode;

@end

