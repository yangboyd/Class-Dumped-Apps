//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FIRInAppMessagingImageData : NSObject
{
    NSString *_imageURL;
    NSData *_imageRawData;
}

@property(readonly, nonatomic) NSData *imageRawData; // @synthesize imageRawData=_imageRawData;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageURL:(id)arg1 imageData:(id)arg2;

@end

