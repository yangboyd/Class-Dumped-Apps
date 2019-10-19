//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJURect;

@protocol SOJUGalleryServletFaceParams <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *mediaTimestampMs;
@property(readonly, copy, nonatomic) NSNumber *hatScore;
@property(readonly, copy, nonatomic) NSNumber *smileScore;
@property(readonly, copy, nonatomic) NSNumber *genderScore;
@property(readonly, copy, nonatomic) NSNumber *gender;
@property(readonly, copy, nonatomic) NSString *faceVersion;
@property(readonly, copy, nonatomic) NSString *mediaBytes;
@property(readonly, copy, nonatomic) SOJURect *relativeBoundingBox;
@property(readonly, copy, nonatomic) SOJURect *boundingBox;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, copy, nonatomic) NSString *faceId;
@end

