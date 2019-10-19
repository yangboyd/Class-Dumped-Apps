//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeoProductSelectionSubviewViewModel-Protocol.h"

@class NSString, NSURL;

@interface SCOnDemandGeoProductSelectionSubviewViewModel : NSObject <SCOnDemandGeoProductSelectionSubviewViewModel>
{
    NSString *_title;
    NSString *_productDescription;
    NSString *_buttonTitle;
    NSURL *_videoUrl;
    NSURL *_imageUrl;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(readonly, copy, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 productDescription:(id)arg2 buttonTitle:(id)arg3 videoUrl:(id)arg4 imageUrl:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

