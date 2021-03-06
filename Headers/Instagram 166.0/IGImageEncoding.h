//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGImageEncoderMetadata, NSData, NSNumber, NSString;

@interface IGImageEncoding : FBValueObject <NSCopying, NSCoding>
{
    long long _format;
    NSData *_data;
    NSString *_colorspace;
    double _quality;
    NSNumber *_ssim;
    IGImageEncoderMetadata *_imageEncoderMetadata;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGImageEncoderMetadata *imageEncoderMetadata; // @synthesize imageEncoderMetadata=_imageEncoderMetadata;
@property(readonly, copy, nonatomic) NSNumber *ssim; // @synthesize ssim=_ssim;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, copy, nonatomic) NSString *colorspace; // @synthesize colorspace=_colorspace;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFormat:(long long)arg1 data:(id)arg2 size:(struct CGSize)arg3 colorspace:(id)arg4 quality:(double)arg5 ssim:(id)arg6 imageEncoderMetadata:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end

