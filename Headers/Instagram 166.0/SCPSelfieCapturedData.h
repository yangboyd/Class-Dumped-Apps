//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSData, NSNumber, NSURL;

@interface SCPSelfieCapturedData : NSObject <NSCopying>
{
    NSURL *_videoURL;
    NSData *_singleFrameImageData;
    NSNumber *_fileSize;
    NSNumber *_duration;
    NSNumber *_bitRate;
    NSNumber *_height;
    NSNumber *_width;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSData *singleFrameImageData; // @synthesize singleFrameImageData=_singleFrameImageData;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoURL:(id)arg1 singleFrameImageData:(id)arg2 fileSize:(id)arg3 duration:(id)arg4 bitRate:(id)arg5 height:(id)arg6 width:(id)arg7;

@end

